// AJG23038 平尾蒼馬

#include <stdio.h>

int main(void){
  int a;
  int b;
  
  printf("Enter two numbers \n");
  printf("a:");
  scanf("%d", &a);
  printf("b:");
  scanf("%d", &b);
  

  int wa,sa,seki,syo,amari;

  wa = a+b;
  sa = a-b;
  seki = a*b;
  syo = a/b;
  amari = a%b;


  printf("和：%d\n ", wa);
  printf("差：%d\n ", sa);
  printf("積：%d\n ", seki);
  printf("商：%d\n ", syo);
  printf("剰余：%d\n ", amari);
  
  
  return 0;
  
}