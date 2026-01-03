
#include <bits/stdc++.h>
using namespace std ;

int binSearch(vector<int> &arr,int low , int high, int target)

{
    if(low>high) return -1;
    
    int mid = low +(high - low)/2;
    
    if(arr[mid]==target) 
          return mid ;
    
    else if(arr[mid]<target) 
         return binSearch(arr, mid+1,high,target);
    
    else  
       return binSearch(arr,low , mid-1,target);
    
    
}

int main() {
  
    int n ;
    cin>>n ;
    vector<int> arr(n) ;
    for(int i =0  ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int target ; cin>> target ;
    
    int ans = binSearch(arr , 0 , n-1 , target) ;
    
    if(ans == -1 ){
        cout<<"not found !!!";
    }
    else{
        cout<<" Found at index = "<<ans ;
    }

    return 0;
}
