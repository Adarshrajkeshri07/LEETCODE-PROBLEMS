#include<iostream>
using namespace std ; 
int sbinarysearch(int a[] , int size , int target){
    int st = 0 , end = size - 1 ; 
    while(st <= end){
      int   mid = st + (end - st)/2 ; 
        if(a[mid]==target){
            return mid ; 
        }
        if(a[st]<=a[mid]){
            if(a[st]<= target && target < a[mid]){
                end = mid - 1 ; 
            }else {
                st = mid + 1 ; 
            }
        }else if(a[mid] <= a[end]){
            if(a[mid] < target && target <= a[end]){
                st = mid + 1 ; 
            }else {
                end = mid - 1 ; 
            }
        }
    }
    return -1 ; 
}
int main(){
    int a[5] = {3,4,5,1,2};
    int size = 5 ; 
    int target = 1 ; 
     int ans = sbinarysearch(a,size,target) ;
     cout << ans ; 
     return 0 ;  
}