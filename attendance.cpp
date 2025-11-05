#include <stdio.h>
#include<string.h>
void ar(char a[][25],int number){
    printf("names of students  are :");
    for (int i=0;i<number;i++){
        printf(" %s,",a[i]);
    }
    printf("\n");
}
void find(char a[][25],int number,char name[]){
    for(int i=0;i<number;i++){
        if(strcmp(a[i],name) == 1){
            printf("%s is present",name);
            break;
        }
        else{
            printf("%s is not present",name);
            break;                                                                                  }
    }
}
int main() {
    int number;
    printf("number=");
    scanf("%d",&number);
    char a[number][25];
   
    for(int i=0; i<number;i++){
        printf("name of student %d=",i+1);
        scanf("%s",&a[i]);
    }
    ar(a,number);
    char name[25];
    printf("req student name: ");
    scanf("%s",&name);
    find(a,number,name);

}

