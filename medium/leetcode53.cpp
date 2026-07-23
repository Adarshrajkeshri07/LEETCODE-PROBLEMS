#include<iostream>
#include<climits>
#include<vector>
using namespace std ; 
int maximum(vector<int> nums){
    int n = nums.size();
    int currentsum = 0 , maximumsum = INT_MIN ; 
    for(int i = 0 ; i < n ;i++ ){
        currentsum+=nums[i];
        maximumsum = max(currentsum, maximumsum);
        if(currentsum < 0){
            currentsum = 0 ;
        }
    }
  return maximumsum ; 

}
int  main(){
    vector<int> nums = {3,5,4,6,7} ; 
   cout << maximum(nums);
    return 0 ;
}
// // class Solution {
// public:
// int maxSubArray(vector<int> &nums)
// {
//     int currentsum = 0, maxsum = INT_MIN;
//     for (int val : nums)
//     {
//         currentsum += val;
//         maxsum = max(currentsum, maxsum);
//         if (currentsum < 0)
//         {
//             currentsum = 0;
//         }
//     }
//     return maxsum;
// }
// }
// ;