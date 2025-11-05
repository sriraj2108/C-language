#include <stdio.h>
int main(){
	int a;
	printf("int =");
	scanf("%d",&a);
	float b;
	printf("float =");
	scanf("%f",&b);
	double c;
	printf("double =");
	scanf("%lf",&c);
	char d[100];
	printf("string =");
	scanf("%s",d);
	char e;
	printf("char =");
	scanf( " %c",&e);
		printf("the integer u choosed is %d\n",a);
			printf("the float u choosed is %f\n",b);
				printf("the double u choosed is %lf\n",c);
					printf("the string u choosed is %s\n",d);
						printf("the char u choosed is %c\n",e);
}
