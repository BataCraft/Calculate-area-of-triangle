/* WAP to calculate area of trangle if base and height are given */


#include<stdio.h>
#include<math.h>
int main()
{
	float  base, height, area;
	printf("Enter the value of base:",base);
	scanf("%f", &base);
	printf("Enter the value of height:",height);
	scanf("%f", &height);
	area = 0.5 * base * height;
/*	area = (base*height)/2;*/
	printf("The Area of trangle are %f:",area );

}
