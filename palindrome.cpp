#include<stdio.h>
int main(){
	int num,i;
	printf("No. is : ");
	scanf("%d",&num);
	int original=num;
	int reverse=0;
	while(num!=0){
		i=num%10;
		reverse=reverse*10 + i;
		num=num/10;
	}
	if(reverse==original){
		printf("%d is palindrome",original);
	}
	else{
		printf("%d isn't palindrome",original);
	}
}
