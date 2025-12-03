#include<stdio.h>
int main(){
	char name[100];
	printf("Name : ");
	getchar();
	fgets(name,sizeof(name),stdin);
	char address[100];
	printf("Address : ");
	getchar();
	fgets(address,sizeof(address),stdin);
	printf("\nYou gave %s as name.",name);
	printf("\nYour address is : %s.",address);
}
