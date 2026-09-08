#include<iostream>
#include<vector>
using namespace std ; 
int main(){
int n  ; 
cout << " enter the value of n : " ;
cin >> n ; 

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
cout << endl ; 
cout << "the number of prime numbers are  :- " << count ; 
return 0 ; 
}