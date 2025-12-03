#include<stdio.h>
int dig(int n){
	int r,s=0;
		while(n>0){
			r=n%10;
			s+=r;
			n/=10;
		}
	printf("sum of digits is %d",s);
}
int main(){
		int a;
	printf("a = ");
	scanf("%d",&a);
	dig(a);
}
