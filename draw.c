#include <stdio.h>


void drawCircle();
void drawlines();
void drawBase();
void drawWall();

void drawHuman();
void drawHouse();

int main(void){

    int choice;
    printf("Enter 1 if you would like to draw human, 2 for a house\n");
    scanf("%d", &choice);

    if(choice == 1)
    { 
        drawHuman();
    }
    else {
        if(choice == 2)
    {
         drawHouse();
    }
       
    else { 
        printf("you have only 2 options, enter 1 or 2.\n");
    } 
    
    }

    return 0;
}

void drawHuman(){
    
    drawCircle();
    drawlines();
    drawBase();
    drawlines();

}

void drawHouse(){
    
    drawlines();
    drawBase();
    drawWall();
    drawWall();
    drawWall();
    drawWall();
    drawWall();
    drawWall();
    drawBase();

}

void drawCircle(){

    printf("      *      \n");
    printf("   *     *   \n");
    printf("     *  *    \n");

}

void drawlines(){
    printf("   /\\  \n");
    printf("  /  \\  \n");
    printf(" /    \\  \n");
    printf("/      \\  \n");

}

void drawBase(){

    printf(" ______ \n");

}

void drawWall(){
    printf(" |     | \n");
    printf(" |     | \n");
}
