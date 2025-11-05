#include <stdio.h>
int main(){
	int a;
	printf("a : ");
	scanf("%d",&a);
	int b;
	printf("b : ");
	scanf("%d",&b);
	printf(" a is b :%d\n",a=b);
	printf(" a +=b :%d\n",a+=b);
	printf(" a -= b :%d\n",a-=b);
	printf(" a *= b :%d\n",a*=b);
	printf(" a /= b :%d\n",a/=b);
	printf(" a %%= b :%d\n",a%=b);
	return 0;
}
