#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("perfect number");
		return 0;
	}
	printf("not perfect number");
}
