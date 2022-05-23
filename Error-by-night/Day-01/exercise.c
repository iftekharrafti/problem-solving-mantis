#include <ctype.h>
#include <stdio.h>
#include <string.h>

int l_count, u_count;

int main() {
  char s[101];
  scanf("%s", &s);

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      ++l_count;
    }
    if (s[i] >= 'A' && s[i] <= 'Z') {
      ++u_count;
    }
  }

  if (l_count == u_count) {
    for (int i = 0; i < strlen(s); i++) {
      s[i] = tolower(s[i]);
    }
  }
  if (l_count > u_count) {
    for (int i = 0; i < strlen(s); i++) {
      s[i] = tolower(s[i]);
    }
  }
  if (l_count < u_count) {
    for (int i = 0; i < strlen(s); i++) {
      s[i] = toupper(s[i]);
    }
  }

  printf("%s", s);
  return 0;
}