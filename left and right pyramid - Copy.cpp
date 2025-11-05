#include <stdio.h>
int main() {
    for(int i=0;i<6;i++){
       for (int j= 0; j <=i; j++) {
            printf(" ");
        }
        for(int k=0;k<11-2*i;k++){
            printf("*");
        }
        for(int m=0;m<=i;m++){
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}
