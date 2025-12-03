#include<stdio.h>
int fac(int n){
	if(n<=1) return 1;
	else return n*fac(n-1);
}
int main(){
	int a;
	printf("number = ");
	scanf("%d",&a);
	int f=fac(a);
	printf("Factorial of %d is %d",a,f);
}
