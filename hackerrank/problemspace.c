#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:\n");

    scanf("%c",&ch);
    while(ch!=32){
          if(ch>=65&&ch<=90){
            printf("you have entered uppercase letter %c\n",ch);
          }
         else if(ch>=97&&ch<=122){
            printf("you have entered lowercase letter %c\n",ch);
         }

        else if(ch>=48&&ch<=57){
            printf("A digit\n");
        }
        scanf("%c",&ch);
        if(ch==32){
            printf("Sorry you have entered a spacebar,terminating.....\n");
            return 0;
        }
    }
    printf("Sorry you have entered a spacebar,terminating........\n");
    return 0;
}
