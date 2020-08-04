#include <stdio.h>

int main(void){
    int example_int = 33336;
    int example_int2 = 9998846;
    int example_int3 = 555536666;

    double example_double = 4434.55;
    double example_double_2 = 67868.222;
    double example_double_3 = 777778.1111;


    printf("%9d\n", example_int);
    printf("%9d\n", example_int2);
    printf("%9d\n", example_int3);

    printf("%13.6lf\n", example_double);
    printf("%13.6lf\n", example_double_2);
    printf("%13.6lf\n", example_double_3);

    return 0;

}