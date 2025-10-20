

// Each node’s next pointer should point to the previous node instead of the next one.




// prev → initially NULL

// curr → points to the head

// next → stores next node temporarily


// Store next: next = curr->next

// Reverse link: curr->next = prev

// Move forward:
// prev = curr
// curr = next


#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;

    }
};

// Function to reverase the Linkist List :

Node* reverseList(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while( curr != NULL){
        next = curr->next ; // store next node
        curr->next = prev ; // reverse the list

        prev = curr; // move prev forward

        curr = next ; // move curr forwra


    }
    return prev ; // new head of the revsered list 
}

// Function to print the linked list :

void printList(Node* head){
    while( head != NULL){
        cout << head->data << "" "";
        head = head->next;

    }
}


int main() {

    Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = new Node(5);


  cout << "Original Linked list :"  ;
  printList(head);

  head = reverseList(head);

  cout << "\nReversed Linked List:";
  printList(head);
  return 0;
}