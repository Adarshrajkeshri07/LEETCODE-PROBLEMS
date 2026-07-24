#include<iostream>
using namespace std ; 
int main(){
    int a[7] = {2,3,1,2,2,2,3};
    int n = 7 ; 
    int count ;
    for(int i = 0 ; i < n ; i++){
        count = 0 ; 
        for(int j = 0 ; j < n ; j++){
             if(a[i]==a[j]){
                count++;
             }
        }
        if(count>(n/2)){
            cout<< " the majority element is : "<< a[i] ; 
            break; 
        }

    } 
    return 0 ; 
}