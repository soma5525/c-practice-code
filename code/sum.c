// AJG23038 平尾蒼馬

#include <stdio.h>

int main(void){
  int A,B,sum;
  printf("AとBを入力してください\n");
  printf("A:");
  scanf("%d", &A);
  printf("B:");
  scanf("%d", &B);

  sum = (A+B)*(B-A+1)*1/2;
  printf("%dから%dの合計は%dです\n",A,B,sum);

  return 0;
  
}