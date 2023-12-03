#include <stdio.h>

int main() {

    int num;
    int i;
    int flag = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++) {
        if(num%i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        printf("1 is not prime\n");
    } else {
        if (flag == 0) {
            printf("%d is prime\n", num);
        } else {
            printf("%d is not prime\n", num);
        }
    }

    return 0;
}