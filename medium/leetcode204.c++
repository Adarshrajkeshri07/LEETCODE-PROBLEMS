#include<iostream>
#include<vector>
using namespace std ; 
int main(){
int n  = 16 ; 

int count =  0 ; 
vector<bool> isprime(n+1, true) ; 
for(int i = 2 ; i < n ; i++){
    if(isprime[i]){
        count++ ; 
        for(int j = i*2 ; j < n ; j += i){
            isprime[j] = false ; 
        }
    }
}
for(int i = 2 ; i < n ; i++){
    if(isprime[i]){
        cout <<  i << " " ; 
    }
}
return 0 ; 
}