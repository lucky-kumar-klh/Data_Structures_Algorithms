#include <bits/stdc++.h>
using namespace std;

class Node {


    public:
        int prod_id;
        string name;
        int quantity;

        Node* next;
        Node* prev;
    
    Node(int prod_id, string name, int quantity) {
        this -> prod_id = prod_id;
        this -> name = prod_id;
        this -> quantity = quantity;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};
Node* head = nullptr;
Node* tail = nullptr;

int choice;

void user_input(){ 
    cout << "1. Add\n2. Delete\n3. Display\n4. Exit\nChoose Any: ";
    cin >> choice;

} 

Node* search_product() {
    Node* temp = head;
    if (temp == nullptr)
        return nullptr;

    int id;
    cout << "Enter ID: "; cin >> id;

    if (temp -> next == nullptr && temp -> prod_id == id) {
        return temp;
    }

    while (temp -> next != nullptr) {

        if (temp -> prod_id == id) 
            return temp;
        
        temp = temp -> next;
    }

    cout << "Not Found" << endl;
}

void add_prod() {    // Insert At last
    string name;
    int quantity, prod_id;
    cout << "Enter Product ID: "; cin >> prod_id;
    cout << "Name of the Product: "; cin >> name;
    cout << "Quantity: "; cin >> quantity;

    Node* newNode = new Node(prod_id, name, quantity);

    if (head == nullptr){
        head = newNode;
        tail = newNode;
    }
    else {   
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

void delete_prod() {    // Search In last

    if (search_product() == nullptr){
        cout << "Empty Product List" << endl;
        return;
    }
    
    Node* temp = search_product();

    if (temp -> next == nullptr and temp -> prev == nullptr) {  // 1st Node
        head = nullptr;
        tail = nullptr;
        cout << "Deleted Product with ID \'" << temp -> prod_id << "\' Successfully !" << endl;
        delete temp;
        return;
    } 
    else {
        Node* del = temp -> prev;
        del -> next = temp -> next;
        temp -> next -> prev = del;
        cout << "Deleted Product with ID \'" << temp -> prod_id << "\' Successfully !" << endl;
        delete temp;
        return;
    }
}

void display_prod() {    // Traverse to display
    if (search_product() == nullptr){
        cout << "Empty Product List" << endl;
        return;
    }
    Node* temp = search_product();
    cout << "Product ID: " << temp -> prod_id << endl;
    cout << "Name: " << temp -> name << endl;
    cout << "Quantity: " << temp -> quantity << endl;

}

int main(){
  
    user_input();
    while (1) {
        switch (choice) {
            case 1:
                add_prod();
                break;
            case 2:
                delete_prod();
                break;
            case 3:
                display_prod();
                break;
            case 4:
                cout << "Thank You for using my Program" << endl;
                exit(1);
            default:
                cout << "Invalid Input\nPlease Try Agian !!" << endl; 
        }
        user_input();
    }

    return 0;
}
