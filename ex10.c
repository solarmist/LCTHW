#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
  int i = 0;

  // go through each string in argv
  // why am I skipping argv[0] (that's the program name/command)
  for(i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // go through each string in envp
  // why am I skipping argv[0] (that's the program name/command)
  for(i = 0; envp[i] != '\0'; i++) {
    printf("envp %d: %s\n", i, envp[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };
  int num_states = 4;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
