#include <stdio.h>
#include <string.h>
void BracketMatcher(char *str) {
  int b = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == '(') {
      b++;
    } else if (str[i] == ')') {
      b--;
    }
    if (b < 0) {
      break;
    }
  }
  if (b != 0) {
    printf("0\n");
  } else {
    printf("1\n");
  }
}

int main(void) {
  char str[100];
  printf("Enter the string: ");
  scanf("%s",str);
  BracketMatcher(str);
  return 0;
}
