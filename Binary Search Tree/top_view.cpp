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
    
    cout << "Enter right of " << data << "; ";
    root -> right = createTree();

    return root;
}

void find(Node* root, int pos, int &l, int &r) {
    if (root == nullptr)
        return;
    
    l = min(l, pos);
    r = max(r, pos);
    
    find(root->left, pos-1, l, r);
    find(root->right, pos+1, l, r);
}

void top_view_recursion(Node* root, int pos, vector<int> &ans, vector<int> &level, int l) {
    if (!root)
        return;

    if (level[pos] > l) {
        ans[pos] = root -> data;
        level[pos] = l;
    }
    top_view_recursion(root->left, pos-1, ans, level, l+1);
    top_view_recursion(root->right, pos+1, ans, level, l+1);
}

void using_recursion() {
    int l = 0, r = 0;
    // update l & r value
    find(root, 0, l, r);
    
    vector<int> ans(r-l+1);
    vector<int> level(r-l+1, INT_MAX);

    top_view_recursion(root, -1*l, ans, level, 0);

    return ans;
}
vector<int> topView(Node *root) {
    int l = 0, r = 0;
    // update l & r value
    find(root, 0, l, r);
    
    vector<int> ans(r-l+1);
    vector<bool> filled(r-l+1, 0);
    
    queue <Node*> q;
    queue <int> index;
    
    q.push(root);
    index.push(-1*l);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();
        if (!filled[pos]) {
            filled[pos] = 1;
            ans[pos] = temp->data;
        }
        
        if (temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        if (temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }
    return ans;
}

int main(){
  
    Node* root = createTree();
    
    return 0;
}