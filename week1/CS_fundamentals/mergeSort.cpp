void merge(vector<int>& arr, int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> f(n1); 
    vector<int> s(n2);
    for(int i = 0; i < n1; i++)
        f[i] = arr[l + i];
    for(int i = 0; i < n2; i++)
        s[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(f[i] <= s[j]){
            arr[k] = f[i];
            i++;
        }
        else{
            arr[k] = s[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = f[i];
        k++;
        i++;
    }
    while(j < n2){
        arr[k] = s[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l >= r)
        return;
    int m = l + (r - l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
