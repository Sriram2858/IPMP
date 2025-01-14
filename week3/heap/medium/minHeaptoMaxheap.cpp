void maxHeap(vector<int> &arr, int i, int N){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    
    if(l < N && arr[largest] < arr[l])
        largest = l;
    if(r < N && arr[largest] < arr[r])
        largest = r;
    if(largest != i){
        swap(arr[largest], arr[i]);
        maxHeap(arr, largest, N);
    }
}
void convertMinToMaxHeap(vector<int> &arr, int N){
    for(int i = (N-2)/2; i >= 0; i--){
        maxHeap(arr, i, N);
    }
}
