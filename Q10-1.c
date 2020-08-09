#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
  int b;
  char a[8];
  printf("整数値を入力してください\n");
  scanf("%d",&b);
  /*printf("文字列を入力してください\n");
  gets (a);
  puts (a);
  */
  printf("%f",pow(b,3));
  //printf("%d",strlen(a));

  return 0;
}