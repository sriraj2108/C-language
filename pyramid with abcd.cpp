#include <stdio.h>
int main() {
	int n;
	printf("n : ");
	scanf("%d",&n);
	char c='A';
    for(int i=1;i<=n;i++){
       	for(int j=i;j<n;j++){
			printf(" ");
		}
        for(int k=1;k<=(2*i-1);k++){
            printf("%c",c);
             c++;
        }
        
        printf("\n");
    }
    return 0;
}
