#include<stdio.h>
int sum(int n){
	if(n==0) return 0;
	else return n+sum(n-1);
}
int main(){
	int n;
	printf("NUMBER = ");
	scanf("%d",&n);
	int a=sum(n);
	printf("SUM from 0 to n is %d",a);
} 
