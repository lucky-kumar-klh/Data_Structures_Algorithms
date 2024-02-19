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

Node* root = nullptr;

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

    return root;
}

void levelOrderTraversal(Node* root) {
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            // previous level complete traversal done
            cout << endl;
            // after checking NULL, check if queue is still empty ?
            // if no, then push NULL, to get next line
            if (!q.empty()) {
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";

            if (temp -> left != NULL) 
                q.push(temp -> left);

            if (temp -> right != NULL) 
                q.push(temp -> right);
        }
    }
}

void inOrderTraversal(Node* root) {  // L N R

    // base case
    if (root == nullptr) 
        return;

    // L : Go Left
    inOrderTraversal(root -> left);
    // N : Print Node
    cout << root -> data << " ";
    // R : Go Right
    inOrderTraversal(root -> right);
}

void preOderTraversal(Node* root) {  // N L R
    if (root == nullptr) 
        return;

    // N : Print Node
    cout << root -> data << " ";
    // L : Go Left
    preOderTraversal(root -> left);
    // R : Go Right
    preOderTraversal(root -> right);
}

void postOderTraversal(Node* root) {  // L R N
    if (root == nullptr) 
        return;

    // L : Go Left
    postOderTraversal(root -> left);
    // R : Go Right
    postOderTraversal(root -> right);
    // N : Print Node
    cout << root -> data << " ";
}

int main(){

    root = createTree(root);

    levelOrderTraversal(root);
    cout << endl;

    inOrderTraversal(root);
    cout << endl;

    preOderTraversal(root);
    cout << endl;

    postOderTraversal(root);
    cout << endl;

    return 0;
}