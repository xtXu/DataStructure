#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* link;
};

struct Node* head;  // global variable, can be accessed anywhere

void insert(int x) {
  Node* temp = new Node;
  temp->data = x;
  temp->link = head;
  head = temp;
}

void print() {
  Node* temp = head;
  cout << "List is: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->link;
  }
  cout << endl;
}

int main(int, char**) {
  head = NULL;  // empty list
  int n, x;
  cout << "How many numbers ?" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter the number" << endl;
    cin >> x;
    insert(x);
    print();
  }
  return 0;
}

class LinkedList {
  struct Node {
    int data;
    Node* next;
  };

 public:
  void insert(int x);
  void print();

 private:
  Node* head;
};

void LinkedList::insert(int x) {
  Node* temp = new Node;
  temp->data = x;
  temp->next = head;
  head = temp;
}

void LinkedList::print() {
  Node* temp = head;
  cout << "List is: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}