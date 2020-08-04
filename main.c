#include <stdio.h>


int main(void)
{
    char upperletter_1,
    upperletter_2,
    upperletter_3;

    printf("pls enter three uppercase letters\n");
    scanf("%c%c%c", &upperletter_1, &upperletter_2, &upperletter_3);

    printf("you entered uppercase letters as: %c%c%c\n",
    upperletter_1, upperletter_2, upperletter_3);

    printf("you entered lowercase letters as: %c%c%c\n",
    (upperletter_1 + ('a' - 'A')),
    (upperletter_2 + ('a' - 'A')),
    (upperletter_3 + ('a' - 'A')));

return 0;
}