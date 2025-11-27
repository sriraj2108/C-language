#include<stdio.h>
int main(){
	int r1,c1,r2,c2;
	printf("1st Matrix :\n");
	printf("-----------");
	printf("\nNo.of rows = ");
	scanf("%d",&r1);
	printf("No.of colums = ");
	scanf("%d",&c1);
	printf("\n");
	int m[r1][c1];
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			printf("Element in index (%d,%d) : ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n");
	printf("Matrix 1 is ");
	printf("\n");
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			printf("  %d  ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n2nd Matrix :\n");
	printf("-----------");
	printf("\nNo.of rows = ");
	scanf("%d",&r2);
	printf("No.of colums = ");
	scanf("%d",&c2);
	printf("\n");
	int n[r2][c2];
	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			printf("Element in index (%d,%d) : ",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	}
	printf("\n");
		printf("Matrix 2 is ");
		printf("\n");
	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			printf("  %d  ",n[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	if(r1==r2 && c1==c2){
		int q;
		printf("1.ADD\n2.SUBTRACT\n3.PRODUCT\n");
		printf("Choose one : ");
		scanf("%d",&q);
		switch(q){
			case 1:
			{
				int p[r1][c1];
				printf("After adding,result is");
				printf("\n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c1;j++){
						p[i][j]=m[i][j]+n[i][j];
					printf("  %d  ",p[i][j]);
					}
					printf("\n");
				}
				break;
			}
			case 2:
			{
				int w[r2][c2];
				printf("After subtracting,result is");
				printf("\n");
				for(int u=0;u<r2;u++){
					for(int y=0;y<c2;y++){
						w[u][y]=m[u][y] - n[u][y];
					printf("  %d  ",w[u][y]);
					}
					printf("\n");
				}
				break;
			}
			case 3:{
					if(c1==r2){
		printf("PRODUCT MATRIX\n");
			int z[r1][c2];
			for(int i=0;i<r1;i++){
				for(int j=0;j<c2;j++){
				z[i][j]=0;
					for(int l=0;l<c1;l++){
					z[i][j] += m[i][l] * n[l][j];
					
				}
				printf("  %d  ",z[i][j]);	
			}
				printf("\n");
		}
		}
		else{
			printf("THESE MATRICES CAN'T BE MULTIPLIED\n");
		}
				break;
			}
			default:
				printf("Select correctly!!");
		}
	}
	
	
