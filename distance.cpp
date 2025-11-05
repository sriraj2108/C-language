#include<stdio.h>
int main(){
	float a,u,t,d;
	printf(" accleration = ");
	scanf("%f",&a);
	printf(" initial velocity = ");
	scanf("%f",&u);
	printf(" time = ");
	scanf("%f",&t);
	d= u*t + 0.5*a*t*t;
	printf("distance is %.5f",d);
}
