#include<iostream>
#include<cmath>
using namespace std;

long long coin (long long n){
    long long count = 1;
    if(n <= 3) return 1;
    while(n > 3){
        n = (long long)floor(n/4);
        count = count*2;
    }
    return count;
}
 
int main(){
    int n;
    cin >> n;
    int i = 0;
    long long input;
    long long arr[n];
    while(i < n){
        cin >> input;
        arr[i] = coin(input);
        i++;
    }
    for(i = 0;i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}
