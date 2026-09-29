#include<iostream>
#include<vector>
#include<algorithm>
using namespace std  ; 
void permute(vector<int> & a , vector<vector<int>> &ans , int idx ){
    int n = a .size() ; 
    if(idx == n){
        ans.push_back(a) ; 
        return ; 
    }
    for(int i = idx ; i < n ; i++){
        swap(a[i] , a[idx]) ; 
        permute(a , ans , idx + 1) ; 
        swap(a[i] , a[idx]) ; 
    }
}
vector<vector<int>> getpermute(vector<int> &arr){
    vector<vector<int >> ans ; 
    permute(arr , ans , 0) ; 
    return ans ; 
}
int main(){
    vector<int> arr  = {2,2,3,3} ; 
    vector<vector<int>> ans ; 
   ans =  getpermute(arr) ;
    for(auto x : ans){
        cout << "["  ;
        for(int i : x) {
            cout << i ; 
        }
        cout << "]"; 
    } 
    return 0 ; 
}