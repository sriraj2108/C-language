#include<stdio.h>
int main(){
	int n;
	printf("No. of natural no. : ");
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	printf("sum of %d natural no. is %d",n,s);
}
