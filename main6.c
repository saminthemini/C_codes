#include <stdio.h>
#define PI 3.14159

double calculateArea(double radius);
double calculateCircumference(double radius);


int main(void){

  double radius;
  double area;
  double Circumference;

  printf("enter the radius of circle\n");
  scanf("%lf", &radius);

  area = calculateArea(radius);
  Circumference = calculateCircumference(radius);

  printf("area: %f, circumference: %f\n", area, Circumference);


    return 0;
}

double calculateArea(double radius)
{
    double radiushalf;
    radiushalf = radius / 2;
    return PI * radiushalf * radiushalf;
}

double calculateCircumference(double radius)
{
    double radiushalf;
    radiushalf = radius / 2;
    return 2 * PI * radiushalf;
}