#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int n;
	printf("\nChoose a function from below :");
	printf("\n1. string length");
	printf("\n2. string copy");
	printf("\n3. string compare");
	printf("\n4. string reverse");
	printf("\n5. string concatenation");
	printf("\n6. string lower case");
	printf("\n7. string upper case");
	printf("\n");
	printf("\nSelect a number from above : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("\nYou selected string length");
			printf("\nEnter the string : ");
			scanf( " %[^\n]",s1);
			int len = 0;
			for(int i=0;s1[i]!='\0';i++){
				len++;
			}
			printf("\nLength of string is %d",len);
			break;
		case 2:
			printf("\nYou selected string copy");
			printf("\nEnter the string : ");
			scanf( " %[^\n]",s1);
			for(int i=0;s1[i]!='\0';i++){
				s2[i]=s1[i];
			}
			s2[i]='\0';
			printf("\nThe copied string : %s",s2);
			break;
			//strcpy(s2,s1) copies s1 to s2
		case 3:
			printf("\nYou selected string compare");
			printf("\nEnter the 1st string : ");
			scanf( " %[^\n]",s1);
			printf("\nEnter the 2nd string : ");
			scanf( " %[^\n]",s2);
			int flag=0;
			for(int j=0;s1[j]!='\0'||s2[j]!='\0';j++){
				if(s1[j] != s2[j]){
					flag=1;
					break;
				}
			} 
			printf("\nCompare result :");
			if(flag==0){
				printf("Strings are eq.");
			}
			else {
				printf("Strings are not eq.");
			}
			break;
			//strcmp(s1, s2) gives 0 if both are eq,-ve if s2 > s1 in dictionary, +ve if s1>s2 in dictionary
		case 4:
			printf("\nYou selected string reverse");
			printf("\nEnter the string : ");
			scanf( " %[^\n]",s1);
			
			printf("\n reversed string is %s",strrev(s1));
			break;
			//strrev(s1) reverse an string 
		case 5:
			printf("\nYou selected string concatenation");
			printf("\nEnter the 1st string : ");
			scanf( " %[^\n]",s1);
			printf("\nEnter the 2nd string : ");
			scanf( " %[^\n]",s2);
			for(int i=0;s1[i]!='\0';i++){
				result[i]=s[i];
			}
			printf("\nString is %s",strcat(s1,s2));
			break;
			//strcat(s1,s2) adds s2 at end of s1
		case 6:
			printf("\nYou selected string lower case");
			printf("\nEnter the string : ");
			scanf(" %[^\n]",s1);
			for(int i=0;s1[i]!='\0';i++){
				if(s1[i]>='A'&&s1[i]<='Z'){
					s1[i]+=32;
				}
			}
			printf("\nLower case of string is %s",s1);
			break;
		case 7:
			printf("\nYou selected string upper case");
			printf("\nEnter the string : ");
			scanf(" %[^\n]",s1);
			for(int i=0;s1[i]!='\0';i++){
				if(s1[i]>='a'&&s1[i]<='z'){
					s1[i]-=32;
				}
			}
			printf("\nUpper case of string is %s",s1);
			break;
		default:
			printf("\nInvalid option");
	}
}
