#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int n ; 
    cout << " enter the value of number n : " ; 
    cin >> n ; 
    int ld; 
    int rev = 0 ; 
    while(n!=0){
        ld = n % 10 ; 
        rev = rev * 10 + ld ; 
        if(rev >  INT_MAX/10 || rev < INT_MIN/10){
            return 0 ; 
        }
        n /= 10 ; 
    }
    cout << rev ; 
    return 0 ; 
}