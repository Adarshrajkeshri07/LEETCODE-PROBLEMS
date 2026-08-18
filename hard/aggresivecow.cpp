#include<iostream>
#include<algorithm>
#include<climits>
using namespace std ; 
bool ispossible(int a[ ] , int n , int m ,  int mid) ; 
int main(){
    int a[5] = {8,4,2,7,1} ; 
    int n = 5 ; 
    int m = 3 , ans = -1  ; 
    sort(a  , a + n ) ; 
    int st =  1 , end = a[n-1] - a[0] ; 
    while (st <= end)
    {
        int mid = st + (end - st) / 2 ; 
        if(ispossible(a , n , m  ,mid)){
            ans = mid ; 
            st = mid + 1 ; 

        }else {
            end = mid - 1 ; 
        }
    }
    cout << ans ; 
    return 0 ; 
    
}
bool ispossible(int a[], int n, int m, int mid){
            int cow = 1 , lastpos = a[0] ; 
            for(int i = 1 ; i < n ; i++) {
                if(a[i] - lastpos >= mid){
                    cow++ ; 
                    lastpos = a[i] ; 
                }
            }
            if(cow >= m){
                return true ; 
            }else {
                return false ; 
            }
}
