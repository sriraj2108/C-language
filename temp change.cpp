#include <stdio.h>
int main() {
    int Tc;
    float Tf;
    printf("temp in celsius =");
    scanf("%d",&Tc);
    Tf=(Tc*9.0)/5.0 + 32;
    printf("temp in farenheit = %.2f",Tf);
    return 0;
}
