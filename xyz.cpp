#include <iostream>
#include <vector>
using namespace std;

// Create a node class
class Node {
public:
  int data;
  Node *next;
};

void insert(int first_data, vector<Node *> &v, int size) {
  if (v[first_data % size] == nullptr) {
    v[first_data % size] = new Node();
    v[first_data % size]->data = first_data;
    v[first_data % size]->next = nullptr;
  } else {
    Node *temp = v[first_data % size];
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = new Node();
    temp->next->data = first_data;
    temp->next->next = nullptr;
  }
}

int main() {

  int size = 10;

  vector<Node *> v(size, NULL);

  vector<int> input = {19, 29, 34, 41, 54, 65, 72, 85, 97, 100};
  for (auto data : input) {
    insert(data, v, size);
  }

  // printing
  for (auto itr : v) {
    Node *temp = itr;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }

  return 0;
}
