#include <stdio.h>
int main(void){
    float pi,r,s,l;
    pi=3.14159;
    r=3;
    scanf("%f",&r);
    s=pi*r*r;
    l=2*pi*r;

    printf("面積は%f\n",s);
    printf("円周は%f\n",l);

    return 0;
}