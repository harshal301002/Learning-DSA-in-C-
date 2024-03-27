#include<iostream>
#include<vector>


using namespace std;

int binary_search(vector<int>v, int n, int target){
    int low = 0;
    int high = n-1;
    int mid = low + (high - low) / 2;

   while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid potential overflow

        if (v[mid] == target) {
            return mid;
        } else if (target < v[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    vector<int>v = {3,5,6,7,12,13,16,17};
    int n = v.size();
    cout<<binary_search(v,n,67);


    return 0;
}
