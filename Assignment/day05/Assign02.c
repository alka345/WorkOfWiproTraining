/*Print series  1, 2, 4, 8, 16, 32, 64. given n = 64*/

#include <stdio.h>

int main()
{
int n = 64;
int val = 1;

while (val <= n)
{
   printf("%d,",val);
   val *= 2;
}
    return 0;
}