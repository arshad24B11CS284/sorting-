void SelectionSort(int A[], int n){
    
    for(int i = 0 ; i < n - 1 ; i++){
        int min = i;//assume the first element is the minimum
        for(int j = i + 1 ; j < n ; j++){//start from the second element
            if(A[j] < A[min]){
                min = j;
            }
        }
        int temp = A[i];//swap the minimum element with the first element of the unsorted array
        A[i] = A[min];
        A[min] = temp;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    SelectionSort(A,n);
     for(int i = 0 ; i < n ; i++){
        printf("%d ", A[i]);
    }
}
