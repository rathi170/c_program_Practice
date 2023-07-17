


#include<stdio.h>
int main()
{
	int n,gap,sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the gaps:");
	scanf("%d",&gap);
	for(int i=0;i<gap;i++){
		sum=0;
		for(int j=i;j<n;j=j+gap){
			sum+=a[j];
		}
		printf("sum= %d",sum);
	}
	
}
