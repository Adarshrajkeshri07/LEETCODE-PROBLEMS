#include<iostream>
using namespace std ; 
class solution{
    public :
    int fib(int n){
        if(n == 0 || n == 1){
            return n ; 
        }
        return fib(n - 1) + fib(n - 2) ; 
    }

};
int main(){
    solution obj ; 
    int n  ; 
    cout << " enter the value of n : " ; 
    cin >> n ; 
    int ans = obj.fib(n) ; 
    cout << ans ; 
    return 0 ; 
}