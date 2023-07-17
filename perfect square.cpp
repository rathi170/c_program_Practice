#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if((i*i)==n){
			printf("perfect square");
			return 0;
		}
	}
	printf("not perfect square");
	return 0;
}
