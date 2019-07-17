#include <stdio.h>

float Sine(float x, int i);

int N;

int main()
{
  int i = 2;
  printf("Enter the number, Sine of which is to be calculated: ");
  float x;
  scanf("%f", &x);
  printf("Enter the no. of terms you want in the series: ");
  scanf("%d", &N);
  printf("Value of Sine(%f) = %f\n", x, x*Sine(x, i));
  return 0;
}

float Sine(float x, int i)
{
  float SinX = 0;
  if(i == 2*(N+1))
  {
    return 1;
  }
  return (1 -((x*x)/(i*(i+1)))*Sine(x, i+2));
}
