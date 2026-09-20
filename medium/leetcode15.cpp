#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
class question{
    public :
    vector<vector<int>> sum(vector<int> &arr){
        int n = arr.size() ; 
       vector<vector<int>> ans ; 
        sort(arr.begin() , arr.end()) ; 
        for(int i = 0 ; i < n ; i++){
            if(i > 0 && arr[i] == arr[i-1]) continue; 
            int j = i + 1 , k = n - 1 ; 
            while(j  <  k ){
                int sum = arr[i] + arr[j] + arr[k] ; 
                if(sum < 0 ){
                    j++ ; 
                }else if(sum > 0 ){
                    k-- ; 
                }else {
                    ans.push_back({arr[i] , arr[j] , arr[k]}) ;
                    j++ , k-- ; 
                    if( j < k && arr[j] == arr[j-1]) j++ ; 

                }

            }
        }
        return ans ; 
    }

};
int main(){
    vector<int> a = {-2,0,1,1,2,-1,-4,-3} ;
    question obj ; 
    vector<vector<int>> answer = obj.sum(a) ; 
    for(auto triplet : answer){
        cout << "[" << " " ; 
        for(int x : triplet){
            cout << x << " " ; 
        }
        cout << " ] " << " " ; 
    }
return 0 ; 
    
    
}