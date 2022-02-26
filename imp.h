extern FILE* yyin;
extern char* yytext;
extern int yylineno;
struct param 
{
     char nume[50];
     char tip[50];
};

struct var
{
     char nume[50];
     char tip[50];
     char scop[50];
     char valoare[50];

}var_main[100],var_global[100],var_local[100],var_total[100],var_2[100],var_const[100];

struct vector
{ 
	char nume[100];
	char tip[100];
	int nr_max;
	char scop[100];
	int val_nr[100];
	
}vectori[100];

struct functie
{
     char nume[50];
     char tip[50];
     struct param parametri[50];
	 int nr_param;

}functii[100];



FILE* f1;
FILE* f2;
int var_m=0;
int var_g=1;
int var_l=0;
int total_l=0; //local
int total_g=0;
int total_m=0;
int total_c=0;//pentru const
int total=0;
int var=0;
int nr_vectori=0;
int nr_functii=0;

void table1()
{
     f1=fopen("symbol_table.txt","w");
     fprintf(f1,"%s\n","  nume  |  tip  |  scop  ");
}

void table2()
{
     f2=fopen("symbol_table_functions.txt","w");
}

/*void pune_in_tabel_1(char nume[],char tip[],char scop[],char valoare[])
{
     f1=fopen("symbol_table.txt","a");
     fprintf(f1,"%s       | %s     |  %s  |  %s   \n",nume,tip,scop,valoare);
}*/

/*void pune_in_tabel_2(char nume[],char tip[])
{
     f1=fopen("symbol_table_functions.txt","a");
     fprintf(f1,"%s , %s \n",nume,tip);
}*/


int insert_variabila(char* id,char* tip)
{
	//printf("sunt in fct de inserare\n");

    if(var_g==1)
    {
		if(total_g==0)
		{
		  strcpy(var_global[0].nume, id);
          strcpy(var_global[0].tip, tip);
		  strcpy(var_global[0].scop, "global");
		  strcpy(var_global[0].valoare, "Nu");

		  strcpy(var_total[total].nume, id);
          strcpy(var_total[total].tip, tip);
		  strcpy(var_total[total].scop, "global");
		  strcpy(var_total[total].valoare, "Nu");

		  //pune_in_tabel_1(id,tip,"global","Nu");
          total_g++;
		  total++;
		  return 0;
		}
		else
		{
          for(int j = 0; j < total_g; j++)
          {
               if(strcmp(var_global[j].nume, id)==0)
               {
                    return -1; 
               }
          }
          for(int j = 0; j < total_m; j++)
          {
               if(strcmp(var_main[j].nume, id)==0)
               {
                    return -1; 
               }
          }

          strcpy(var_global[total_g].nume, id);
          strcpy(var_global[total_g].tip, tip);
		  strcpy(var_global[total_g].scop, "global");
		  strcpy(var_global[total_g].valoare, "Nu");

		  strcpy(var_total[total].nume, id);
          strcpy(var_total[total].tip, tip);
		  strcpy(var_total[total].scop, "global");
		  strcpy(var_total[total].valoare, "Nu");
		  
		  //pune_in_tabel_1(id,tip,"global","Nu");
          total_g++;
		  total++;
          return 0;
		}
    }
    if(var_m==1)
    {
         if(total_m==0)
		 {
			strcpy(var_main[0].nume, id);
          	strcpy(var_main[0].tip, tip);
			strcpy(var_main[0].scop, "main");
			strcpy(var_main[0].valoare, "Nu");

			strcpy(var_total[total].nume, id);
          	strcpy(var_total[total].tip, tip);
			strcpy(var_total[total].scop, "main");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(id,tip,"main","Nu");
          	total_m++;
			total++;
			return 0; 
		 }
		 else
		 {
          for(int j = 0; j < total_m; j++)
          {
               if(strcmp(var_main[j].nume, id)==0)
               {
                    return -1; 
               }
          }
          for(int j = 0; j < total_g; j++)
          {
               if(strcmp(var_global[j].nume, id)==0)
               {
                    return -1; 
               }
          }
		  /*for(int j = 0; j < total_c; j++)
          {
               if(strcmp(var_const[j].nume, id)==0)
               {
                    return -1; 
               }
          }*/
          strcpy(var_main[total_m].nume, id);
          strcpy(var_main[total_m].tip, tip);
		  strcpy(var_main[total_m].scop, "main");
		  strcpy(var_main[total_m].valoare, "Nu");

		  strcpy(var_total[total].nume, id);
          strcpy(var_total[total].tip, tip);
		  strcpy(var_total[total].scop, "main");
		  strcpy(var_total[total].valoare, "Nu");

		  //pune_in_tabel_1(id,tip,"main","Nu");
          total_m++;
		  total++;
          return 0;
		}
    }




    if(var_l==1)
    {
		if(total_l==0)
		{
		  strcpy(var_local[0].nume, id);
          strcpy(var_local[0].tip, tip);
		  strcpy(var_local[0].scop,"local");
		  strcpy(var_local[0].valoare, "Nu");

		  strcpy(var_total[total].nume, id);
          strcpy(var_total[total].tip, tip);
		  strcpy(var_total[total].scop,"local");
		  strcpy(var_total[total].valoare, "Nu");

		  //pune_in_tabel_1(id,tip,"local","Nu");
          total_l++;
		  total++;
		  return 0;			
		}
		else
		{
          for(int l = 0; l < total_l; l++)
          {
			  //printf("var local de l este %s\n",var_local[l].nume);
               if(strcmp(var_local[l].nume, id)==0)
               {
				   //printf("%s\n",var_local[l].nume);
				   //printf("sunt aici\n");
                   return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          strcpy(var_local[total_l].nume, id);
          strcpy(var_local[total_l].tip, tip);
		  strcpy(var_local[total_l].scop, "local");
		  strcpy(var_local[total_l].valoare, "Nu");

		  strcpy(var_total[total].nume, id);
          strcpy(var_total[total].tip, tip);
		  strcpy(var_total[total].scop, "local");
		  strcpy(var_total[total].valoare, "Nu");

		  //pune_in_tabel_1(id,tip,"local","Nu");
          total_l++;
		  total++;
          printf("nr de variabile locale este: %d\n",total_l);
		  /*for(int l = 0; l < total_l; l++)
		  {
		  	printf("variabila %d este %s\n",l,var_local[l].nume);
		  }*/
		}
    }
    return 0;
}


int insert_const(char*tip,char*nume)
{
	if(total_c==0)
	{
		strcpy(var_const[0].nume, nume);
        strcpy(var_const[0].tip, tip);

		strcpy(var_total[total].nume, nume);
        strcpy(var_total[total].tip, tip);

		if(var_g==1)
		{
			strcpy(var_const[0].scop,"const global");
			strcpy(var_const[0].valoare, "Nu");

			strcpy(var_total[total].scop,"const global");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const global","Nu");
		}
		if(var_m==1)
		{
			strcpy(var_const[0].scop,"const main");
			strcpy(var_const[0].valoare, "Nu");

			strcpy(var_total[total].scop,"const main");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const main","Nu");
		}
		if(var_l==1)
		{
			strcpy(var_const[0].scop,"const local");
			strcpy(var_const[0].valoare, "Nu");

			strcpy(var_total[total].scop,"const local");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const local","Nu");
		}
        total_c++;	
		total++;
		return 0;
	}
	else
	{
		/*for(int j = 0; j < total_c; j++)
        {
           if(strcmp(var_const[j].nume, nume)==0)
           {
                return -1; //a mai fost declarata 
		   }
        }*/
		for(int j = 0; j < total_m; j++)
        {
            if(strcmp(var_main[j].nume, nume)==0)
            {
                return -1; 
            }
        }
        for(int j = 0; j < total_g; j++)
        {
           if(strcmp(var_global[j].nume, nume)==0)
           {
                return -1; 
           }
        }
		for(int j = 0; j < total_l; j++)
        {
           if(strcmp(var_local[j].nume, nume)==0)
           {
                return -2; 
           }
        }	
		strcpy(var_const[total_c].nume, nume);
        strcpy(var_const[total_c].tip, tip);

		strcpy(var_total[total].nume,nume);
		strcpy(var_total[total].tip, tip);
		if(var_g==1)
		{
			strcpy(var_const[total_c].scop,"const global");
			strcpy(var_const[total_c].valoare, "Nu");

			strcpy(var_total[total].scop,"const global");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const global","Nu");
		}
		if(var_m==1)
		{
			strcpy(var_const[total_c].scop,"const main");
			strcpy(var_const[total_c].valoare, "Nu");

			strcpy(var_total[total].scop,"const main");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const main","Nu");
		}
		if(var_l==1)
		{
			strcpy(var_const[total_c].scop,"const local");
			strcpy(var_const[total_c].valoare, "Nu");

			strcpy(var_total[total].scop,"const local");
			strcpy(var_total[total].valoare, "Nu");

			//pune_in_tabel_1(nume,tip,"const local","Nu");
		}
        total_c++;
		total++;
		return 0;
	}
	
}


int este_declarata(char id[])
{
	for(int i=0;i<total;i++)
	{
		if(strcmp(var_total[i].nume,id)==0)
		{
			return 0;
		}
	}
	return 1;
}

char * getType(char id[])
{
	for(int i=0;i<total;i++)
	{
		if(strcmp(var_total[i].nume,id)==0)
		{
			return var_total[i].tip;
		}
	}
}
char * my_itoa(char* number,int nr)
{
	if(number==NULL)
	{
		return NULL;
	}
	sprintf(number,"%d",nr);
	return number;
}

void update_val(char id[],int nr)
{
	char number[10];
	my_itoa(number,nr);
	for(int i=0;i<total;i++)
	{
		if(strcmp(var_total[i].nume,id)==0)
		{
			strcpy(var_total[i].valoare,number);
			break;
		}
	}
}

char * getTypeArray(char tip[] )
{
	return tip;
}
int getNrArray(int nr)
{
	return nr;
}

int adaugaVector(char tip[],char nume[],int nr_max)
{
	if(var_m==1)
	{
		if(nr_vectori==0)
		{
			strcpy(vectori[0].nume,nume);
			strcpy(vectori[0].tip,tip);
			vectori[0].nr_max=nr_max;
			strcpy(vectori[0].scop,"main");
			nr_vectori++;
			return 0;
		}
		else
		{
			for(int i=0;i<nr_vectori;i++)
			{
				if(strcmp(vectori[i].nume,nume)==0)
				{
					return -1;
				}
			}
			strcpy(vectori[nr_vectori].nume,nume);
			strcpy(vectori[nr_vectori].tip,tip);
			vectori[nr_vectori].nr_max=nr_max;
			strcpy(vectori[nr_vectori].scop,"main");
			nr_vectori++;
			return 0;
		}
	}
	if(var_g==1)
	{

		if(nr_vectori==0)
		{
			strcpy(vectori[0].nume,nume);
			strcpy(vectori[0].tip,tip);
			vectori[0].nr_max=nr_max;
			strcpy(vectori[0].scop,"global");
			nr_vectori++;
			return 0;
		}
		else
		{
			for(int i=0;i<nr_vectori;i++)
			{
				if(strcmp(vectori[i].nume,nume)==0)
				{
					return -1;
				}
			}
			strcpy(vectori[nr_vectori].nume,nume);
			strcpy(vectori[nr_vectori].tip,tip);
			vectori[nr_vectori].nr_max=nr_max;
			strcpy(vectori[nr_vectori].scop,"global");
			nr_vectori++;
			return 0;
		}
	}
	if(var_l==1)
	{
		if(nr_vectori==0)
		{
			strcpy(vectori[0].nume,nume);
			strcpy(vectori[0].tip,tip);
			vectori[0].nr_max=nr_max;
			strcpy(vectori[0].scop,"local");
			nr_vectori++;
			return 0;
		}
		else
		{
			for(int i=0;i<nr_vectori;i++)
			{
				if(strcmp(vectori[i].nume,nume)==0)
				{
					return -2;
				}
			}
			strcpy(vectori[nr_vectori].nume,nume);
			strcpy(vectori[nr_vectori].tip,tip);
			vectori[nr_vectori].nr_max=nr_max;
			strcpy(vectori[nr_vectori].scop,"local");
			nr_vectori++;
			return 0;
		}
	}
	

}

int adauga_functie1(char nume[],char tip[],int nr)//fara parametri
{
	//printf("sunt aici\n");

		if(nr_functii==0)
		{
			strcpy(functii[0].nume,nume);
			strcpy(functii[0].tip,tip);
			functii[0].nr_param=nr;
			nr_functii++;
			return 0;
		}
		else
		{
			for(int i=0;i<nr_functii;i++)
			{
				if(strcmp(functii[i].nume,nume)==0)
				{
					return -1;
				}
			}
			strcpy(functii[nr_functii].nume,nume);
			strcpy(functii[nr_functii].tip,tip);
			functii[nr_functii].nr_param=nr;
			nr_functii++;
			return 0;
		}

}


void adauga_param(int nr_fct,char nume[],char tip[],int nr_param)
{
	strcpy(functii[nr_fct].parametri[nr_param].nume,nume);
	strcpy(functii[nr_fct].parametri[nr_param].tip,tip);
}

int exista_functie(char nume[])
{
	for(int i=0;i<nr_functii;i++)
	{
		if(strcmp(functii[i].nume,nume)==0)
		{
			return 1;
			break;
		}
	}
	return 0;
}
int exista_id(char id[])
{
	for(int i=0;i<nr_functii;i++)
	{
		if(strcmp(var_total[i].nume,id)==0)
		{
			return 1;//daca exista
			break;
		}
	}
	return 0;//daca nu exista
}
/*void fill_table_var()
{
	FILE * f;
	f=fopen("symbol_table_var.txt","w");
    fprintf(f,"%s\n","  nume  |  tip    |    scop   |   valoare  ");
	for(int i=0;i<total;i++)
	{
		fprintf(f,"%s   |%s   |%s   |%s   \n",var_total[i].nume,var_total[i].tip,var_total[i].scop,var_total[i].valoare);
	}
}

void fill_table_array()
{
	FILE * f;
	f=fopen("symbol_table_array.txt","w");
    fprintf(f,"%s\n","  nume  |  tip    |    scop   |   nr_max  ");
	for(int i=0;i<nr_vectori;i++)
	{
		fprintf(f,"%s   |%s   |%s   |%d   \n",vectori[i].nume,vectori[i].tip,vectori[i].scop,vectori[i].nr_max);
	}
}*/

char expression[100]="";
int i = 0, j = 0, red = 0, black = 0, expression_count = 0;

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
	//printf("%s | %s | %s\n", play_ast->value, play_ast->type, play_ast->color);
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

void add_expression (char expression[100], char element) {
	printf("PRINT2: %c\n", element);
	expression[expression_count++] = element;
}

void add_expression_number (char expression[100], int element) {
	printf("PRINT2: %d\n", element);
	char temp[100]="";
	int temp_count = 0;
	sprintf(temp, "%d", element);
	//printf("PRINT3: %d\n", strlen(temp));
	while (temp_count < strlen(temp)) {
		
		//strcat(expression, temp[temp_count++]);
		expression[expression_count++]=temp[temp_count++];
		//printf("PRINT3: %c\n", temp[temp_count]);
		
	}
	
	//expression_count++;
}

int solution(char my_expression[100]) {
	char expression[100]="";
	strcpy(expression,my_expression);
	//printf("EXPRESIA FINALA: %s\n", expression);
	//for (int count = i; count > 0; count--) expression[count]=expression[count+1];
	/*
	add_expression(expression, '(');
	add_expression(expression, ' ');
	add_expression(expression, '4');
	add_expression(expression, ' ');
	add_expression(expression, '+');
	add_expression(expression, ' ');
	add_expression(expression, '2');
	add_expression(expression, ' ');
	add_expression(expression, ')');
	add_expression(expression, '\0');*/
	i = expression_count;
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

