#include<iostream>
using namespace std ; 
int main(){
    int a[11] = {0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = 11;
    int st = 0 , end = n -1 ; 
    if(a[st]!=a[st+1]){
        cout << a[st];
        return 0 ; 
    }else if(a[end]!=a[end-1]){
        cout <<a[end] ; 
        return 0 ; 
    }
    while(st <= end){
       int mid = st + (end-st)/2 ;
       if(a[mid]!=a[mid-1]&&a[mid]!=a[mid+1]){
        cout <<a[mid] ; 
        return 0 ; 
       } 
       if(mid%2==0){
        if(a[mid]==a[mid-1]){
            end = mid - 1 ; 
        }else {
            st = mid +1 ; 
        }
       }else if(a[mid]==a[mid-1]){
              st = mid + 1 ; 
       }else {
        end = mid - 1 ; 
       }
    
        
    }
    cout << " invalid" ; 
    return 0 ; 

}