// 12S24001 - Fredrick Laurensius Aritonang
// 12S24030 - Swasti Maristella Sihombing

#include <stdio.h>

int main(int _argv, char **_argc) {
  char msk[61];
  int i;

  fgets(msk, 61, stdin);

  for (i=0; i < strlen(msk) - 1; i++){
    printf("%03d", msk[i]);
  }

printf("013");

  return 0;
}
