#include<stdio.h>
#include<string.h>
int main(){
	char sent[500];
	printf("Enter a sentence : ");
	scanf(" %[^\n]",sent);
	int word=0;
	for(int i=0;sent[i]!='\0';i++){
		if(sent[i]==' '|| sent[i]=='\t'|| sent[i]=='\0'){
			word++;
		}
	}
	printf("\nNo.of words in given sentence is %d\n",word+1);
	printf("\nThe words are : \n");
	int serial = 1;
    printf("%d. ", serial);
	for(int j=0;j<strlen(sent);j++){
		if(sent[j]==' '){
			printf("\n");
			serial++;
            printf("%d. ", serial);
		}
		else{
			printf("%c",sent[j]);
		}
	}
}  
