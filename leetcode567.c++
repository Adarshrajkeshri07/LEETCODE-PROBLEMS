#include<iostream>
#include<string>
using namespace std ;
bool isfreq(int a[], int b[]) ;
bool checksr(string full , string part)
{
    int freq[26] = {0};
    for (int i = 0; i < part.length(); i++)
    {
        freq[part[i] - 'a']++;
    }
    int windowsize = part.length();
    for (int i = 0; i < full.length(); i++)
    {
        int winfreq[26] = {0};
        int windowidx = 0, idx = i;
      
        while (windowidx < windowsize && idx < full.length())
        {
            winfreq[full[idx] - 'a']++;
            windowidx++, idx++;
        }
        if (isfreq(winfreq, freq))
        {
            return true;
        }
    }
    return false;
}
bool isfreq(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main(){
  string  full = "diadbacc";
  string  part = "ab";
 bool ans =  checksr(full , part) ; 
 if(ans){
    cout << " valid" ;
 }else {
    cout << " invalid" ; 
 }
 return 0 ; 
} 