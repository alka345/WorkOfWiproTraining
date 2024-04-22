/*Q1. rotate array every kth element


i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8


*/


#include <stdio.h>

int main()
{
    int array[10];
    int k;
    scanf("%d",&k);

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 1; i < 10; i = i + k)
    {
       for (int j = k; i > k ;k--)
       {
       printf("%d",array[j]);
       }
       
    }
    
    
    return 0;

}