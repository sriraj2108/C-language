#include<stdio.h>
int main(){
	int n;
	printf("No. is : ");
	scanf("%d",&n);
	if(n<0){
		printf("Factorial isn't possible ");
	}
	else if(n==1 || n==0){
		printf("Factorial of %d is 1",n);
	}
	else{
		unsigned long long f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	printf("Factorial of %d is %llu",n,f);
	}
}
