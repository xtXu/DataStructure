/* Doubly linked list implementation */
#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;
};

Node* head;

void insertHead(int n) {
  Node* temp = new Node;
  temp->data = n;
  temp->prev = NULL;
  temp->next = NULL;

  // if list is empty
  if (head == NULL) {
    head = temp;
    return;
  }

  temp->next = head;
  head->prev = temp;
  head = temp;
}

void insertTail(int n) {
  Node* new_node = new Node;
  new_node->data = n;
  new_node->next = NULL;
  new_node->prev = NULL;

  // if list is empty
  if (head == NULL) {
    head = new_node;
    return;
  }
  Node* temp = head;
  // traverse to the last node
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->prev = temp;
}

void print() {
  cout << "Forward: ";
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void printReverse() {
  cout << "Reverse: ";
  // if empty, return
  if (head == NULL) {
    cout << endl;
    return;
  }
  Node* temp = head;
  // traverse to the last node
  while (temp->next != NULL) {
    temp = temp->next;
  }
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << endl;
}

int main(int, char**) {
  head = NULL;

  print(); printReverse();
  insertHead(2); print(); printReverse();
  insertHead(4); print(); printReverse();
  insertHead(6); print(); printReverse();
  insertTail(3); print(); printReverse();
  insertTail(5); print(); printReverse();
  insertTail(7); print(); printReverse();

  return 0;
}