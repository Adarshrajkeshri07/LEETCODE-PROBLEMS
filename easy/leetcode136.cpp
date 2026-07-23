#include<iostream>
#include<vector>
using namespace std ; 
int main(){

    int n = 0 ; 
    vector<int> nums = {4,1,2,1,2} ; 
    for(int val : nums){
        n^=val;
    }
    cout <<  n ; 
    return 0 ; 
}
//
// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         int n = 0;
//         for (int val : nums)
//         {
//             n ^= val;
//         }
//         return n;
//     }
// };