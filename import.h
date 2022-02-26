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

}var_main[100],var_global[100],var_local[100],var_total[100],var_2[100];

struct functie
{
     char nume[50];
     char tip[50];
     struct param parametri[50];

}fct[100];



FILE* f1;
FILE* f2;
int var_m=0;
int var_g=1;
int var_l=0;
int total_gm=0;//global+main
int total_l=0; //local
int total_g=0;
int total_m=0;
/*void var_neinit(char var[])
{
     printf("Eroare la linia %d ,variabila %s nu este initializata\n",yylineno,var);
     exit(1);
}

void var_nedeclarata(char var[])
{
     printf("Eroare la linia %d ,variabila %s nu este initializata\n",yylineno,var);
     exit(2);
}

void var_deja_declarata(char var[])
{
     printf("Eroare la linia %d ,variabila %s este deja declarata\n",yylineno,var);
     exit(3);
}

void var_const(char var[])
{
     printf("Eroare la linia %d ,variabila %s este constanta! Deci nu poate fi modificata!\n",yylineno,var);
     exit(4);
}

void var_diferite(char var1[],char var2[])
{
     printf("Eroare la linia %d ,variabilele %s si %s nu au acelasi tip\n",yylineno,var1,var2);
     exit(5);
}

void fct_dif_sign(char f[]) 
{
     printf("Eroare la linia %d , functia %s a fost deja declarata cu aceasta signatura\n",yylineno,f);
     exit(6);
}

void fct_nedeclarata(char f[])
{
     printf("Eroare la linia %d ,functia %s nu este declarata!\n",yylineno,f);
     exit(7);
}

void fct_dif_return(char f[])
{
     printf("Eroare la linia %d ,functia %s nu returneaza acelasi tip!\n",yylineno,f);
     exit(2);
}
*/



void table1()
{
     f1=fopen("symbol_table.txt","w");
     fprintf(f1,"%s\n","nume,tip,scop,valoare");
}

void table2()
{
     f2=fopen("symbol_table_functions.txt","w");
}

void pune_in_tabel_1(char nume[],char tip[],char scop[],char valoare[])
{
     f1=fopen("symbol_table.txt","a");
     fprintf(f1,"%s %s , %s , %s \n",nume,tip,scop,valoare);
}

void pune_in_tabel_2(char nume[],char tip[])
{
     f1=fopen("symbol_table_functions.txt","a");
     fprintf(f1,"%s , %s \n",nume,tip);
}

int insert_variabila(char* id,char* tip)
{
     
    //daca main=1 sau global=1 
    //printf("var_g este egala cu %d\n",var_g);
    if(var_m==1 || var_g==1)
    {
         //printf("sunt aici\n");
          for(int i = 0; i < total_gm; i++)
          {
               if(strcmp(var_2[i].nume, id)==0)
               {
                    return -1; //  o variabila a fost deja declarata global sau in main
               }
          }
          strcpy(var_2[total_gm].nume, id);
          strcpy(var_2[total_gm].tip, tip);
          total_gm++;
          printf("nr de variabile g/m este: %d\n",total_gm);
          return 0;
    }
    /*    while(var_g==1)
    {
          for(int j = 0; j < total_g; j++)
          {
               if(strcmp(var_global[j].nume, id)==0)
               {
                    return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          for(int j = 0; j < total_m; j++)
          {
               if(strcmp(var_main[j].nume, id)==0)
               {
                    return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          strcpy(var_global[total_g].nume, id);
          strcpy(var_global[total_g].tip, tip);
          total_g++;
          printf("nr de variabile locale este: %d\n",total_l);
          //return 0;
    }
    while(var_m==1)
    {
         
          for(int j = 0; j < total_m; j++)
          {
               if(strcmp(var_main[j].nume, id)==0)
               {
                    return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          for(int j = 0; j < total_g; j++)
          {
               if(strcmp(var_global[j].nume, id)==0)
               {
                    return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          strcpy(var_main[total_m].nume, id);
          strcpy(var_main[total_m].tip, tip);
          total_m++;
          printf("nr de variabile locale este: %d\n",total_l);
          //return 0;
    }
     */




    if(var_l==1)
    {
          for(int j = 0; j < total_l; j++)
          {
               if(strcmp(var_local[j].nume, id)==0)
               {
                    return -2; //  o variabila a fost deja declarata local!!!
               }
          }
          strcpy(var_local[total_l].nume, id);
          strcpy(var_local[total_l].tip, tip);
          total_l++;
          printf("nr de variabile locale este: %d\n",total_l);
          //return 0;
    }
    return 0;
}
