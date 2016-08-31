#include <stdio.h>


int main(void){
  int n;
  FILE *fp;
  fp = fopen("foo.out", "w");
  if(fp == NULL){
    printf("Error opening file\n");
    return 0;
  }
  fscanf(fp, "%d", &n);

  printf("Value of n: %d\n", n);


  fclose(fp);

  return 0;
}
