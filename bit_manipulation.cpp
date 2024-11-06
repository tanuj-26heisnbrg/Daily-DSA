bit manipulation algorithm to find subset of the given elemnents 


#include <bits/stdc++.h>
using namespace std ;
void  find_subset(vector<int>&arr)
{
    int N = arr.size() ;
    
    cout<<" There will be "<<(1<<N)<<" subset formed , namely :"<<endl ;
    for(int i=0 ; i<(1<<N) ;i++){
        cout<<" { " ;
        
        for(int j=0 ; j<N ; j++){
            if(i&(1<<j))
               cout<<arr[j]<<" ";
        }
        cout<<"} ";
    }
}

int main(){
    int n ;
    cout<<" Enter number of elements : ";
    cin>>n ;
    
    vector<int>arr(n);
    
    cout<<" Enter elements of the array : ";
    for(int i=0 ;i<n ; i++)
       cin>>arr[i];
     
    cout<<endl ;
       
    find_subset (arr);
}
