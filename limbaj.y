%{
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "imp.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;

char expression[100];
int count_functii=0;
int count_parametri=0;
int valoare=0;
int count_apel=0;
char functie_curenta[100];
%}


%union {
int intval;
char* strval;
char* str_l;
float f_value;
int boolval;

}

%token BGIN_MAIN END_MAIN ASSIGN IF ELSE WHILE FOR GEQ LEQ EQ NEQ VERIFY MAIN RETURN PLUS MINUS OPERATIONS CONST BGIN_GLOBAL BGIN_FUNCTIE END_GLOBAL END_FUNCTIE TIP_NOU PRINT
%token <strval>TIP
%token <strval>TIP_VOID
%token <strval>ID
%token <intval>NR
%token <f_value>NR_R
%token <boolval> TRUE
%token <boolval> FALSE
%token <str_l> LISTA_CUVINTE
%token <str_l> MATH


%start progr
%%
progr: bloc_global bloc_functie bloc_main {printf("program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP ID {
                    //printf("sunt aci\n");
                    if((var=insert_variabila($2,$1))!=0)
                    {
                         if(var==-1)
                         {
                              printf("Eroare la linia %d, variabila %s a fost deja declarata global sau main!\n",yylineno,$2);
                         }
                         else
                         {
                              printf("Eroare la linia %d, variabila %s a fost deja declarata deja local!\n",yylineno,$2);
                         }
                    }           
               }
           | CONST TIP ID {
               if((var=insert_const($2,$3))!=0)
               {
                    if(var==-1)
                    {
                         printf("Eroare la linia %d, variabila %s a fost deja declarata global sau main!\n",yylineno,$3);
                    }
                    else
                    {
                         printf("Eroare la linia %d, variabila %s a fost deja declarata deja local!\n",yylineno,$3);
                    }

               }
           }
           | TIP ID '[' NR ']' {
               if((var=adaugaVector($1,$2,$4))!=0)
               {
                    if(var==-1)
                    {
                         printf("Eroare la linia %d, vectorul %s a fost deja declarat global sau main!\n",yylineno,$2);
                    }
                    else
                    {
                         printf("Eroare la linia %d, vectorul %s a fost deja declarat global sau main!\n",yylineno,$2);
                    }
               }

           }
           | new_type
           | TIP_NOU ID ID
           ;
lista_param : param
            | lista_param ','  param 
            ;
param : TIP ID {
          //printf("%s  |  %s  \n",$1,$2);
          
          //printf("nr de param este %d\n",count_parametri);
          adauga_param(count_functii,$2,$1,count_parametri);
          count_parametri++;
     }
     ;    

functie : TIP ID '(' lista_param ')' '{' list '}' {
             count_functii++;
             if(adauga_functie1($2,$1,count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,$2);
             }
             count_parametri=0;
             
          }
        | TIP ID '(' ')' '{' list '}' {
             count_functii++;
             if(adauga_functie1($2,$1,count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,$2);
             }
             count_parametri=0;
        }
        | TIP_VOID ID '(' lista_param ')' '{' list '}' {
             count_functii++;
             if(adauga_functie1($2,$1,count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,$2);
             }
             count_parametri=0;
        }
        | TIP_VOID ID '(' ')' '{' list '}' {
             count_functii++;
             if(adauga_functie1($2,$1,count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,$2);
             }
             count_parametri=0;
        }
        ; 
      
lista_functii : functie
              | lista_functii ';' functie
/* blocuri */
bloc_main : BGIN_MAIN list END_MAIN {
          var_m=0;
          var_g=0;
          var_l=0;
          }
          ;

bloc_global : BGIN_GLOBAL declaratii END_GLOBAL{
            var_g=0;
            var_l=1;
            var_m=0;
            }
            ;

bloc_functie : BGIN_FUNCTIE lista_functii END_FUNCTIE{
            var_g=0;
            var_l=0;
            var_m=1;
          }
          ;

/* lista instructiuni */
list :  statement ';' 
     | list statement ';'
     ;

/* instructiune */
statement: ID ASSIGN ID {
               if(strcmp($3,"true")!=0 || strcmp($3,"false")!=0)
               
                    if((este_declarata($1)!=0 || este_declarata($3)!=0) )
                    {
                         printf("Eroare la linia %d, cel putin una dintre variabile nu este declarata!\n",yylineno);
                    }
                    if( strcmp(getType($1),getType($3)) != 0 )
                    {
                         printf("Eroare la linia %d, variabilele %s si %s nu au acelasi tip!\n",yylineno,$1,$3);
                    }
               }

         | ID ASSIGN NR  {
              if(este_declarata($1)!=0)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,$1);
              }
              else
              {
                   if(strcmp(getType($1),"int")!=0)
                   {
                       printf("Eroare la linia %d, variabila %s nu este de tip int\n",yylineno,$1); 
                   }
                   else
                   {
                        update_val($1,$3);
                   }
              }
         }
         | ID ASSIGN NR_R 
         | ID ASSIGN TRUE {
              if((var=este_declarata($1))==1)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,$1);
              }
              else
              {
                   if(strcmp(getType($1),"bool")!=0)
                   {
                        printf("Eroare la linia %d, variabila %s nu este de tip bool!\n",yylineno,$1);
                   }

              }
         }
         | ID ASSIGN FALSE {
              if(este_declarata($1)==1)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,$1);
              }
              else
              {
                   if(strcmp(getType($1),"bool")!=0)
                   {
                        printf("Eroare la linia %d, variabila %s nu este de tip bool!\n",yylineno,$1);
                   }

              }
         }
         | ID ASSIGN ID '['NR']'
         | ID '['NR']' ASSIGN NR {
              
         }
         | ID '['NR']' ASSIGN ID
         | ID ASSIGN condition
         | ID ASSIGN MATH {
              valoare=solution($3);
              printf("Valoarea expresiei %s este %d \n", $3 ,valoare);
              update_val($1,valoare);
         }  
         | ID '(' lista_apel ')' {
              count_apel=0;
              if(exista_functie($1)==0)
              {
                   printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,$1);
              }
              strcpy(functie_curenta,$1);
              //printf("Functie curenta: %s\n",functie_curenta);

         }
         | if
         | while
         | for
         | declaratii
         | ID '.' ID ASSIGN NR
         | ID '.' ID ASSIGN ID
         | ID '.' ID ASSIGN condition
         | ID '.' ID ASSIGN my_expression
         | PRINT '(' LISTA_CUVINTE ',' NR ')' 
         | PRINT '(' LISTA_CUVINTE ',' ID ')'
         | PRINT '(' LISTA_CUVINTE ',' condition ')'
         | PRINT '(' LISTA_CUVINTE ',' MATH ')' {
              printf(" %s %d \n", $3 ,solution($5));
         }     
         ;
        
lista_apel : NR {
               count_apel++;
               //printf("Count apel: %d\n",count_apel);
               for(int i=0;i<nr_functii;i++)
               {
                    //printf("Functie curenta: %s\n",functie_curenta);
                    if(strcmp(functii[i].nume,functie_curenta)==0)
                    {
                         if(strcmp(functii[i].parametri[count_apel].tip,"int")!=0)
                         {
                             printf("Eroare la linia %d, parametrii dati sunt gresiti!\n",yylineno); 
                         }
                    }
               }

           }
           | ID {
               if(exista_id($1)==1)
               {
                    count_apel++;
                    //printf("Count apel: %d\n",count_apel);
                    for(int i=0;i<nr_functii;i++)
                    {
                         //printf("Functie curenta: %s\n",functie_curenta);
                         if(strcmp(functii[i].nume,functie_curenta)==0)
                         {
                              if(strcmp(functii[i].parametri[count_apel].tip,getType($1))!=0)
                              {
                              printf("Eroare la linia %d, parametrii dati sunt gresiti!\n",yylineno); 
                              }
                         }
                    }
               }
           }
           | LISTA_CUVINTE
           | my_expression
           | lista_apel ',' NR 
           | lista_apel ',' ID 
           | lista_apel ',' LISTA_CUVINTE 
           | lista_apel ',' my_expression
           | ID '(' ')' {
                printf("INtru aici\n");
                if(exista_functie($1)==0)
                {
                     printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,$1);
                }
           }
           | ID '(' lista_apel ')' {
                printf("INtru aici\n");
                if(exista_functie($1)==0)
                {
                     printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,$1);
                }
           }
           | lista_apel ',' ID '(' ')'
           | lista_apel ',' ID '(' lista_apel ')'
           ;


my_expression  : '(' NR OPERATIONS ID ')'
               | '(' ID OPERATIONS NR ')' 
               | '(' ID'(' lista_apel ')' OPERATIONS NR ')' 
               | '(' NR OPERATIONS ID'(' lista_apel ')' ')'
               | '(' ID'(' lista_apel ')' OPERATIONS ID ')' 
               | '(' ID OPERATIONS ID'(' lista_apel ')' ')'
               | '(' ID'(' lista_apel ')' ')'
               | '(' NR ')' {
                    add_expression(expression, '(');
                    add_expression(expression, ' ');
                    add_expression_number(expression, $2);
                    add_expression(expression, ' ');
                    add_expression(expression, ')');
               }
               | '(' ID ')'
               | '('ID '['NR']' ')'
               | '(' ID'(' lista_apel ')' OPERATIONS ID '['NR']' ')' 
               | '(' ID '['NR']' OPERATIONS ID'(' lista_apel ')' ')'
               | '(' NR OPERATIONS ID '['NR']' ')' 
               | '(' ID '['NR']' OPERATIONS NR ')' 
               | '(' my_expression '+' my_expression ')' {
                    
               }
               | '(' my_expression '-' my_expression')'
               | '(' my_expression '*' my_expression')'
               | '(' my_expression '/' my_expression')'
               ;

condition : ID VERIFY ID
          | NR VERIFY NR
          | ID VERIFY NR
          | NR VERIFY ID
          | NR VERIFY ID '|' '|' condition
          | ID VERIFY ID '|' '|' condition
          | NR VERIFY NR '|' '|' condition
          | ID VERIFY NR '|' '|' condition
          | NR VERIFY ID '&' '&' condition
          | ID VERIFY ID '&' '&' condition
          | NR VERIFY NR '&' '&' condition
          | ID VERIFY NR '&' '&' condition
          ;

if : IF '(' condition ')' '{' list '}'
   | IF '(' condition ')' '{' list '}' ELSE '{' list '}'
   ;
while : WHILE '('condition')' '{' list '}'
      ;
for : FOR '(' ID ASSIGN NR ';' condition ';' ID PLUS ')' '{' list '}'
    | FOR '(' ID ASSIGN NR ';' condition ';' ID MINUS ')' '{' list '}'
    ;
new_type : TIP_NOU ID '{' declaratii '}' 
%%
void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
     yyin=fopen(argv[1],"r");

     yyparse();
     f1=fopen("symbol_table.txt","w");
     fprintf(f1,"%s\n","VARIABILE");
     fprintf(f1,"%s  \n","nume |tip |scop |valoare ");

     printf("var total ete : %d\n",total);
     for(int i=0;i<total;i++)
     {
          fprintf(f1,"%s   |%s   |%s   |%s   \n",var_total[i].nume,var_total[i].tip,var_total[i].scop,var_total[i].valoare);
     }
     fprintf(f1,"%s\n","VECTORI");
     fprintf(f1,"%s\n","nume  |tip  |scop  |nr_max  ");
     for(int i=0;i<nr_vectori;i++)
     {
          fprintf(f1,"%s   |%s   |%s   |%d   \n",vectori[i].nume,vectori[i].tip,vectori[i].scop,vectori[i].nr_max);
     }


     f2=fopen("symbol_table_functions.txt","w");
     fprintf(f2,"%s\n","FUNCTII");
     fprintf(f2,"%s  \n","nume |tip | Nr param | Parametri ");
     for(int i=0;i<nr_functii;i++)
     {
          fprintf(f2,"%s  |%s  |%d   |", functii[i].nume,functii[i].tip,functii[i].nr_param);
          for(int j=0;j<functii[i].nr_param;j++)
          {
               fprintf(f2,"%s:%s ,",functii[i].parametri[j].nume,functii[i].parametri[j].tip);
          }
          fprintf(f2,"\n");

     }
     


} 