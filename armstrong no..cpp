#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("a = ");
	scanf("%d",&a);
	int n=a;
	int s=0;
	int x=0;
	int t=a;
	while(t>0){
		x++;
		t/=10;
	}
		
	while(a>0){
	int	i=a%10;
		s+=pow(i,x);
		a/=10;
	}
	if(n==s){
		printf("%d is armstrong no.",n);
	}
	else{
		printf("%d is not armstrong no.",n);
	}
}
