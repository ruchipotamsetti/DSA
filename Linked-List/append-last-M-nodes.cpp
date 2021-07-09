//Problem Statement: Append the last M nodes to the beginning of the given linked list

// Examples: 
// Input: List = 4 -> 5 -> 6 -> 1 -> 2 -> 3 -> NULL, M = 3 
// Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
// Input: List = 8 -> 7 -> 0 -> 4 -> 1 -> NULL, M = 2 
// Output: 4 -> 1 -> 8 -> 7 -> 0 -> NULL 

#include <bits/stdc++.h>
using namespace std;
 
// Class for a node of
// the linked list
struct Node
{
 
    // Data and the pointer
    // to the next node
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
// Function to print the linked list
void printList(Node* node)
{
  while (node != NULL)
  {
    cout << (node->data) << " -> ";
    node = node->next;
  }
  cout << "NULL";
}

Node* updateList(Node *head, int m){
    Node *temp = head;
    int n=1;
    while(temp->next != NULL){
        temp = temp->next;
        n++;
    }
    
    temp = head;
    int index = 1;
    while(index != (n-m)){  //reach the node to break the LL
    	temp = temp ->next;
    	index++;
    }
    
    Node *temp2 = temp->next;
    Node *temp3 = temp->next;
    temp->next = NULL;
    
    for(int i =0; i<(m-1); i++){ //reach the last node of remaining LL
    	temp2 = temp2->next;
    }
    
    temp2->next = head;
    head = temp3;
    return head;
}



int main()
{
 
  // Create the list
  Node* head = new Node(8);
  head->next = new Node(7);
  head->next->next = new Node(0);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(1);
  //head->next->next->next->next->next = new Node(3);
  int m = 2;
  head = updateList(head, m);
  printList(head);
  return 0;
}
