#include<stdio.h>
int main(){
	int n,k;
	printf("No.of ele in array :");
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		printf("Element %d :",i+1);
		scanf("%lld",&a[i]);
	}
	printf("Array is :");
	for(int l=0;l<n;l++){
		printf("%lld ",a[l]);
	}
	int found=0;
	printf("\nRepeated element(s) :");
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=0;k<i;k++){
					if(a[k]==a[i])
					break;
				}
				if(k==i){
				printf("%lld ",a[i]);
				found=1;
				}
				break;
			}
		}
	}
			if(found==0){
				printf("None");
			}
}
