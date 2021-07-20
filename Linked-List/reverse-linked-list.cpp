//ProblemStatement: Reverse a linked list(iterative approach and recursive approach)

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


    void reverse1(){ //iterative approach
        node *prev = NULL;
        node *curr = head;
        node *nxt = NULL;

        while(curr != NULL){
            nxt = curr->getNext();
            curr->setNext(prev);
            prev = curr;
            curr = nxt;

        }
        head = prev;
    }


    void rev(){ //recursive approach
        head = reverse2(head); //calling recursive function

    }

    node* reverse2(node *head){

        if(head == NULL || head->getNext() == NULL){
            return head;
        }

        node *rest = reverse2(head->getNext());
        head->getNext()->setNext(head);
        head->setNext(NULL);
        return rest;
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
    l1.displayNode();
    l1.reverse1(); //iterative approach
    l1.displayNode();
    l1.rev(); //recursive approach
    l1.displayNode();
    return 0;
}

