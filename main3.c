#include <stdio.h>

int main(void) {
    char whatever_1, whatever_2, whatever_3, whatever_4, whatever_5;
    

    FILE * inp;


    inp = fopen("output.txt", "r");


    fscanf(inp, "%c%c%c%c%c", &whatever_1, &whatever_2, &whatever_3, &whatever_4, &whatever_5);

    printf("%c%c%c%c%c\n", whatever_1, whatever_2, whatever_3, whatever_4, whatever_5);

    return 0;
}