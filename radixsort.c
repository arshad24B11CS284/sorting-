#include<stdio.h>

int getMax(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (abs(A[i]) > abs(max)) {
            max = A[i];
        }
    }
    return abs(max);
}

void RadixSort(int A[], int n){
    int B[10][n];
    int maxi = getMax(A,n);
    int val = 1;
    while(maxi){
        int arr[10]={0};
        for(int i = 0 ; i < n ; i++){
            int  x = (A[i]/val)%10;
            if(x < 0) x = -x;
            B[x][arr[x]]=A[i];
            arr[x]++;
        }
        val = val*10;
        int cnt = 0;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < arr[i] ; j++){
                A[cnt++]=B[i][j];
            }
        }
        maxi = maxi/10;
    }
    int pos = 0, neg = 0;
    for(int i=0; i<n; i++) {
        if(A[i] < 0) {
            B[0][neg++] = A[i];
        }
        else {
            B[1][pos++] = A[i];
        }
    }
    for(int i=0; i<neg; i++) {
        A[i] = B[0][i];
    }
    for(int i=0; i<pos; i++) {
        A[neg+i] = B[1][i];
    }
}
int main(){
    
    int n ;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&A[i]);
    }
    RadixSort(A,n);
    for(int i = 0 ; i < n ; i++){
        printf("%d ",A[i] );
    }
    
    
}
