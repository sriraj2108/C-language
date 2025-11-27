#include<stdio.h>
int main(){
	int n;
	printf("No.of ele in array :");
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		printf("Element %d :",i+1);
		scanf("%lld",&a[i]);
	}
	printf("Array is :");
	for(int k=0;k<n;k++){
		printf("%lld ",a[k]);
	}
	int max=a[0];
	for(int j=1;j<n;j++){
		if(max<a[j]){
			max=a[j];
		}
	}
	printf("\n");
	printf("Max is %lld",max);
}
