
-- You are a teacher arranging a trip for  students. You have a class of N students  and you want to divide them into
-- two groups for the trip However, you have planed one group should only consist of students with even numbered ID's
-- and the other group should only consist of students with odd-numbered IDs an both
-- the groups must be of the same length. Your task is to find and return an integer  
-- value representing the maximum number of students that can be included in both groups

-- Input Specification:

-- input : An integer value N representing the total number of students

-- Input2: An integer array containing the IDs of the students.

-- Output Specification:

-- Return an integer value representing the maximum number of students that can be included in both groups.

-- Example 1:

-- input1:4

-- input2: (5,2.3.6)

-- Outout: 2






#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int students_id (vector<int> &stuId, int &n){
    int evenid=0 , oddid=0 ;
    for(int i=0 ; i<n ; i++)
        if (stuId[i] %2==0)
            evenid++ ;
        else
           oddid++ ;
           
  return min(evenid, oddid);           
}

int main() {
    int n ;
    cout<<" Enter no. of students : ";
    cin>>n ;
    
    vector<int> stuId (n);
    cout<<" Enter id number of the "<<n<<" students :" ;
    
    for(int i =0 ; i<n ;i++)
       cin>>stuId[i];
    
    int result = students_id(stuId,n);
    
    cout<<result ;

    return 0;
}
