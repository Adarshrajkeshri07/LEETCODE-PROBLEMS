#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int target)
    {

        vector<vector<int>> ans ; 
        sort(a.begin() , a.end()) ; 
        int n  =  a.size() ; 
        for(int i = 0 ; i < n ; i++){
            if(i > 0  && a[i] == a[i - 1]) continue; 
            for(int j = i + 1 ; j < n ; j++){
                if (j > i + 1 && a[j] == a[j - 1])
                    continue;
                    int p = j + 1 , q = n - 1; 
                    while(p < q ){
                        long long sum = a[i] + a[j] + a[p] + a[q] ; 
                        if(sum > target ){
                            q-- ;
                        }else if(sum < target){
                            p++ ; 
                        }else {
                            ans.push_back({a[i] , a[j] , a[p] , a[q]});
                            while(p < q && a[p] == a[p+1]) p++ ;
                            while(p < q && a[q] == a[q-1]) q-- ;
                            p++, q--;
                        }
                       
                    }
            }
        }
        return ans ; 

    }
};

int main()
{

    Solution obj;

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = obj.fourSum(nums, target);

    for (auto row : ans)
    {
        for (auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}