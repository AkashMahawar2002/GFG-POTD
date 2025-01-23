class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        //  Seeing the constraints, we have to solve this using O(1) space
        // This rules out the use of map
        
        // We will try a different approach
        
        // Forget about the random pointers of now
        // For now just create a clone list and put it in between the nodes of the original list
        
        // For eg, say original list is O, and cloned is C
        
        // Suppose the data is represented by a, b, c....
        
        // Then try to do this :- 
        
        // O(a) -> C(a) -> O(b) -> C(b) -> O(c) -> C(c) -> ..... -> NULL
        
        // Yes, nodes can have same values but just forget that now, focus on the concept 
        // that each original node is followed by its clone
        
        
        Node * temp = head;
        
        while(temp){
            Node* clonedNode = new Node(temp->data);
            Node* rest = temp->next;
            temp->next = clonedNode;
            clonedNode->next = rest;
            temp = temp->next->next;
        }
        
        // Now we have this list
        // O(a) -> C(a) -> O(b) -> C(b) -> O(c) -> C(c) -> ..... -> NULL
        
        // Now we traverse the list
        // The next for each cloned node will be equal to cloned->next->next
        
        // And the random for each original node can help us find the random of cloned
        // as we have copied in such a way that
        // (random of current node)->next = (random of cloned)
        
        
        // Let's just take care of the random for now
        
        temp = head;
        
        while(temp){
            // To avoid segmentation fault
            if (temp->random) {
                temp->next->random = temp->random->next;
            } else {
                temp->next->random = nullptr;
            }

            temp=temp->next->next;
        }
        
        // Now we have taken care of random also
        // But our list is still of the following form : -
        // O(a) -> C(a) -> O(b) -> C(b) -> O(c) -> C(c) -> ..... -> NULL
        
        // We need to seperate our lists
        
        Node* newHead = new Node(-1); //dummy node to attach our head to
        
        temp = head; //to traverse the nodes of original list
        
        Node * temp2 = newHead; //to travserse the nodes of our cloned list
        
        while(temp){
            
            temp2->next = temp->next; //attach the cloned node to the new list
            temp2 = temp2->next; //move temp2 to the new list
            
            temp->next = temp->next->next; //attach the correct node to the node of the orignal list
            
            temp2->next = nullptr; //break connection with the orignal list
            
            temp = temp->next;
        }
        
        
        return newHead->next;
        
    }
};