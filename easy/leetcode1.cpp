#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ; 
int main(){
    vector<int> a = {2,7,9,11,5} ; 
    int n = a.size(); 
    bool match = false ; 
    unordered_map<int , int> m ; 
     pair<int ,int> ans ; 
    int target = 16 ; 
    for(int i = 0 ; i < n ; i++){
        int fisrt  = a[i] ; 
        int sec = target - fisrt ; 
        if(m.find(sec) != m.end()){
            ans = {i , m[sec]} ;
            match = true;
            break;
           
        }
        m[fisrt] = i ; 
    }
   if(match){
    cout << ans.first << " " << ans.second ; 
   }else{
    cout << " invalid" ; 
   }
    return 0 ; 

}















//bruteforce approach //////
// #include<iostream>
// #include<vector>
// using namespace std ; 
// vector<int> twosum(vector<int> nums , int target ){
//     int n = nums.size() ; 
//     int sum ; 
//     vector <int>  ans ; 
//     for(int i = 0 ; i < n ; i++){
//         for(int j = i + 1 ; j < n ; j++){
//             if(nums[i]+nums[j]== target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans  ; 
//             }
//         }
//     }
//     return{} ; 
// }
// int main(){
//     vector<int> nums = { 3 , 5 , 9 } ; 
//     vector<int> ans ; 
//       ans = twosum(nums,12) ;  
//       cout << ans[0] << ans[1] ; 
//     return 0 ;

// }
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

// #include<iostream>
// using namespace std ;
// void twosum(int a[] , int size , int target) {
//     int st = 0 , end = size -1 ; 
//     int sum = 0 ; 
//     while(st < end){
//         sum = a[st] + a[end] ; 
//         if(sum < target){
//             st++;
//         }else 
//         if(sum > target){
//             end--;
//         }
//         else {
//             cout <<  " matched";
//             return ;
            
           
//         }
//     }
//     cout <<  "not " ; 
// }
//  int main(){
//     int nums[3] = { 3 , 5 , 9 } ;
//     twosum(nums,3,12);
    
      
//      return 0 ;
//  }