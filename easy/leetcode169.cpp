// #include<iostream>
// using namespace std ; 
// int main(){
//     int a[7] = {2,3,1,2,2,2,3};
//     int n = 7 ; 
//     int count ;
//     for(int i = 0 ; i < n ; i++){
//         count = 0 ; 
//         for(int j = 0 ; j < n ; j++){
//              if(a[i]==a[j]){
//                 count++;
//              }
//         }
//         if(count>(n/2)){
//             cout<< " the majority element is : "<< a[i] ; 
//             break; 
//         }

//     } 
//     return 0 ; 
// }
//solve this same question using moore's voting algorithm to optmise this code O(n x n) timecomplexity to O(n) .
#include<iostream>
using namespace std ;
int main(){
    int a[7] = {2,3,1,2,2,2,3} ;
    int n = 7 ;
    int ans = a[0] ; 
    int count = 0 ; 
    for(int i = 0 ; i <  7 ; i++){
        if(count==0){
            ans = a[i] ; 
        }
        if(ans==a[i]){
            count++;
        }else{
            count--;
        }
    }
    cout<< ans ; 
    return 0 ; 
}