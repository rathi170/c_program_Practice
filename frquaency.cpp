#include<stdio.h>
#include<math.h>
int isPrime(int n){
	int f=0;
	if(n==2)
	  return 1;
	else if(n%2==0&&n!=2)
	   return 0;
else{
	for(int i=0;i<=sqrt(n);i++){
		if(n%i==0){
			f=1;
			break;
		}
	}
    }
	if(f!=1){
		return 1;
	}
}
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int a[n],f[101]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[a[i]]++;
	}
	for(int i=0;i<101;i++)
	{
			if(f[i]>1){
				if(isPrime(f[i])){
					printf("%d",i);
				}
			}
	}
}
