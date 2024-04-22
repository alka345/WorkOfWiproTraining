/*Language:
C


Module:
Base Module


Topic:Star
Pattern


Level:Easy


Problem
statement:Write the
logic to print star pattern or rectangle star pattern.





Input
Format  : First line contains N of type
integer.

Output
Format : Print the rectangle star pattern.
Constrains:

2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main()
{
    int i,j;
    int x = 1;

    scanf("%d%d",&i,&j);

    while(x<=i)
    {
        int y = 1 ;

        while (y<=j)
        {
            printf("*");
            y = y + 1;
        }
    
    printf("\n");
    x = x + 1;
    }
    
    return 0; 
}