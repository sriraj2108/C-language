#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("sub 1 marks =");
    scanf("%d",&a);
    printf("sub 2 marks =");
    scanf("%d",&b);
    printf("sub 3 marks =");
    scanf("%d",&c);
    printf("sub 4 marks =");
    scanf("%d",&d);
    printf("sub 5 marks =");
    scanf("%d",&e);
   float f;
   f=(a+b+c+d+e)/5.0;
    printf("avg marks = %.2f",f);
    return 0;
}
