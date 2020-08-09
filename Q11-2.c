#include <stdio.h>
int main(void){
  FILE*fin;
  char buf[256];
  fin = fopen("abc.txt","r");
  if (fin == NULL){
    printf("ファイルが開けません\n");
    return 1;
  }
  while(fgets(buf,256,fin)!=NULL);
  printf("%s\n",buf);
  fclose(fin);
  return 0;
}