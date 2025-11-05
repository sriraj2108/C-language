#include<stdio.h>
int main(){
	float a,b;
	printf("first no. is : ");
	scanf("%f",&a);
	char c;
	printf("Enter a operator (+,-,/,*) : ");
	scanf(" %c",&c);
	printf("second no. is : ");
	scanf("%f",&b);
	float o;
	switch(c){
		case '+': 
		o=a+b;
		printf("%.f + %.f = %.2f\n",a,b,o);
		break;
		case '-': 
		o=a-b;
		printf("%.f - %.f = %.2f\n",a,b,o);
		break;
		case '*': 
		o=a*b;
		printf("%.f * %.f = %.2f\n",a,b,o);
		break;
		case '/': 
		o = a/b;
		printf("%.f / %.f = %.2f\n",a,b,o);
		break;
		default:
		printf("Can't perform that operation\n");

	}

}
