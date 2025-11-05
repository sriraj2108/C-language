#include <stdio.h>
int main() {
    char name[100];
    int age;
    char grade;
    printf("name=");
    scanf("%s", name);
    printf("age =");
    scanf("%d",&age);
    printf("grade =");
    scanf("%c",grade);
    printf("given name,age,grade are %s,%d,%c",name,age,grade);
 
    return 0;
}
