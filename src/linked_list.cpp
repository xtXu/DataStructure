#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* link;
};

/* use head reference as param */
// void insert(Node** head, int x) {
//   Node* temp = new Node;
//   temp->data = x;
//   temp->link = *head;
//   *head = temp;
// }

// void print(Node* head) {
//   Node* temp = head;
//   cout << "List is: ";
//   while (temp != NULL) {
//     cout << temp->data << " ";
//     temp = temp->link;
//   }
//   cout << endl;
// }

Node* head;

void insertBeginning(int x) {
  Node* temp = new Node;
  temp->data = x;
  temp->link = head;
  head = temp;
}

// n starts from 1
void insert(int x, int n) {
  Node* temp = new Node;
  temp->data = x;
  temp->link = NULL;
  if (n == 1) {  // if insert at beginning
    temp->link = head;
    head = temp;
    return;
  }
  Node* n_prev = head;
  for (int i = 0; i < n - 2; i++) {
    n_prev = n_prev->link;
  }  // the node before the inserting position
  temp->link = n_prev->link;
  n_prev->link = temp;
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
  // Node* head = NULL;  // empty list
  head = NULL;

  /* inserting beginning test */
  // int n, x;
  // cout << "How many numbers ?" << endl;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   cout << "Enter the number" << endl;
  //   cin >> x;
  //   insertBeginning(x);
  //   print();
  // }

  /* inserting nth test */
  insert(2, 1);
  insert(3, 2);
  insert(4, 1);
  insert(5, 2);
  print();
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