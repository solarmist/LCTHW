#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
  if(argc !=2) {
    printf("ERROR: You need exactly one argument.\n");
    return 1;
  }

  int i = 0;
  for(char letter = argv[1][i]; argv[1][i] != '\0'; i++, letter=argv[1][i]) {
    if (letter > 'Z'){
	letter -= 32;
    }

    switch(letter) {
    case 'A':
      printf("%d: '%c'\n", i, letter);
      break;

    case 'E':
      printf("%d: '%c'\n", i, letter);
      break;

    case 'I':
      printf("%d: '%c'\n", i, letter);
      break;

    case 'O':
      printf("%d: '%c'\n", i, letter);
      break;

    case 'U':
      printf("%d: '%c'\n", i, letter);
      break;

    case 'Y':
      if (i > 2) {
	// it's only sometimes Y
	printf("%d: '%c'\n", i, letter);
      }
      break;
    default:
      printf("%d: %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}
