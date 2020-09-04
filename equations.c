#include <stdio.h>
#include <math.h>

int main (void){
  int a=20, b=110, c=50, d;
  float x1, x2;
  d = ( b * b ) - ( 4 * a * c );
  printf("Введите коэффициенты a, b, c, ax^2 + bx + c:\n");
  printf("Ваше уравнение имеет вид %dx^2 + %dx + %d, d=%f\n\n", a, b, c, d);

  if (d<0)
      printf("Уравнение не имеет вещественных корней.\n");
  if (d==0){
      x1 = ((0-b)/(2*a));
      printf("Уравнение имеет два равных вещественных корня: x1 = x2 = %d\n", x1);
  }
  if (d>0){
      x1 = (((0-b)+sqrt(d))/(2*a));
      x2 = (((0-b)-sqrt(d))/(2*a));
      printf("Уравнение имеет два вещественных корня: x1 = %f\n x2 = %f\n", x1, x2);
  }
}
