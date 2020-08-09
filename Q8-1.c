#include <stdio.h>

int main (void){
  int n;
  // printf ("年=");
  // scanf("%d",&n);
  for (n=2019;n<2051;n++){
    if ( n%4 == 0 && n%100 != 0){
      printf ("%d年は閏年です\n",n);
    }else if (n%400 == 0){
      printf ("%d年は閏年です\n",n);
    }else{
      printf ("%d年は閏年ではないです\n",n);
    }
  }

  return 0;
}