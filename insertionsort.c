void InsertionSort(int A[], int n){
    
    for(int i = 1 ; i < n ; i++){
        int temp = A[i];//take the first element from the unsorted array
        int j = i - 1;//start from the last element of the sorted array
        while(j >= 0 && A[j] > temp){//shift the element to the right if they are greater than the temp
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;//insert the temp to the right position
    }
    // in java my code
    for(int i=0;i<arr.length;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    InsertionSort(A,n);
     for(int i = 0 ; i < n ; i++){
        printf("%d ", A[i]);
    }
}
