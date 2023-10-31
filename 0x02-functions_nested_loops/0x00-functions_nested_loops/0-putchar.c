#include <stdio.h>
#include <string.h>
/**
 *putchar function
 *Return (0)
 */
int main () {
  char str[100] = "LowLevel Programming";

  for (int i = 0; i < strlen(str) ; i++){
    putchar(str[i]);
    printf("\n");
  }
  return (0);
}
