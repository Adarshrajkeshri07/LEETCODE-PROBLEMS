#include<iostream>
using namespace std ; 
int main(){
    int a[8] = {2, 5, 9, 12, 15, 11, 7, 3};
    int n = 8;
    int st = 1 ,end = n-2 ; 
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
            cout <<a[mid] ; 
            return 0 ; 
        }if(a[mid]>a[mid-1]){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
    cout << "invalid" ; 
    return 0 ; 

}