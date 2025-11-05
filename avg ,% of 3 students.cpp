#include<stdio.h>
int main(){
	float r;
	printf(" marks of student 1 = ");
	scanf("%f",&r);
	float a;
	printf(" marks of student 2 = ");
	scanf("%f",&a);
	float c;
	printf(" marks of student 3 = ");
	scanf("%f",&c);
	printf("avg marks = %.2f\n",(r+a+c)/3);
	printf("percentage of student 1 = %.2f\n",r);
		printf("percentage of student 2 = %.2f\n",a);
			printf("percentage of student 3 = %.2f\n",c);
}
