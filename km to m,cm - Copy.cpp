#include<stdio.h>
int main(){
	float r;
	printf(" length in kilometers = ");
	scanf("%f",&r);
	printf("length in m = %.2f m\n",r*1000);
	printf("length in cm = %.2f cm\n",r*100000);
}
