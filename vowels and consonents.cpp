#include <stdio.h>
int main(){
    char name[100];
    printf("Enter a sentence :");
    printf("\n");
    fgets(name,sizeof(name),stdin);
    int vow=0;
    int con=0;
    int i=0;
    int dig=0;
    int spaces=0;
    
    while(name[i]!='\0'){
        if(name[i]>='a' && name[i] <='z' || name[i]>='A' && name[i]<='Z'){
            if(name[i]=='a' || name[i] =='e' || name[i]=='i' || name[i] =='o' || name[i]=='u'||name[i]=='A' || name[i] =='E' || name[i]=='I' || name[i] =='O' || name[i]=='U'){
                vow++;
                }
                else con++;
            }
            if(name[i]=='0' || name[i]=='1'||name[i]=='2' || name[i]=='3'||name[i]=='4' || name[i]=='5'||name[i]=='6' || name[i]=='7'||name[i]=='8' || name[i]=='9'){
            	dig++;
			}
		else if(name[i]==' '){
				spaces++;
			}
            i++;
        }
        printf("\nNo.of vowels are: %d ",vow);
         printf("\nNo.of consonants are: %d ",con);
          printf("\nNo.of digits are: %d",dig);
           printf("\nNo.of spaces are: %d",spaces);
            
        
    
}




