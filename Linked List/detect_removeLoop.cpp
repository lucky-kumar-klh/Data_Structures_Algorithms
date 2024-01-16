#include <bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
  
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
Node* head = NULL;

void insert(int data){
  Node* newNode = new Node(data);
  if (head == NULL){
    newNode->next = head;
    head = newNode;
  }
  else {
    Node* temp = head;
    while (temp -> next != NULL){
      temp = temp->next;
    }
    temp -> next = newNode;
  }
}

void printList(Node* Head){
  if(head == NULL){
    cout << "Empty List\n";
    return;
  }
  cout << "\nList : ";
  Node* temp = Head;
  while (temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

void makeLoop(int position){
  if (position == 0)
    cout << "Not Possible" << endl;
  else {
    int count = 1;
    Node* start = head;
    Node* end = head;
    // start node
    while (count < position){
      start = start -> next;
      count++;
    }
    // end Node
    while (end -> next != NULL){
      end = end -> next;
    }

    end -> next = start;

  }
}

Node* intersectingNode(){  // floyd's Algorithm
  if (head == NULL)
    return NULL;

  Node* fast = head;
  Node* slow = head;
  // Move both of them ny single node, until any of them is at NULL
  while (slow != NULL and fast != NULL){
    fast = fast -> next;
    if (fast != NULL)
      fast = fast -> next;
    slow = slow -> next;

    if (slow == fast)  // Loop Exits
      return slow;   // Return common / intersection Node
  }
  return NULL;  // No intersection -> No loop
}

Node* loopHead(){
  Node* intersection = intersectingNode();
  if (intersection == NULL)  // No loop, No intersecting Node, return NULL
    return NULL;
  Node* slow = head;  // move both by single node until they become equal
  while (slow != intersection){  
    intersection = intersection -> next;  
    slow = slow -> next;
  }
  return slow;
}

Node* removeLoop(){
  if (head == NULL){
    return NULL;
  }
  Node* headOfLoop = loopHead();
  if (loopHead == NULL)  // no loop, no loopHead, directly return head
    return head;
  Node* temp = headOfLoop;
  while (temp -> next != headOfLoop){  // loop exists
    temp = temp -> next;
  }
  temp -> next = NULL;  // remove loop
  return head;  // then return head
}

bool isLoop(){
  if (head == NULL)
    return false;

  map <Node*, bool> visited;
  Node* temp = head;
  while (temp != NULL){
    if (visited[temp] == true)  // Loop exists
      return true;

    visited[temp] = true;
    temp = temp -> next;
  }
  // loop dosen't exists
  return false;
}

void loopStatus(bool a){
  if (a) cout << "\nLoop: True" << endl;
  else cout << "\nLoop: False" << endl;
}

int main(){
  printList(head);
  insert(1);
  insert(3);
  insert(5);
  insert(7);
  insert(9);
  printList(head);
  loopStatus(isLoop());
  makeLoop(3);   // create loop
  loopStatus(isLoop()); 
  Node* temp = removeLoop();  // remove loop
  loopStatus(isLoop());
  printList(head);
  return 0;
}