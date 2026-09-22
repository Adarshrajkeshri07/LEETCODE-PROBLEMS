#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &a, int k)
    {
        int n = a.size() ; 
        int vote = 0  ; 
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += a[j] ;
                if (sum == k)
                {
                    vote++;
                }
            }   
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