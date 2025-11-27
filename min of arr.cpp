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
	int min=a[0];
	for(int j=1;j<n;j++){
		if(min>a[j]){
			min=a[j];
		}
	}
	printf("\n");
	printf("Min is %lld",min);
}
