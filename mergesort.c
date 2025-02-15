#include <stdio.h>
// code for merge sort
void merge(int a[],int start,int mid,int end,int n){
    int i=start;
    int j=mid+1;
    int b[end-start+1];
    int k=0;
   
    while(i<=mid && j<=end){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        } else {
            b[k++]=a[j++];
        }
    }
   
    while(i<=mid)b[k++] = a[i++];
    while(j<=end)b[k++] = a[j++];
    k=0;
    for(int i=start;i<=end;i++){
        a[i] = b[k++];
    }
}

void mergesort(int a[],int start,int end,int n){
    if(start>=end)return;
    int mid = (start + end) / 2;
    mergesort(a,start,mid,n);
    mergesort(a,mid+1,end,n);
    merge(a,start,mid,end,n);
   
}

int main() {
// your code goes here
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
}
mergesort(a,0,n-1,n);
for(int i=0;i<n;i++){
   printf("%d",a[i]);
}

}


