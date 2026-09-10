#include<iostream>
#include<vector>
using namespace std ; 
bool binarysearch(int a[] , int target , int size){
    int st = 0  , end =  size - 1 ; 
    while(st <= end){
        int mid =  st + (end - st) / 2 ; 
        if(a[mid] == target){
            return true ; 
        }else if(a[mid] < target){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
    return false ; 
}
int main(){
  int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}} ; 
  int target = 8 ; 
  int rows = 4 , cols = 3 ; 
  int strow = 0 , endrow = rows - 1 ; 
  while(strow <= endrow){
    int midrow = strow + (endrow - strow ) / 2 ; 
    if(a[midrow][0] <= target && target <= a[midrow][cols - 1]){
        // binarysearch ....
        if (binarysearch(a[midrow], target, cols)){
            cout << "valid target" << endl  ;
            cout << midrow << " " << " " << cols;  
        }else {
            cout << "invalid target" ; 
        }
        return 0 ; 
    }
    else if(a[midrow][0] > target){
    endrow = midrow - 1 ; 
    }else {
        strow = midrow + 1 ; 
    }
  }

  return 0 ; 
}