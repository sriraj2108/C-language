#include<stdio.h>
int main(){
	float r;
	printf(" weight in kg = ");
	scanf("%f",&r);
	float a;
	printf(" height in m = ");
	scanf("%f",&a);
			printf("BMI = %.2f\n",r/(a*a));
}
