#include <stdio.h>

int main(void) {
    int num;
    int divC = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            divC++;
        }
    }
        if (divC != 2) {
            printf("%d non e' un numero primo\n", num);
        }else {
            printf("%d e' un numero primo\n", num);
        }
    return 0;
}