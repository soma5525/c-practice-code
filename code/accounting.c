//AJG23038 平尾蒼馬
#include <stdio.h>

int main(void){
  int onigiriPrice = 128;
  int panPrice = 116;
  int saihu = 1000;
  printf("おにぎり:%d円\nパン:%d円\n",onigiriPrice,panPrice);
  printf("おにぎりを2つ、パンを1つ買います\n");
  int oturi,goukei2;
  float goukei1;
  goukei1 = (onigiriPrice*2 + panPrice*1)*1.08;
  goukei2 = (int)goukei1;
  printf("合計金額（消費税８％）は%d円です\n", goukei2);
  oturi = saihu - goukei2;
  
  printf("よって1000円払った時のお釣りは%d円です\n", oturi);

  return 0;
}