// #include <stdio.h>
// #include <math.h>


// int main(){

//   // This is a comment blah
  
//   /*
//   int age = 19;
//   float gpa = 2.89;
//   char grade = 'B';
//   char name[] = "soma";

//   printf("Hello %s\n",name);
//   printf("You are %d years old\n", age);
//   printf("Your average grade is %c\n", grade);
//   printf("Your gpa is %f\n",gpa);
  

//   float a = 3.14159265358979;
//   double b = 3.14159265358979;

//   printf("%0.15f\n", a);
//   printf("%0.15lf\n", b);

//   short c = 32767;
//   printf("%d",c);
//   */


// /*
//   float item1 = 5.75;
//   float item2 = 10.00;
//   float item3 = 100.99;

//   printf("Item 1: $%8.2f\n", item1);
//   printf("Item 2: $%8.2f\n", item2);
//   printf("Item 3: $%8.2f\n", item3);
// */

//   // double A = sqrt(9);
//   // double B = pow(2, 4);
//   // int C = round(3.14);
//   // int D = floor()

//   const double PI = 3.14159;
//   double radius;
//   double circumference;
//   double area;

//   printf("\nEnter the radius of a circle: ");
//   scanf("%lf", &radius);

//   circumference = 2 * PI * radius;
//   area = PI * radius * radius;

//   printf("area: %lf", area);
//   printf("circumference: %lf", circumference);

  
//   return 0;
// }

#include <stdio.h>

int main(){
  char grade;

  printf("\nEnter a letter grade:");
  scanf("%c", &grade);

  switch(grade){
    case 'A':
      printf("perfect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least it's not an F!!\n");
      break;
    case 'F':
      printf("YOU FAILED!\n");
      break;

}

return 0;
}
