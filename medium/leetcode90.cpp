#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void getallsubset(vector<int> & arr, vector<int> & ans , int i , vector<vector<int>> &allsubset){
    if(i == arr.size()){
        allsubset.push_back(ans) ; 
        return ; 
    }
    ans.push_back(arr[i]) ; 
    getallsubset(arr , ans , i + 1 , allsubset) ; 
    ans.pop_back() ;
    int idx  = i + 1 ; 
    while(idx < arr.size() && arr[idx] == arr[i]){
        idx++; 
    }
    getallsubset(arr , ans , idx , allsubset) ; 
}
vector<vector<int>> subset(vector<int> & nums){
    sort(nums.begin() , nums.end()) ; 
    vector<int> ans ; 
    vector<vector<int>> allsubset ; 
    getallsubset(nums , ans , 0 , allsubset) ; 
    return allsubset ; 
}
int main(){
    vector<int> arr = {1,2,3,3} ; 
    vector<vector<int>> allsubset ;
   allsubset =  subset(arr) ;   
    for(auto x : allsubset){
        cout << "{" ; 
        for(int i : x ){
            cout << i ; 
        }
        cout << "}"; 
        cout <<"\n" ; 
    }
    return 0 ; 
}