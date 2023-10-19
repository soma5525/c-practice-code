//AJG23038 平尾蒼馬
#include <stdio.h>

int main(void){
  int sigma = 0;
  int j;
  int i = 0;
  for(i=0; i<=100; i++){
    j = i*i;
    sigma = sigma + j;
  }
  printf("求める値は%dです。\n", sigma);

  return 0;
}