//Problem Statement: Reverse a Linked List in groups of given size

#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    node *next;
public:
    node(int val){
        data = val;
        next = NULL;
    }

    int getData(){
        return data;
    }

    node* getNext(){
        return next;
    }

    void setNext(node* n){
        next = n;
    }

};

class linkedlist{
    node *head, *temp;

public:
    linkedlist(){
    head = NULL;
    }

    void insertEnd(){
        int val;
        cout<<"Enter the integer to insert at end: ";
        cin>>val;
        node *nn = new node(val);
        if(head == NULL){
            head = nn;
            temp = nn;
        }
        else{
            temp->setNext(nn);
            temp = nn;
        }
    }

    void reverseInGroups(int k){
        head = revers(head, k);

    }

    /* Reverses the linked list in groups
of size k and returns the pointer
to the new head node. */
    node* revers(node *head, int k){

        // base case
        if(head == NULL)
            return NULL;

        node *prev = NULL;
        node *curr = head;
        node *nxt = NULL;

        int cnt = 0;

        /*reverse first k nodes of the linked list */
        while(curr != NULL && cnt<k){
            nxt = curr->getNext();
            curr->setNext(prev);
            prev = curr;
            curr = nxt;
            cnt++;
        }

        /* next(and curr) is now a pointer to (k+1)th node
    Recursively call for the list starting from curr.
    And make rest of the list as next of first node (head)*/
        if(nxt != NULL){
            head->setNext(revers(nxt, k));
        }

        /* prev is new head of the input list */
        return prev;


    }

    void displayNode(){
        node *n;
        n = head;
        while(n != NULL){
            cout<<n->getData()<<" ";
            n = n->getNext();
        }
        cout<<endl;
    }

};


int main(){
    linkedlist l1;
    l1.insertEnd();
    l1.insertEnd();
    l1.insertEnd();
    l1.insertEnd();
    l1.insertEnd();
    l1.displayNode();
    l1.reverseInGroups(2);
    l1.displayNode();
    return 0;
}


