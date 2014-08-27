#include <stdio.h>

int check(char* str, char c) {
  while(*str != '\0')
    if(*str++ == c)
      return 1;

  return 0;
}

int main(void) {
  printf("%i\n", check("hello", 'l'));
  printf("%i\n", check("hello, world", '\n'));
  
  return 0;
}
