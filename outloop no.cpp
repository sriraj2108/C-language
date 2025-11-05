#include <stdio.h>
int main(){
    int r, n;
    printf("Square size: ");
    scanf("%d", &r);
    printf("Outer number: ");
    scanf("%d", &n);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r; j++) {
            int top=i;
            int left=j;
            int bottom=r-i+1;
            int right=r-j+1;
            int min=top;
            if (left<min)min=left;
            if (bottom<min)min=bottom;
            if (right<min)min=right;
        		printf("%d ", n - min + 1);
        }
        printf("\n");
    }
}
