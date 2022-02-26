#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int i = 0, j = 0, red = 0, black = 0;

struct stack_entry {
  char *data;
  struct stack_entry *next;
};

struct stack_t
{
  struct stack_entry *head;
  size_t stackSize;
};

struct stack_t *newStack(void)
{
  struct stack_t *stack = malloc(sizeof *stack);
  if (stack)
  {
    stack->head = NULL;
    stack->stackSize = 0;
  }
  return stack;
}

char *copyString(char *str)
{
  char *tmp = malloc(strlen(str) + 1);
  if (tmp)
    strcpy(tmp, str);
  return tmp;
}

void push(struct stack_t *theStack, char *value)
{
  struct stack_entry *entry = malloc(sizeof *entry); 
  if (entry)
  {
    entry->data = copyString(value);
    entry->next = theStack->head;
    theStack->head = entry;
    theStack->stackSize++;
  }
}

char *top(struct stack_t *theStack)
{
  if (theStack && theStack->head)
    return theStack->head->data;
  else
    return NULL;
}

void pop(struct stack_t *theStack)
{
  if (theStack->head != NULL)
  {
    struct stack_entry *tmp = theStack->head;
    theStack->head = theStack->head->next;
    free(tmp->data);
    free(tmp);
    theStack->stackSize--;
  }
}

void clear (struct stack_t *theStack)
{
  while (theStack->head != NULL)
    pop(theStack);
}

void destroyStack(struct stack_t **theStack)
{
  clear(*theStack);
  free(*theStack);
  *theStack = NULL;
}

struct AST {
	char value[20];
	struct AST* left;
	struct AST* right;
	char type[20];
	char color[10];
};

struct AST* build_AST  (char build_value[20],
						struct AST* build_left,
						struct AST* build_right,
						char build_type[20],
						char build_color[20]
						) {

	//printf("%s\n", build_type);
	if (strcmp(build_type, "NULL\n") == 0)
		return NULL;
	//struct AST* new_ast = new_AST("value", "type");
	struct AST* node = (struct AST*)malloc(sizeof(struct AST));
	strcpy(node->value, build_value);
	strcpy(node->type, build_type);
	if (build_color)
		strcpy(node->color, build_color);
	node->left = build_left;
	node->right = build_right;
	
	return node;
}

int eval_AST (struct AST* eval_ast) {
	if (strcmp(eval_ast->type, "NR") == 0) {
		//printf("NR\n");
		return atoi(eval_ast->value);
	}
	if (strcmp(eval_ast->type, "OP") == 0) {
		//printf("OP\n");
		if (strcmp(eval_ast->value, "+") == 0)
			return eval_AST(eval_ast->left) + eval_AST(eval_ast->right);
		if (strcmp(eval_ast->value, "-") == 0)
			return eval_AST(eval_ast->left) - eval_AST(eval_ast->right);
		if (strcmp(eval_ast->value, "*") == 0)
			return eval_AST(eval_ast->left) * eval_AST(eval_ast->right);
		if (strcmp(eval_ast->value, "/") == 0)
			return eval_AST(eval_ast->left) / eval_AST(eval_ast->right);
	}
	//return 1;
}

int play_AST (struct AST* play_ast) {
	printf("%s | %s | %s\n", play_ast->value, play_ast->type, play_ast->color);
	if (play_ast->left != NULL)
		play_AST(play_ast->left);
	if (play_ast->right != NULL)
		play_AST(play_ast->right);
	return eval_AST(play_ast);
}

void delete_array (char array[100][100], int poz) {
	int j;
	for (j = poz; j < i; j++) strcpy(array[j-2], array[j]);
	i -= 2;
}

int is_operator (char operator[20]) {
	if (strcmp(operator, "+") != 0 &&
		strcmp(operator, "-") != 0 &&
		strcmp(operator, "*") != 0 &&
		strcmp(operator, "/") != 0 ) {

			return 0;
	}
	else return 1;
}

void construct_postfix(char expression[20], char postfix[100][100]) {
	struct stack_t *myStack = newStack();
  	char *data;
	char *token;

	token = strtok(expression, " ");
	while (token) {
		if (strcmp(token, "+") != 0 &&
			strcmp(token, "-") != 0 &&
			strcmp(token, "*") != 0 &&
			strcmp(token, "/") != 0 &&
			strcmp(token, "(") != 0 &&
			strcmp(token, ")") != 0 ) {

				strcpy(postfix[i++], token);			
		}

		if (strcmp(token, "+") == 0 ||
			strcmp(token, "-") == 0 ) {

				while  (top(myStack) != NULL &&
						(strcmp(top(myStack), "+") == 0 ||
						strcmp(top(myStack), "-") == 0 ||
						strcmp(top(myStack), "*") == 0 ||
						strcmp(top(myStack), "/") == 0 )) {
					data = top(myStack);
					strcpy(postfix[i++], data);
					pop(myStack);
				}
				push(myStack, token);
		}

		if (strcmp(token, "*") == 0 ||
			strcmp(token, "/") == 0 ) {

				while  (top(myStack) != NULL &&
						(strcmp(top(myStack), "*") == 0 ||
						strcmp(top(myStack), "/") == 0 )) {
					data = top(myStack);
					strcpy(postfix[i++], data);
					pop(myStack);
				}
				push(myStack, token);
		}

		if (strcmp(token, "(") == 0) {
			push(myStack, token);
		}

		if (strcmp(token, ")") == 0) {
			while  (top(myStack) != NULL && strcmp(top(myStack), "(") != 0) {
				data = top(myStack);
				strcpy(postfix[i++], data);
				pop(myStack);
			}
			pop(myStack);
		}

		token = strtok(NULL, " ");
	}

	while (top(myStack) != NULL) {
		data = top(myStack);
		strcpy(postfix[i++], data);
		pop(myStack);
	}
}

int solution(char expression[100]) {
	
	char postfix[100][100];
	construct_postfix(expression, postfix);

	struct AST* red_AST = (struct AST*)malloc(sizeof(struct AST));
	struct AST* black_AST = (struct AST*)malloc(sizeof(struct AST));

	for (j = 0; j < i; j++) {
		//printf("%s\n", postfix[j]);
		if (is_operator(postfix[j])) {

			if (is_operator(postfix[j-2])) {

				if (is_operator(postfix[j-1])) {

					// RED & BLACK
					struct AST* new_AST = (struct AST*)malloc(sizeof(struct AST));
					new_AST = build_AST(postfix[j], red_AST, black_AST, "OP", "red");
					red_AST = new_AST;
					red = 1;
				}

				else {

					// RED & NR
					struct AST* right_AST = (struct AST*)malloc(sizeof(struct AST));
					struct AST* new_AST = (struct AST*)malloc(sizeof(struct AST));
					right_AST = build_AST(postfix[j-1], NULL, NULL, "NR", NULL);
					new_AST = build_AST(postfix[j], red_AST, right_AST, "OP", "red");
					red_AST = new_AST;
				}
			}

			else if (is_operator(postfix[j-1])) {

					// NR & BLACK
					struct AST* left_AST = (struct AST*)malloc(sizeof(struct AST));
					struct AST* new_AST = (struct AST*)malloc(sizeof(struct AST));
					left_AST = build_AST(postfix[j-2], NULL, NULL, "NR", NULL);
					if (black) {

						new_AST = build_AST(postfix[j], left_AST, black_AST, "OP", "black");
						black_AST = new_AST;
						//red = 1;
					}
					else {

						new_AST = build_AST(postfix[j], left_AST, red_AST, "OP", "red");
						//red = 1;
						red_AST = new_AST;
					}
				}

				else {

					// NR & NR
					struct AST* left_AST = (struct AST*)malloc(sizeof(struct AST));
					struct AST* right_AST = (struct AST*)malloc(sizeof(struct AST));
					struct AST* new_AST = (struct AST*)malloc(sizeof(struct AST));
					left_AST = build_AST(postfix[j-2], NULL, NULL, "NR", NULL);
					right_AST = build_AST(postfix[j-1], NULL, NULL, "NR", NULL);
					if (red) {
						//printf("BLACK%d\n", j);
						new_AST = build_AST(postfix[j], left_AST, right_AST, "OP", "black");
						black_AST = new_AST;
						black = 1;
					}
					else {
						//printf("RED%d\n", j);
						new_AST = build_AST(postfix[j], left_AST, right_AST, "OP", "red");
						red_AST = new_AST;
						red = 1;
					}
					delete_array(postfix, j);
					j -= 2;
				}

				//printf("DONE\n");
		}
	}

	play_AST(red_AST);
	//printf("%d\n", eval_AST(red_AST));
	return eval_AST(red_AST);
}

int main() {

	

	//char expression[100] = "( 20 - 30 + 40 ) * ( 50 + 60 * 70 ) + 80";
	//solve_AST(expression);
	//char postfix[100][100];
	
  	//char expression[100] = "( 7 - 4 ) * ( 8 + 10 ) + 5 * 3";
  	//char expression[100] = "( ( ( 5 ) - ( 4 ) + ( ( 2 ) - ( 1 ) ) ) * ( 2 ) )";
	
	char expression[100] = "( ( ( 1 ) + ( 2 ) ) * ( 10 ) )";

	printf("%d\n", solution(expression));
	//solution(expression);
	

	return 0;
}