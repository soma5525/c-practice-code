// AJG23038 平尾蒼馬

#include <stdio.h>

int main(void){
  printf("2次元座標平面上での2点を結ぶ直線を直径とする円の面積を求めます\n");
  printf("1つ目の座標を入力してください\n");
  float x1,y1;
  scanf("%f%f", &x1,&y1);
  printf("座標1:(%f,%f)\n", x1,y1);

  printf("2つ目の座標を入力してください\n");
  float x2,y2;
  scanf("%f%f", &x2,&y2);
  printf("座標2:(%f,%f)\n", x2,y2);

  float a,b,c;
  a = (x1-x2)*(x1-x2);
  b = (y1-y2)*(y1-y2);
  c = a + b;
  printf("円の直径の２乗は%fです\n",c);

  float π = 3.141592;
  float s = π*c/4;
  printf("円の面積は円周率を%fとすると%fです\n", π, s);

  return 0;
}

