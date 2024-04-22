/*Write simple calculator program using function*/

#include <stdio.h>

int calculator(int i, int j, char exp){
    printf("%c",exp);
    switch (exp)
    {
    case '+':
    printf("Addition is:%d+%d = %d\n",i,j,(i + j));
        break;
    case '-':
    printf("Subtraction is:%d-%d = %d\n",i,j,(i - j));
        break;
     case '*':
    printf("Multiplication is :%d*%d = %d\n",i,j,(i * j));
        break;
     case '/':
    printf("Division is :%d/%d = %d\n",i,j,(i / j));
        break;
    
    
    default:
    printf("Invalid input");
        break;
    }

    return 0;



}

int main(){
int i,j;
char exp;

printf("Enter value of i and j\n");
printf("===============================\n");
scanf("\n%d\n%d",&i,&j);
getchar();
printf("operation you want to perform\t\n");
printf("===============================\n");
scanf("%c",&exp);

calculator(i, j, exp);

return 0;
}