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

Node* createTree() {

    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1)
        return nullptr;

    Node* root = new Node(data);

    cout << "Enter left of " << data << ": ";
    root -> left = createTree();
    
    cout << "Enter right of " << data << ": ";
    root -> right = createTree();

    return root;
}

int diameterOfTree(Node* root) {

    if (root == nullptr)
        return 0;

    int left_max = 
}

int main() {

    Node* root = createTree();

    return 0;
}