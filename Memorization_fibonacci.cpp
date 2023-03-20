#include<bits/stdc++.h>
using namespace std;
long cache[50];
long f(long n){
        if(n<2)
          return n;
        if(cache[n]!=-1) {
            return cache[n];
        } 
        cache[n]=f(n-1)+f(n-2);
    return cache[n];    
}
void solve() {
    for(long i=0;i<50;i++)
        cache[i]=-1;
}   
int main()
{   
   solve();
   cout<<f(20)<<endl; 
   return 0;
}