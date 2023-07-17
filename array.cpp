#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
int *x=(int*)a;
int *y=(int*)b;
return *x-*y;
}
int freq(int a[],int n){
qsort(a,n,sizeof(int),cmp);
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
    int freq[n];
 
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[i]==0) {
            printf("\n%d", i);
        }
    }
}
int main()
{
int n;
scanf("%d ",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d ",&a[i]);
}
freq(a,n);
}

