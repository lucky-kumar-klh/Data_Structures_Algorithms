#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data) {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

Node* createTree(Node* root) {

    int data;
    cout << "Enter data: ";
    cin >> data;

    root = new Node(data);

    if (data == -1)
        return nullptr;

    cout << "Enter left of " << data << ": ";
    root -> left = createTree(root->left);
    
    cout << "Enter right of " << data << "; ";
    root -> right = createTree(root->right);
}

int main(){

    Node* root = NULL;
    root = createTree(root);
    return 0;
}