#include <stdio.h>
#include <math.h>

int main(void){
  float x,y,rad;
  printf("角度を入力してください\n");
  scanf("%f",&x);
  rad=x*(3.14/180);
  y=sin(rad)*sin(rad)+cos(rad)*cos(rad);

  printf("角度%fのラジアン値%fによる",x,rad);
  printf("sin(x)*sin(x)+cos(x)*cos(x)は%fとなります\n",y);

  return 0;
}