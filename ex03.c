#include <stdio.h>

int main()
{
  int age = 31;
  int height = 175;
  int waist = 37;
  int width = 15;

  printf("I am %#x years old.\n", age);
  printf("I am %*d years old.\n", width, age);
  printf("My waist is %#x inches around.\n", waist);
  printf("I am %05d centimeters tall.\n", height);

  return 0;
}
