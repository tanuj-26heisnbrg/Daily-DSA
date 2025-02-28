#include <bits/stdc++.h>
using namespace std ;
int main() {
    // Write C++ code here
    int n ;
    cin>>n ;

for(int i = 0; i<=n ; i++){
 if((1<<i)>n){
  cout<<(1<<i)-(n+1) ;
 break ;
     
 }
 
}
    return 0;
}
