class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() == 1) return 1;
        int n = arr.size();
        int i = 0, flag = 0;
        int max = 1;
        while(i < n - 1 && arr[i] == arr[i + 1])
            i++;
        if(i == n - 1)
            return 1;
        if(arr[i] < arr[i + 1] && i < n - 1)
            flag = 0;
        else flag = 1;
        i++;
        int count = 2;
        while(i < n - 1){
            if(flag == 0){
                if(arr[i] > arr[i + 1]){
                    count++;
                    i++;
                    flag = 1;
                }
                else if(arr[i] < arr[i + 1]){
                    if(max < count) max = count;
                    count = 2;
                    i++;
                }
                else{
                    if(max < count) max = count;
                    while(arr[i] == arr[i + 1] && i < n - 1)
                        i++;
                    if(arr[i] < arr[i + 1] && i < n - 1)
                        flag = 0;
                    else flag = 1;
                    i++;
                    count = 2;
                }
            }

            else if(flag == 1){
                if(arr[i] < arr[i + 1]){
                    count++;
                    i++;
                    flag = 0;
                }
                else if(arr[i] > arr[i + 1]){
                    if(max < count) max = count;
                    count = 2;
                    i++;
                }
                else{
                    if(max < count) max = count;
                    while(arr[i] == arr[i + 1] && i < n - 1)
                        i++;
                    if(arr[i] < arr[i + 1] && i < n - 1)
                        flag = 0;
                    else flag = 1;
                    i++;
                    count = 2;
                }
            }
        }
        if(max < count) max = count;
        return max;
    }
};
