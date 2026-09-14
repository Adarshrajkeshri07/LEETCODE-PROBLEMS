#include<iostream>
using namespace std ; 

int main(){
    int a[4][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {9, 11, 13, 15},
        {10, 12, 14, 16}};
        bool match =  false ; 
        int target  ; 
        cout << "enter the value of target : " ; 
        cin >> target ; 
        int rows = 4 , cols = 4 ; 
        int r = 0 , c = cols - 1 ; 
        while( r < rows && c >= 0){
            int mid = a[r][c] ; 
            if(target == mid){
                match  = true ; 
                break;
            }else if(target < mid){
                c-- ; 
            }else {
                r++ ; 
            }
        }
        if(match){
            cout << " target matched " ; 
        }else {
            cout << " target not found ! " ; 
        }
        return 0 ; 
}