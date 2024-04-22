/*print Sum of Even and  sum of odd values between 1 to 50*/
#include <stdio.h>

int main()
{
    int n = 1;
    int sumOfEven = 0;
    int sumOfOdd = 0;

    while(n <= 50){
        if (n%2==0)
        {
            sumOfEven = sumOfEven + n;
        }
        else
        {
            sumOfOdd = sumOfOdd + n;
        }
        n = n + 1;
        
    }
    
    printf("%d\n",sumOfEven);
    printf("%d\n",sumOfOdd);
    
    return 0;
}