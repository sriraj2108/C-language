#include<stdio.h>
int main(){
	float r;
	printf(" marks of subject 1 = ");
	scanf("%f",&r);
	float a;
	printf(" marks of subject 2 = ");
	scanf("%f",&a);
	float c;
	printf(" marks of subject 3 = ");
	scanf("%f",&c);
			printf("percentage  = %.2f \n",(a+r+c)/3);
}
