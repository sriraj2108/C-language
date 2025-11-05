#include <stdio.h>
#include<string.h>
#include<ctype.h>
void ispalindorme(char name[]){
    int i=0;
    int j = strlen(name)-1;
    int is=0;
    while(i<j){
        if(tolower(name[i]) != tolower(name[j])){
            is=0;
            break;
        }
        else{
            is=1;
        }
        i++;
        j--;
    }
    if(is){
        printf("%s is palindrome",name);
    }
    else{
        printf("%s is not palindrome",name);
    }
}
int main(){
        char name[100];
        printf("name=");
        fgets(name,sizeof(name),stdin);
        name[strcspn(name,"\n")] = '\0';
        ispalindorme(name);
    
}

