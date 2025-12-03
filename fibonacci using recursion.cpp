#include<stdio.h>
//fibonacci series
int fibo(int n){
	if(n<=1) return n;
	else return fibo(n-1)+fibo(n-2);
}

int main(){
	int a;
	printf("no.of terms = ");
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		printf("%d ",fibo(i));
	}
}
