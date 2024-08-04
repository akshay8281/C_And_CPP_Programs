//Q-3 : WAP to find area of circle, rectangle and triangle

//Area of Cicle

//#include <stdio.h>
//
//int main() {
//   float pie = 3.14;
//   int radius;
//   printf("Enter The Radius of Cicle :\n");
//   scanf("%d",&radius);
//   printf("The radius of the circle is %d\n\n" , radius);
//   
//   float area = pie* radius * radius;
//   
//   printf("The area of the given circle is %f", area);
//   return 0;
//}



//Area of Rectangle

//#include <stdio.h>
//
//int main()
// {
//int width,height,Rectangle;
//
//  printf("Enter the size of width :\n");
//scanf("%d",&width);
//
//  printf("Enter the size of height :\n");
//scanf("%d",&height);
//
//Rectangle = width * height;
//
//printf("\nThe Area of Rectangle is %d * %d = %d\n",width,height,Rectangle); 
//
//  return 0;
//}


//Area of Triangle

#include <stdio.h>

int main() {
 float base,height,Area;
 
 printf("Enter the Base value \n");
 scanf("%f",&base);
 
  printf("\nEnter the Height value \n");
 scanf("%f",&height);
 
 Area = (base * height) / 2;
 
 
 printf("\nThe Area of Triangle is (%f * %f) / 2 = %f\n",base,height,Area);
   return 0;
}
