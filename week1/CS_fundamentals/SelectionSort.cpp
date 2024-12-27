void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}
