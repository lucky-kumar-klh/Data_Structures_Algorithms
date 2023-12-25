#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* next;

  // Using Contructor to Implement data and address
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, int d){
  Node* temp = new Node(d);
  temp -> next = head;   // Linking current node to before the head node
  head = temp;   // Pointing head to current node & Update Head
}

void insertAtEnd(Node* &tail, int d){
  // Create new node temp to insert at last
  Node* temp = new Node(d);
  tail -> next = temp;   // insert link of new temp address to tail node ka next me
  tail = temp;   // Pointing tail to new temp node / current node & update tail
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
  // For 1st position, insertAtHead function will do it's work
  if (position == 1){    
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  int count = 1;
  // Find Position 
  while (count < position-1){   // If position is 4, then move till 3rd Node
    temp = temp -> next;
    count++;
  }
  // After finding position of 2nd last node, check if position is telling to insert at last node or not => if (temp -> next == NULL)
  // Inserting at End
  if (temp -> next == NULL){
    insertAtEnd(tail, d);
    return;
  }
  // Interting at Position
  // Now temp reached to position-1 place
  Node* insertNode = new Node(d);  // Creating new node to insert
  insertNode -> next = temp -> next;  // Changing link
  temp -> next = insertNode;  // temp pointing to new / current insert node 
}

void print(Node* &head){
  if (head == NULL){   // Empty Node
    cout << "Empty List !" << endl;
  }
  else {
    Node* temp = head;    // Create Node & assign head in it to start from head
    while (temp != NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }
  cout << endl;
}

int main(){

  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;
  
  insertAtHead(head, 9);
  insertAtHead(head, 1);
  
  print(head); 
  
  insertAtEnd(tail, 30);
  insertAtEnd(tail, 33);

  insertAtPosition(tail, head, 6, 90);
  
  print(head);

  cout << "Head : " << head -> data << endl;
  cout << "Tail : " << tail -> data << endl;

  return 0;
}