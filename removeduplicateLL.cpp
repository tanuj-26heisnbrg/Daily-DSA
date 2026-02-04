// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std ;

class node {
    public :
      int data ;
      node * next ;
      
      node (int d){
          data = d ;
          next = NULL ;
      }
};

class LinkLis {
  public :
     node * head ;
     
     LinkLis (){
         head = NULL ;
     }
     
     void insertend (int data){
         node * newNode = new node (data);
         if (head == NULL){
             head = newNode ;
         }
         else {
             node * it = head  ;
             while (it -> next != NULL){
                 it= it -> next ;
             }
             it -> next = newNode ;
         }
     }
     void insertbeg(int data){
         node * newnode1 = new node (data);
          if (head == NULL){
             head = newnode1 ;
         }else {
         
         node * t = head ;
         newnode1 -> next = t ;
         head = newnode1 ;
         }
     }
     
     void display (){
         node * it ;
         for (it = head ; it != NULL ; it = it ->next){
             cout <<it->data<<" -> " ;
         }
         cout <<" NULL "<<endl;
     }
     
     void removeDuplicate() {
    for (node* curr = head; curr != NULL; curr = curr->next) {
        node* prev = curr;
        node* temp = curr->next;

        while (temp != NULL) {
            if (temp->data == curr->data) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
    }
      node * it ;
         for (it = head ; it != NULL ; it = it ->next){
             cout <<it->data<<" -> " ;
         }
         cout <<" NULL ";
   }
     
     
};

int main() {
    // Write C++ code here
  LinkLis obj ;
  int n ;
  cout<<" enter no. of elements :";
  cin>>n ;
  
  for (int i=0 ; i<n ; i++){
      int val ;
      cin >> val ;
      obj.insertend(val);
  }
 
          
          obj.display();
          obj.removeDuplicate();
    return 0;
}
