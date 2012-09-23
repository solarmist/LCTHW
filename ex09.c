#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = {0};
  char name[5] = {'a'};

  // first, print them out raw
  printf("numbers: %d %d %d %d\n",
	 numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name: %c %c %c %c\n",
	 name[0], name[1], name[2], name[3]);

  printf("name: %s\n", name);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 's';
  name[3] = 'h';
  name[4] = '\0';

  // Then print them out initialized
  printf("numbers: %d %d %d %d\n",
	 numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name: %c %c %c %c %c\n",
	 name[0], name[1], name[2], name[3], name[4]);

  // print the name like a string
  printf("name: %s\n", name);

  // another way to use name
  char *another = "Josh";

  printf("another: %c %c %c %c %c\n",
	 another[0], another[1], another[2], another[3], another[4]);

  // print the another like a string
  printf("another: %s\n", another);

  return 0;
}
