#include<stdio.h>
int main(){
	int a,b,c;
	printf("1st num is : ");
	scanf("%d",&a);
	printf("2nd num is : ");
	scanf("%d",&b);	
	printf("3rd num is : ");
	scanf("%d",&c);
	int g=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Greatest of all is %d",g);
}
