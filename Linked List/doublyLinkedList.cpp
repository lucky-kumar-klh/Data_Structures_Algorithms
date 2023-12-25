#include <bits/stdc++.h>
using namespace std;

class Node{

  public:
    int data;
    Node* prev;
    Node* next;

  Node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, int d){
  Node* temp = 
}

void listLength(Node* &head){
  Node* temp = head;
  int count = 0;
  while (temp != NULL){
    temp = temp -> next;
    count++;
  }
  cout << "Length of list : " << count << endl;
}

void printList(Node* &head){
  Node* temp = head;
  while (temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

int main(){

  Node* newNode = new Node(10);
  Node* head = newNode;
  printList(head);
  listLength(head);
  
  return 0;
}