//Problem Statement:Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.
//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#

// Returns true if there is a loop in linked list
// else returns false.
    string detectLoop(node *head){

        node *temp = head;
        //An unordered_set is implemented using a hash table
        //where keys are hashed into indices of a hash table
        //so that the insertion is always randomized.
        unordered_set <node*> s;

        while(temp != NULL){
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
            if(s.find(temp) != s.endd())
                return "True";

        // If we are seeing the node for
        // the first time, insert it in hash
            s.insert(temp);
            temp = temp->next;
        }
        return "False";

    }




