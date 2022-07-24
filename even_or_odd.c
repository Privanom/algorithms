#include <stdio.h>

//Check whether 'number' is even or odd and print the result
void evenOrOdd(long number)
{
    number & 1 ? printf("Odd\n") : printf("Even\n");
}

int main()
{
    //Retrieve number from user
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    //Call evenOrOdd on 'num'
    evenOrOdd(num);
    return 0;
}