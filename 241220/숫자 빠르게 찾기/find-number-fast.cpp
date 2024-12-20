#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'

int binary_search(vector<int>& arr, int value){
    int left=0;
    int right=arr.size()-1;

    while(left<=right){
        int mid=(left+right)/2;
        if(value<arr[mid]){
            right=mid-1;
        }else if(value>arr[mid]){
            left=mid+1;
        }else{
            return mid+1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    

    for(int i = 0; i < m; i++) {
        int target;
        cin >> target;
        cout<<binary_search(v, target)<<endl;
    }
    
    return 0;
}