#include<iostream>
#include<vector>
using namespace std  ; 
void getsubset(vector<int> & a , vector<int> &ans , int i , vector<vector<int>>& allsubset){
    if(i == a.size()){
        allsubset.push_back({ans}) ;
        return;
    }
    //include //
    ans.push_back(a[i]) ; 
    // exclude 
    getsubset(a , ans , i + 1 , allsubset) ; 
    ans.pop_back() ; 
    getsubset(a , ans , i + 1 , allsubset) ; 
}
vector<vector<int>> subset(vector<int> arr){
    vector<int > ans ; 
    vector<vector<int>> allsubset ; 
    getsubset(arr , ans ,  0 , allsubset) ; 
    return allsubset ; 
}
int main(){
    vector<int> arr = {1,2,3,4,5} ; 
    vector<vector<int>> allsubset ; 
    vector<int> ans ; 
     allsubset = subset(arr) ; 
    for(auto x : allsubset){
        cout << "[" ; 
        for(int i : x){
            cout << i  <<" "; 
        }
        cout << "]";
        cout << endl ; 
    } 
    return 0 ; 
}