#include<iostream>
using namespace std ; 
int main(){
    int a[5][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}};
        int m = 5 , n = 5 ; 
        int srows = 0  , erows = m - 1, scols = 0  , ecols = n - 1 ;
        while(srows <= erows  && scols <= ecols){
            for(int i = scols ; i <= ecols ; i++){
                cout << a[srows][i]<< " " ; 
            }
            for (int i = srows + 1; i <= erows; i++)
            {
                cout << a[i][ecols]<< " ";
            }
            for (int i = ecols - 1 ; i >= scols; i--)
            {
                if(srows == erows)break;
                cout << a[erows][i]<< " ";
            }
            for (int i = erows - 1; i >= srows + 1; i--)
            {
                if (scols == ecols)break;
                cout << a[i][scols]<< " ";
            }
            srows++ , erows--  ;
            scols++ , ecols-- ; 

        }
        return 0 ; 
}