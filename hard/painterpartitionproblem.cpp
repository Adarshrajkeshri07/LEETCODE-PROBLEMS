#include<iostream>
#include<climits>
using namespace std ;
bool ispossible(int a[] ,int size , int worker, int mid );
int main(){
int a[4] = {40,10,30,20} ; 
int st =a[0] , end = 0 ;
int ans = -1 ;
for(int i = 0 ; i < 4; i++){
    st = max(st , a[i]) ; 
}
for(int i = 0 ; i < 4 ; i++){
    end += a[i] ; 
}
while(st <= end){
    int mid = st + (end - st) / 2 ; 
    if(ispossible(a,4,2,mid)){
        ans = mid ; 
        end = mid - 1; 
    }else 
    st = mid + 1 ; 
}
cout << ans ; 
return 0 ; 
}
bool ispossible(int a[],int size , int worker ,int mid){
    int painters = 1 , time = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(time + a[i] <= mid){
            time += a[i] ;
        }
        else {
            painters++ ; 
            time = a[i] ; 
        }
    }
    if(painters <= worker){
        return true ; 
    }else {
        return false ; 
    }
}