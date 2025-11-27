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
	printf("\n");
	printf("Array is :");
	printf("%lld",a[0]);
	for(int k=1;k<n;k++){
		printf(",%lld",a[k]);
	}
	long long  temp,temps;
	for(int i=0;i<n-1;i++){
		int si=i;
		for ( int j=i+1;j<n;j++){
			if(a[j]<a[si]){
				si=j;
			}	
	}
				temp=a[i];
				a[i]=a[si];
				a[si]=temp;
		}
	printf("\n");
	printf("\n");
	printf("Ascending order :");
	printf("%lld",a[0]);
	for(int m=1;m<n;m++){
	printf(",%lld",a[m]);
	}
	long long b[n];
	for(int s=0;s<n;s++){
		b[s]=a[s];
	}
	for(int i=0;i<n-1;i++){
		int SI=i;
		for ( int j=i+1;j<n;j++){
			if(b[j]>b[SI]){
				SI=j;
			}
		}
				temps=b[i];
				b[i]=b[SI];
				b[SI]=temps;
	}
	printf("\n");
	printf("\n");
	printf("Descending order :");
	printf("%lld",b[0]);
	for(int m=1;m<n;m++){
	printf(",%lld",b[m]);
	}
}
