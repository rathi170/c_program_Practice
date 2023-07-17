#include<stdio.h>
#include<math.h>
int main()
{
	int n,max;
	scanf("%d",&n);
	int a[n],f[101]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[a[i]]++;
	}
	for(int i=0;i<101;i++){
		max=i;
		if(f[i]>max){
			max=i;
		}
	}
	printf("%d",max);
}
