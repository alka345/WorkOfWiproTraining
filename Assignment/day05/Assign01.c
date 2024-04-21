/*series 0,3,8,15,24,35,48,63,80,99*/

#include <stdio.h>

int main()
{
    int n = 10;
    int i = 1;
    int val = 0;
    
    while (i <= n)
    {
       val =  i * i - 1;
       printf("%d,",val);
       i = i + 1;
    }
    printf("\n\n");
    return 0;
}