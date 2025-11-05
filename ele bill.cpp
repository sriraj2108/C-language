#include<stdio.h>
int main(){
	float r;
	printf(" units consumed = ");
	scanf("%f",&r);
	if(r<=100){
		printf("bill is %.2f",r*1.5);
	}
	else if (r>100&&r<=300){
		printf ("bill is %.2f",(100*1.5)+(r-100)*2.5);
	}
	else if(r>300){
		printf("bill is %.2f",(100*1.5)+(200)*2.5+(r-300)*4);
	}
		
}
