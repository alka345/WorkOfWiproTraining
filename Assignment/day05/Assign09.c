/*
Q9.
Write a c program to print alphabet triangle.
Input: 5
Output:

         A
       ABA
     ABCBA
   ABCDCBA
 ABCDEDCBA
 */

#include <stdio.h>

int main(){
    int ch = 65;
    int i,j,k,n,m;

    scanf("%d",&n);

    while (i<=n)
    { 
        j = n;
        while (j<=i)
        {
            printf(" ");
        }

        k = 1;
        while (k<=i)
        {
            printf("%c",ch + 1);
            ch = ch - 1;
            k = k + 1;
        }

        m = 1;
        while (m<i)
        {
            printf("%c",ch - 1);
            m = m + 1; 
            printf("\n");
            // ch = 65;
        }
        
        

        
        
    }
    return 0;
    
}