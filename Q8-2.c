#include <stdio.h>

int main (void){
  int a,b,c=0;
  printf ("判定したい数を入力してください\n");
  scanf ("%d",&b);
  for (a=1;a<=b;a++){
    if (b%a==0)
    c++;
  }
  if (c==2){
    printf ("%dは素数です",b);
  }else{
    printf ("%dは素数ではありません",b);
  }

  return 0;
}