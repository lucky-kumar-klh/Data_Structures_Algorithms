#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* next;
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

// *** Brute Force **
// Explanation : 
// Find Length of List in 1st iteration and in 2nd iteration return the
// any temp node as soon as it reaches the mid position 
Node* findMiddle(Node *head) {

   Node* current = head;
   int listLen = 0;

   while (current != NULL){
       listLen++;
       current = current -> next;
    }

    // find middle node number
    int mid = (listLen/2) + 1;

    int poistionOfNode = 1;
    Node* middleNode = head;

    while (poistionOfNode < mid){
        middleNode = middleNode -> next;
        poistionOfNode++;
    }

    return middleNode;

}

int main(){
  
  return 0;
}