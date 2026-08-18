#include<iostream>
#include<climits>
using namespace std ; 
bool ispossible(int a[] , int size , int worker , int mid);
int main(){
    int a[5] = {50,20,70,30,10} ; 
    int st = a[0] , end = 0  , ans = -1 ; 
    for(int i = 1 ; i < 5 ; i++){
        st = max(st , a[i]) ; 
    }
    for(int i = 0 ; i < 5 ; i++){
        end += a[i] ;
    }
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(ispossible(a,5,3,mid)){
            ans = mid ; 
            end = mid - 1 ; 
        }else 
        st = mid + 1 ; 
    }
    cout << ans ; 
    return 0 ; 

}
bool ispossible(int a[], int size, int worker, int mid){
    int painter = 1 ,time = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(time + a[i] <= mid){
            time += a[i] ; 
        }else {
            painter++;
            time = a[i];
        }
  
    }
    if(painter <= worker){
        return true ; 
    }else {
        return false ; 
    }
}