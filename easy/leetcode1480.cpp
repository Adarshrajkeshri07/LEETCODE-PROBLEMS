#include<iostream>
#include<vector>
using namespace std ; 
vector<int> arrr(vector<int>& arr){
    int n = arr.size() ; 
    vector<int> ans(n) ; 
    ans[0] = arr[0] ; 
    for(int i = 1 ; i < n ; i++){
        ans[i] = ans[i-1] + arr[i] ; 
    }
    return ans ; 
}
int main(){
    vector<int> a = {1,1,1,1,1} ; 
   vector<int> n =  arrr(a) ; 
   for(int i = 0 ; i  < a.size() ; i++){
    cout << n[i] <<" " ;  
}
   
   
    return 0; 
}