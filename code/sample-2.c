/*
#include <stdio.h>

int hello(void);
int main (void){
  hello();
  return 0;
}

int hello (void){
    printf("ありがとう");
    return 0;
}

int keisan( int kingaku);
int main (void){
  keisan(1000);
  return 0;
}

int keisan (int kingaku){
  printf("%f", kingaku * 1.1);
  return 0;
}
*/
/*
int fruits(int apple, int orange);
int main (void){
  fruits(5,6);
  return 0;
}

int fruits(int apple, int orange){
  printf("%d", (apple*300)+(orange*200));
  return 0;
}
*/
/*
int fruits(int apple);
int main (void){
  int hoge;
  hoge = fruits(5);
  if (hoge < 3000){
    printf("予算に収まりました");
  } else{
    printf("予算オーバーです");
  }
  
  return 0;
}

int fruits(int apple){
  int kingaku;
  kingaku = apple * 300;
  return kingaku;
}
*/

/*
int main (void){
  int array [10];
  array [5] = 15;
  array [6] = 15;
  array [7] = 15;
  array [11] = 15;
  printf("%d\n", array[5]);
  printf("%d\n", array[20]);
  return 0;
}
*/
/*
int main(void){
 
    int array [5] = {12,13,14};
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    printf("%d\n",array[3]);
    printf("%d\n",array[4]);
  

    int array[] = {12, 13, 14};
    printf("%d",array[1]);
*/
/*
int array[5] = {12,13,14};
int i;
for(i=0; i < sizeof(array) / sizeof(array[0]); i++){
  printf("%d番目: %d\n",i, array[i]);
}
*/
/*
char c = 'A';
printf("%c", c);
*/

/*
char str [5] = {'J','O','H','N','\0'};
printf("%s\n", str);
char str2 [] = "JOHN";
printf("%s\n",str2);


return 0;



}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
  
  char str [] ="256";
  int suuti = atoi (str);
  printf("%d", suuti);
  

  char str [10];
  strcpy(str, "MIKE");
  printf("%s", str);
  

  char str1[15] = "Star";
  char str2[] = "Wars";
  strcat (str1, str2);
  printf("%s", str1);


  char str [20];
  char str1[] = "Star";
  char str2[] = "Wars";
  int i = 3;
  sprintf(str, "%s%s%d", str1,str2,i);
  printf("%s", str);
 

  char str[256];
  scanf("%s", str);
  int i;
  i = strlen(str);
  printf("%d", i);
  */
 /*
  int apple = 10;
  int *hoge;
  hoge = &apple ;
  printf("%d\n", apple);
  printf("%d\n", *hoge);
  */
  /*
  int apple, *hoge;
  hoge = &apple;
  printf("%p\n", &apple);
  printf("%p\n", hoge);
  

  int *apple, orange;
  apple = &orange;
  printf("%p\n", apple);
  printf("%p\n", &orange);

  int *p,i;
  p = &i;
  *p = 15;
  printf("%d\n", *p);
  printf("%d\n", i);

  return 0;
}
*/

#include <stdio.h>

void keisan(int x, int y, int *a1, int *a2);
int main(void){
  int tasizan;
  int hikizan;
  keisan( 30, 10, &tasizan, &hikizan);
  printf("%d\n", tasizan);
  printf("%d\n", hikizan);

  return 0;
}
void keisan(int x, int y, int *a1, int *a2){
  *a1 = x + y;
  *a2 = x - y;
}
