void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int k = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}
