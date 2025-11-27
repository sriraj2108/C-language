#include<stdio.h>
int main(){
	int n;
	printf("No.of ele in array :");
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		printf("Element %d :",i+1);
		scanf("%lld",&a[i])
	}
	printf("\n");
	printf("Array is :");
	printf("%lld",a[0]);
	for(int k=1;k<n;k++){
		printf(",%lld",a[k]);
	}
	int temp,temps;
	for(int i=0;i<n-1;i++){
		for ( int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("Ascending order :");
	printf("%lld",a[0]);
	for(int m=1;m<n;m++){
	printf(",%lld",a[m]);
	}
	int b[n];
	for(int s=0;s<n;s++){
		b[s]=a[s];
	}
	for(int i=0;i<n-1;i++){
		for ( int j=0;j<n-i-1;j++){
			if(b[j]<b[j+1]){
				temps=b[j];
				b[j]=b[j+1];
				b[j+1]=temps;
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("Descending order :");
	printf("%lld",b[0]);
	for(int m=1;m<n;m++){
	printf(",%lld",b[m]);
	}
}
