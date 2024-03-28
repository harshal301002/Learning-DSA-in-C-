#include<iostream>
#include<vector>


using namespace std;

int binary_search(vector<int>v, int low, int high, int target){
    if(low>high){return -1;}

    int mid = low + (high-low)/2;
    if(target == v[mid]){return mid;}

    else if(target > v[mid]){return binary_search(v,mid+1,high,target);}
    else {return binary_search(v,low,mid-1,target);}

    

    return -1;
}

int main(){

    vector<int>v = {3,5,6,7,12,13,16,17};
    cout<<binary_search(v,0,v.size()-1,6);


    return 0;
}
