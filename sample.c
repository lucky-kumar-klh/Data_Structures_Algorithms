#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* ending_node = NULL;

void create_list() {

    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to node
    new_node -> value = data;

    // Assign null to the last node
    new_node -> next = NULL;

    head = new_node;
    ending_node = new_node;

}

void insert_at_begin() {

    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to node
    new_node -> value = data;

    // Assign null to the last node
    new_node -> next = NULL;

    //     [ d | n ] -> [ d | n ] -> [ d | n ] -> [ d | n ] -> NULL
    //      new_node 
    //       Head               

    if (head == NULL)

        head = new_node;
    
    else {

        new_node -> next = head;
        head = new_node;
    }

}

void insert_at_last(){ 

    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to node
    new_node -> value = data;

    // Assign null to the last node
    new_node -> next = NULL;

    // if list is empty
    
    //  [ d | n ] -> NULL      [ d | n ] -> NULL
    //     Head
    //  ending_node  ---------->  new_node


    if (head == NULL) {
        head = new_node;
        ending_node = new_node;
    }

    // if there is an existing list already
    //     [ d | n ] -> [ d | n ] -> [ d | n ] -> NULL
    //       Head
    //                               ending_node
    else {

        ending_node -> next = new_node;

        ending_node = new_node;

    }
}

int main(){

    create_list();  // head : Create only single Node

    insert_at_last();  // Join new Node at last always

    insert_at_begin();  // Join new Node from starting always

    return 0;
}