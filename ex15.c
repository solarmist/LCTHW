#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
  int ages[] = {13, 24, 32, 19, 67};
  char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

  // for safety get the sizes of the arrays
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way using indexing
  for(i = 0; i < count; i++){
    printf("%s had %d years alive.\n",
	   names[i], ages[i]);
  }

  printf("--\n");

  int *cur_age = ages;
  char **cur_name = names;

  // second way using pointers
  for(i = 0; i < count; i++){
    printf("%s is %d years old.\n",
	   *(cur_name + i), *(cur_age + i));
  }

  printf("--\n");

  // third way, pointers are just arrays
  for(i = 0; i < count; i++){
    printf("%s is %d years old again.\n",
	   cur_name[i], cur_age[i]);
  }

  printf("--\n");

  // fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages;
      (cur_age - ages) < count;
      cur_name++, cur_age++){
    printf("%s lived %d years so far.\n",
	   *cur_name, *cur_age);
    printf("%p is the address of cur_name[%ld]\n",
	   cur_name, cur_age - ages);
  }
  return 0;
}
