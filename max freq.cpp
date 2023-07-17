#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],f[101]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[a[i]]++;
	}
	int m=f[0],in=0;
	for(int i=0;i<n;i++){
		if(m<f[i]){
			m=f[i];
			in=i;
		}
	}
	printf("max times ocursing %d-->%d",in,m);
	m=f[0],in=0;
	for(int i=0;i<n;i++){
		if(m>f[i]){
			m=f[i];
			in=i;
		}
	}
		printf("min times ocursing %d-->%d",in,m);
}
