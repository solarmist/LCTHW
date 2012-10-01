#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Headers
void print_letters(int len, char arg[]);

int main(int argc, char *argv[], char *envp[])
{
  int i = 0;
  for(i = 0; i < argc; i++){
    print_letters(strlen(argv[i]), argv[i]);
  }
  return 0;
}

void print_letters(int len, char arg[])
{
  int i = 0;
  for(char ch = arg[i]; i < len; i++, ch=arg[i]) {
    if(isalpha(ch) || isblank(ch) || isdigit(ch)){
      printf("'%c' == %d", ch, ch);
    }
  }
  printf("\n");
}
