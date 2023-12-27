#include <stdio.h>
#include <stdlib.h>
int choice;
struct Node{

  int data;
  struct Node* next;
};
struct Node* head = NULL;
//struct Node* prev = NULL;

void insert(){
  int c;
  struct Node* prev;
  do{
    // create new node
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d", &new -> data);
    new -> next = NULL;
    // link
    if (head == NULL){
      head = new;
      prev = head;
    } 
    else {
      prev -> next = new;
      prev = prev -> next;
    }
    printf("Press 1 to Insert, 0 to Exit : ");
    scanf("%d", &c);
  } while (c);
   
}

void delete(){
  if (head == NULL){
    printf("Empty List\n");
  }
  else {  // delete at last position
    struct Node* Last = head;
    struct Node* prev = NULL;
    while (Last -> next != NULL){
      prev = Last;
      Last = Last -> next;
    }
    prev -> next = Last -> next;
    Last -> next = NULL;
    free(Last);
  }
    printf("\n");
}

void dislay(){
  if (head == NULL){
    printf("Empty List\n");
  }
  else {
    struct Node* temp = head;
    printf("\nList : ");
    while (temp != NULL){
      printf("%d ", temp -> data);
      temp = temp -> next;
    }
    printf("\n");
  }
}

void accept(){
  printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter Choice : ");
  scanf("%d", &choice);
}

int main(){
    
  accept();

  while (1){
    switch (choice){
    case 1:
      insert();
      break;
    
    case 2:
      delete();
      break;

    case 3:
      dislay();
      break;

    case 4:
      return 0;

    default:
      printf("\nInvalid Choice! Try Again\n");
      break;
    }

    accept();
  }

}