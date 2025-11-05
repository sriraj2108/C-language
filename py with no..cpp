#include <stdio.h>
int main() {
	int n;
	printf("n : ");
	scanf("%d",&n);
	int c=1;
    for(int i=1;i<=n;i++){
       	for(int j=i;j<n;j++){
			printf(" ");
		}
        for(int k=1;k<=(2*i-1);k++){
            printf("%d",c);
             c++;
        }
        
        printf("\n");
    }
    return 0;
}
