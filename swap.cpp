#include <stdio.h>
int main() {
int a;
int b;
  printf("num1 = ");
  scanf("%d",&a);
    printf("num2 = ");
    scanf("%d",&b);
    int c=a;
   a=b;
     b=c;
    printf("after swap \nnum1=%d\nnum2=%d\n ",a,b);
    return 0;
}
