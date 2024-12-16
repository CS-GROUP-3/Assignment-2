#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit=0, number, num2;
    printf("The number you enter will be displayed in reverse. \nEnter the integers: ");
    scanf("%d", &number);
    num2=number;
    while(num2!=0)
    {
        digit ++;
        num2 /= 10;
    }
    int length[digit];
    num2=number;
    for(int i=0; i<digit; i++)
    {
        length[i]= num2 % 10;
        num2 /= 10;
    }
    printf("Reversed number:");
    for(int i=0; i<digit; i++)
    {
        printf("%d", length[i]);
    }
    return 0;
}