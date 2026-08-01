#include<iostream>
using namespace std ; 
int binarysearch(int a[] , int size , int target){
    int st = 0 , end = size - 1 , mid ; 
    while (st <= end)
    {
        mid = st + (end - st) / 2 ; 
        if(a[mid]>target){
            end = mid -1 ; 
        }
        else 
        if(a[mid]<target){
            st = mid + 1;
        }else 
        {
            return mid ; 
        }
        
}
return -1;
}
int main(){
 int a[6] = {1,2,3,4,5,6} ; 
 int target = 5 ; 
 int size = 6 ; 
 int ans ;
 ans = binarysearch(a, size, target);
 if(ans!=-1){
    cout << " the final answer is " << ans ;
 }else 
 cout << " invalid " ; 
}