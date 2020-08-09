#include<stdio.h>
int main(void){
  int a,i,j,temp,n=10;
  int X[]={9,8,7,6,5,4,3,2,1,0};
  for (i=0;i<n;i++)
    printf("%d",X[i]);
    printf("\n");
    for(i=0;i<n-1;i++){
      for (j=0;j<n-1;j++){
        printf("i=%d,j=%dの時",i,j);
        for(a=0;a<n;a++)
        printf("%d",X[a]);
        printf("\n");
        if (X[j]>X[j+1]){
          temp=X[j];
          X[j]=X[j+1];
          X[j+1]=temp;
        }
      }
    }
  for (i=0;i<n;i++)
    printf("%d",X[i]);
    printf("\n");


  return 0;
}
