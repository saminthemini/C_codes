#include <stdio.h>


int main(void) {

     
    char lowercase_letter_1,
       lowercase_letter_2,
       lowercase_letter_3;
    char uppercase_letter_1 = '?',
       uppercase_letter_2 = '?',
       uppercase_letter_3 = '?';

char examplelowercase = 'z';
char exampleuppercase = 'Z';
int intexamplelowercase = 0;
int intexampleuppercase = 0;


int diff = 0;
  
    printf("please enter three lowercase latters\n");
    scanf("%c%c%c", &lowercase_letter_1, &lowercase_letter_2, &lowercase_letter_3);
    printf("YOU ENTERED: %c%c%c\n", lowercase_letter_1, lowercase_letter_2, lowercase_letter_3);

    intexamplelowercase = (int)examplelowercase;
    intexampleuppercase = (int)exampleuppercase;
    diff = intexamplelowercase - (intexampleuppercase);

    uppercase_letter_1 = (char)((int)lowercase_letter_1 - diff);
    uppercase_letter_2 = (char)((int)lowercase_letter_2 - diff);
    uppercase_letter_3 = (char)((int)lowercase_letter_3 - diff);

    printf("you entered lowercase letters as: %c%c%c\n",
 uppercase_letter_1, uppercase_letter_2, uppercase_letter_3);
   
 
    return 0;
}