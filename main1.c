#include <stdio.h>


int main(void) {
   
 char lowercase_letter_1,
    lowercase_letter_2,
    lowercase_letter_3;
 


  
    printf("please enter three lowercase letters\n");
    scanf("%c%c%c", &lowercase_letter_1, &lowercase_letter_2, &lowercase_letter_3);
    printf("YOU ENTERED: %c%c%c\n", lowercase_letter_1, lowercase_letter_2, lowercase_letter_3);

   

    printf("you entered uppercase letters as: %c%c%c\n",
    (lowercase_letter_1 - 32),
    (lowercase_letter_2 - ('a' - 'A')),
    (lowercase_letter_3 - ('a' - 'A')));
   

    return 0;
}