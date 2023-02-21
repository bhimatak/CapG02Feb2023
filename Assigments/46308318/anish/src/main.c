#include<myHeader.h>



int main()
{
  int ch;
  float h,b,len,bed,s,r;
  double area;
  printf("1.triangle\n2.rectangle\n3.square\n4.circle\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: printf("enter the height and base of triangle\n");
        scanf("%f",&h);
        scanf("%f",&b);
        area=triangleArea(h,b);
         printf("%lf",area);

        break;

    case 2: printf("enter the length and bredth of rectangle\n");
        scanf("%f",&len);
        scanf("%f",&bed);
        area=rectangleArea(len,bed);
         printf("%lf",area);

        break;

    case 3: printf("enter the side of the square\n");
        scanf("%f",&s);
        area=squareArea(s);
         printf("%lf",area);
        break;

    case 4: printf("enter the radius of circle \n");
        scanf("%f",&r);
        area=circleArea(r);
        printf("%lf",area);
        break;

    default: printf("invalid input");
       
        
  }
  return 0;

}
