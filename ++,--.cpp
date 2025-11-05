#include<stdio.h>
int main(){
	int a=5,b;
	b = ++a;//a inc first then assigned
		printf("%d is a & %d is b\n",a,b);
	int z=5,c;
	c = z++;//z assigned first then inc
		printf("%d is z & %d is c\n",z,c);
		int x=5,d;
	d = --x;//x dec first then assigned
		printf("%d is x & %d is d\n",x,d);
	int y=5,e;
	e = y--;//y assigned first then dec
		printf("%d is y & %d is e\n",y,e);
}
