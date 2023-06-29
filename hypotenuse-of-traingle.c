//Find hypotenuse of traingle
#include <stdio.h>
#include <math.h>

int main(void)
{
  float bottom_line, height;
  double hypotenuse;

  printf("buttom line of traingle is :");
  scanf("%f", &bottom_line);

  printf("height of traingle is :");
  scanf("%f", &height);

  hypotenuse = sqrt(bottom_line * bottom_line + height * height);

  printf("hypotenuse of traingle is %.3f : ", hypotenuse);

  return 0;
}
