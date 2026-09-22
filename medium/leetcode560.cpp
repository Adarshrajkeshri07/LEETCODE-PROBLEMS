#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
class Solution{
    public :
    int subarraySum(vector<int> &a , int k){
        int n = a.size() ; 
        vector<int> ps(n ,0) ; 
        int vote = 0 ; 
        ps[0] = a[0] ; 
        for(int i = 1 ; i < n ; i++){
            ps[i] = ps[i - 1] + a[i] ; 
        }
        unordered_map<int , int>m ;
        m[0] = 1;
        for(int i = 0 ; i < n ; i++){
            int val = ps[i] - k ; 
            if(m.find(val) != m.end()){
                vote += m[val] ; 
            }
            m[ps[i]]++ ; 
        }
        return vote ; 
    }

};
int main(){
    vector<int> a = {2,4,17,8,6} ; 
    int k = 6 ; 
    Solution obj ; 
    int ans = obj.subarraySum(a , k) ; 
    cout << ans ; 
}









 //brute force //////////////
// class Solution
// {
// public:
//     int subarraySum(vector<int> &a, int k)
//     {
//         int n = a.size();
//         int vote = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int sum = 0;
//             for (int j = i; j < n; j++)
//             {
//                 sum += a[j];
//                 if (sum == k)
//                 {
//                     vote++;
//                 }
//             }
//         }
//         return vote;
//     }
// };