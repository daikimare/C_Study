#include<stdio.h>
int main(void){
    int a,g=0,k=0;

    for(a=1;a<101;a++){
        if(a%2==0){
            g+=a;
        }else{
            k+=a;
        }
    }
    printf("偶数の総和=%d\n",g);
    printf("奇数の総和=%d\n",k);

    return 0;
}