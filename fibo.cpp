#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int n1,n2,n3;
	n1=0;
    n2=1;
	
	printf("%d  %d ",n1,n2);
	for(int i=0;i<n;i++){
		  n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
	}
	
}
