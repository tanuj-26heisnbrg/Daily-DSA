//Tanuj kumar yadav IT (0112IT221068)
#include<iostream>
#include<vector>
using namespace std ;


int weight_check (vector<int> &arr , int &X ){
    int total = 0 ;
    int weightSum =0;
    
    for(int i= 0 ;i<arr.size();i++){
        
        weightSum += arr[i];
        if(weightSum <= X){
            total++;
        }
        else  {
            break ;
        }
    }
 return total ;
      
}

int main (){

    int n ; //number of people
    cout<<" enter no. of people going to use lift : "; 
    cin>>n;

    int X ; //weight of lift
    cout<<" Enter max weight capacity of the lift : ";
    cin>>X;


    vector <int > arr (n);
    cout<<" enter weight of each person(into array) : " ;
    for (int t =0 ; t<n ; t++)
                cin>>arr[t] ;


   int result = weight_check(arr,X) ;
   cout<<" total people who can use the lift together : "<<result ;

   return 0 ;
}