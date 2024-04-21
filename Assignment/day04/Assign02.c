/*
 Print the table with user i/ps
o/p
Table: 2

2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
*/


#include <stdio.h>

int main(){
    int n;
    int i = 1;

    scanf("%d",&n);

    while (i <= 10)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
        i = i + 1;
    }
    return 0;
    
}