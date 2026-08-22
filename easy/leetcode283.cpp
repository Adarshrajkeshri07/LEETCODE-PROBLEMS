#include<iostream>
#include<vector>
#include<algorithm>
using namespace std  ; 
void moving(vector<int>& arr){
    int n = arr.size() ; 
    int index = 0 ; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[index]) ; 
            index++ ; 
        }
    }
}
int main() {
    int n  ; 
    cout << " enter the number of element : " ;
    cin >> n ; 
     vector<int> arr(n) ; 
     for(int &i :  arr){
        cin >> i ; 
     }
     moving(arr);
     for(int i : arr){
        cout << i << " " ; 
     }
     return 0 ; 
}