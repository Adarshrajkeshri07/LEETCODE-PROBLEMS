#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int a[5] = {2,3,5,1,7};
    int bestbuy = a[0] ; 
    int maxprofit = 0 ; 
    for(int i = 1 ; i < 5 ; i++){
        if(a[i]>=bestbuy){
            maxprofit = max(maxprofit,a[i]-bestbuy);
        }
        bestbuy = min(bestbuy , a[i]);
    }
    cout << maxprofit; 
    return 0 ;
}