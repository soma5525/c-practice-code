//AJG23038 平尾蒼馬
#include <stdio.h>

int main(void){
  int i;

  while(1){
    printf("0~10の範囲で整数を入力してください:");
    scanf("%d", &i);

    if(i<8 && i>=0){
      printf("正解の数字は%dよりも大きいです\n", i);
    }else if(i==8){
      printf("正解です！\n");
      break;
    }else if(9<=i && i<=10){
      printf("正解の数字は%dよりも小さいです\n", i);
    }else{
      printf("エラーです\n");
      printf("正しい値の範囲で入力してください\n");
    }
  }

  return 0;
}

