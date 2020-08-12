#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool prime_check(int num)
{
    if (num<=1)
    {
        return false;
    }
    for (int c=2;c<num/2;c++)
    {
        if (num%c==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    printf("Please enter a number:");
    scanf("%d",&number);
    printf("%s",prime_check(number)?"TRUE":"FALSE");
    return 0;
}
