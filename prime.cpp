#include<stdio.h>
int main(){
	int n;
		int c=0;
	printf("No. is : ");
	scanf("%d",&n);
	if(n<=1){
		printf("Not Prime");
	}
	else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				c++;
			}
		}
	}
	if(c>0){
		printf("Not prime");
	}
	else{
		printf("Prime");
	}
}
