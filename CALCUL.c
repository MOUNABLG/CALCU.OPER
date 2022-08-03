#include<stdio.h>
int main()
{
    char OPER ;
    int A,B;
    printf("CALCULATRICE \n");

    printf("saisir un nombre A : \n ");
    scanf("%d",&A);
    printf("saisir un autre nombre B:\n ");
    scanf("%d",&B);
    printf("saisir un operateur : ");
    scanf("%s",&OPER);
    switch (OPER){
     case '+':
         printf("%d + %d = %d",A,B,A+B);
         break;
     case '-':
         printf("%d - %d = %d",A,B,A-B);
         break;
     case '*':
         printf("%d * %d = %d",A,B,A*B);
         break;
     case '/':
        if (B!= 0)
            printf("%d / %d =",A,B,A/B);

        else
                printf("IMPOSSIBLE");

         break;
     default :("ERREUR");
    }


}
