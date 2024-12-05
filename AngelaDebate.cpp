// Angela has N students in her class and has announced a surprise debate. An integer array A has the roll number of all N students. 
// For the debate, the students will be grouped into pairs, where the student that has smallest roll number will be paired with the student that has the largest roll number,
// and student that has second smallest roll number will be paired with the student that has second largest roll number, and so on. 
//   A pair can debate if some of their roll number is divisible by an integer K. In case there is only one student left and twice his or her roll number is divisible by K, 
// that student will debate with Angela. Your task is to find and return an integer value representing the lowest roll number amongst all the positive-digital pairs.
// If only one student is left, then return that student's roll number. In case no student is chosen, return minus one. Note. Assume one based index everywhere. 
//   The roll number can be any positive integer. The random number K is always a positive integer. Write a program in C++.


#include <bits/stdc++.h>
#include <vector>
using namespace std ;

int findlowRoll (vector<int> &A , int &N , int &K){
    int lowRollNum = -1 ;
    sort(A.begin(),A.end());
    for(int i =0 ; i< N/2 ;i++){
     int smallest = A[i];
     int largest = A[N-1-i];
     
     if((smallest + largest)%K == 0){
         if(lowRollNum == -1 || smallest< lowRollNum){
             lowRollNum = smallest ;
         }
      }
    }
    
    if(N%2==1){
        int middle = A[N/2];
        if((2*middle)%K==0){
            if(lowRollNum == -1 || middle < lowRollNum){
                lowRollNum = middle ;
            }
        }
    }
    return lowRollNum ;
}



int main() {
    // Write C++ code here
    int N , K;
cout<<" enter number of students : ";
    cin>>N ;
   
    vector<int> A(N) ;
    cout<<" enter roll number of the "<<N<<" students :"<<endl; 
    for(int i =0 ; i<N ; i++){
        cin>>A[i] ;
    }
    
    cout<< " enter target K : ";
    cin>>K;
    
    int result = findlowRoll (A,N,K);
    cout<<result ;

    return 0;
}
