#include<stdio.h>
#include<math.h>
int main(){
	float r;
	printf(" principal amt = ");
	scanf("%f",&r);
	float a;
	printf(" time taken in yrs = ");
	scanf("%f",&a);
	float c;
	printf(" rate of intrest = ");
	scanf("%f",&c);
       float amt;
       float ci;
       amt=r*(pow(1+(c/100),a));
       ci=amt-r;
       printf("amt is %.2f \n",amt);
			printf("compound intrest = %.2f\n",ci);
}
