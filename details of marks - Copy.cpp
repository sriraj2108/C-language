#include<stdio.h>
int main(){
	char a[100];
	printf("name : ");
	scanf("%s",a);
	char b[15];
	printf("roll no. : ");
	scanf("%s",b);
	int c;
	printf("marks : ");
	scanf("%d",&c);
	printf("------- student's details--------\n");
	printf("name of student : %s\n roll no. : %s\n marks obtained : %d/100 \n",a,b,c);
}
