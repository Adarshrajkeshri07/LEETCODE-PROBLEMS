//bruteforce approach //////
#include<iostream>
#include<vector>
using namespace std ; 
vector<int> twosum(vector<int> nums , int target ){
    int n = nums.size() ; 
    int sum ; 
    vector <int>  ans ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(nums[i]+nums[j]== target){
                ans.push_back(i);
                ans.push_back(j);
                return ans  ; 
            }
        }
    }
    return{} ; 
}
int main(){
    vector<int> nums = { 3 , 5 , 9 } ; 
    vector<int> ans ; 
      ans = twosum(nums,12) ;  
      cout << ans[0] << ans[1] ; 
    return 0 ;

}
// // class Solution {
// public:
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }

//     return ans;
// }
// }
// ;