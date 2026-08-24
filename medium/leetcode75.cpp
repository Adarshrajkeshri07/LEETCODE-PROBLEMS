#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
void sr(vector<int>& arr){
    int n = arr.size() - 1 ; 
    int low = 0 , mid = 0 , high = n  ; 
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid] , arr[low]) ; 
            mid++ , low++ ;
        }
        else if(arr[mid] == 1){
            mid++;
        }else {
            swap(arr[mid],arr[high]) ; 
            high-- ; 
        }
    }

 } 
 int main(){
    int n ; 
    cout << "enter how much element : " ; 
    cin >> n ; 
    vector<int> arr(n) ; 
    for(int &i : arr){
        cin >> i ;
    }
    sr(arr) ;
    for(int i : arr){
        cout << i << " " ;
    }
    return 0 ; 
 }
