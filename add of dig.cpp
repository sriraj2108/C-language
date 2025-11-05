#include<stdio.h>
int main(){
	int a;
	printf("a = ");
	scanf("%d",&a);
	int s=0;
	int i;
	while(a>0){
		i=a%10;
		s+=i;
		i++;
		a/=10;
	}
		printf("%d",s);
	
}
