#include <stdio.h>

int main(void) {

    int number_1, number_2;

    int total, subtract, multiply, divide, module;

    printf("enter two integer pls\n");
    scanf("%d%d", &number_1, &number_2);

    printf("you entered %d and %d\n", number_1, number_2);

    total = number_1 + number_2;
    subtract = number_1 -number_2;
    multiply = number_1 * number_2;
    divide = number_1 / number_2;
    module = number_1 % number_2;

    printf("number_1 + number_2 : %d\n", total);
    printf("number_1 - number_2 : %d\n", subtract);
    printf("number_1 * number_2 : %d\n", multiply);
    printf("number_1 / number_2 : %d\n", divide);
    printf("number_1 %% number_2 : %d\n", module);

    return 0;

}