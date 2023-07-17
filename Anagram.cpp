#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],t;
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b)){
		printf("not anagram");
		return 0;
	}
	int n=strlen(a);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			if(b[i]>b[j]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			printf("not an anagram");
			return 0;
		}
	}
	printf("anangranm");
}
