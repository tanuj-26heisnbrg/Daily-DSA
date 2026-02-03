//creating a linkedlist and inserting it into a map for checking any repeated values 

#include <bits/stdc++.h>
using namespace std ;

class node {
     public : 
      int data ;
      node * next ; 
    
      node (int d ){
         data = d;
         next = NULL;
          
      }
};

class linklis {
    
    public :
      node * head  ;
      
      linklis(){
          head = NULL ;
      }
      
      void insertbeg(int data){
        node * insNode = new node (data);
        
        if (head == NULL){
            head = insNode ;
            return ;
        }
        else {
            node * it ;
            it = head ;
            while (it->next != NULL){
                it = it ->next ;
            }
            
           it->next = insNode  ;
            return ;
        }
          
      }
      
      void display (){
          node * it ;
          for (it = head ; it != NULL ; it = it->next ){
              cout<<it->data << " -> " ;
          }
          cout<<" NULL"<<endl;
      }
    
    void mapped (){
       map <int,int> mp ;
       node * it ;
       for (it = head ; it != NULL ; it=it->next ){
           mp[it->data]++ ;
       }
       cout<<"Here is the mapped linkedlist data :"<<endl ;
       
       for(auto i : mp ){
           cout<<i.first <<" - "<<i.second<<endl;
       }
    }
};

int main() {
    // Write C++ code here
     linklis obj ;
     obj.insertbeg(9);
      obj.insertbeg(90);
       obj.insertbeg(10);
        obj.insertbeg(19);
         obj.insertbeg(39);
          obj.insertbeg(39);
         obj.display();
         
  obj.mapped();
   

    return 0;
}
