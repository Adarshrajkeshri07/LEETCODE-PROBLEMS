#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >>  n ; 
    int sum = 0 , product = 1 , ans = 0 ; 
    while(n!=0){
        int ld = n % 10 ; 
        sum += ld ; 
        product *= ld ; 
        n /= 10 ; 
    }
    ans = product - sum ; 
    cout << ans ; 
    return 0 ; 
}