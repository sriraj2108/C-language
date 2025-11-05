#include <stdio.h>
int main(){	
		char grade;
		char name[100];
		char sen[100];
	printf("grade : ");
	scanf("%c",&grade);
		printf("name : ");
		scanf("%s",name);
	getchar();
		printf("sentence : ");
		scanf("%[^\n]",sen);
	printf("\n%c\n%s\n%s",grade,name,sen);
}
