/* Linked list implementation */
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

// insert at end
void push_back(int x) {
  Node* temp = new Node;
  temp->data = x;
  temp->link = NULL;
  if (head == NULL) {
    head = temp;
    return;
  }
  Node* last_node = head;
  while (last_node->link != NULL) {
    last_node = last_node->link;
  }
  last_node->link = temp;
}

// delete at nth
void deleteAtN(int n) {
  Node* n_prev = head;
  if (n == 1) {
    head = n_prev->link;
    delete n_prev;
    return;
  }
  for (int i = 0; i < n - 2; i++) {
    n_prev = n_prev->link;
  }
  Node* node_n = n_prev->link;
  n_prev->link = node_n->link;
  delete node_n;
}

// reverse iteratively
void reverse() {
  Node *prev, *current, *next;
  prev = next = NULL;
  current = head;
  while (current != NULL) {
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

// reverse recursively
void reverseRecursion(Node* p) {
  if (p->link == NULL) {
    head = p;
    return;
  }
  reverseRecursion(p->link);
  Node* next = p->link;
  next->link = p;
  p->link = NULL;
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

// print using recursion
void printRecursion(Node* p) {
  if (p == NULL) {
    cout << endl;
    return;
  }
  cout << p->data << " ";
  printRecursion(p->link);
}

// print in reverse order using recursion
void printReverse(Node* p) {
  if (p == NULL) return;
  printReverse(p->link);
  cout << p->data << " ";
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
  // insert(2, 1);
  // insert(3, 2);
  // insert(4, 1);
  // insert(5, 2);
  // print();

  /* delete nth test */
  // push_back(2);
  // push_back(4);
  // push_back(6);
  // push_back(5);
  // cout << "before deleting: " << endl;
  // print();
  // cout << "enter a nth position to delete: ";
  // int n;
  // cin >> n;
  // deleteAtN(n);
  // cout << "after deleting: " << endl;
  // print();

  /* reverse test */
  // push_back(2);
  // push_back(4);
  // push_back(6);
  // push_back(5);
  // cout << "before reverse : " << endl;
  // print();
  // reverse();
  // cout << "after reverse : " << endl;
  // print();

  /* print using recursion test */
  // push_back(2);
  // push_back(4);
  // push_back(6);
  // push_back(5);
  // printRecursion(head);
  // printReverse(head);

  /* reverse using recursion test */
  push_back(2);
  push_back(4);
  push_back(6);
  push_back(5);
  cout << "before reverse : " << endl;
  print();
  reverseRecursion(head);
  cout << "after reverse : " << endl;
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