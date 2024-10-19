void removeLoop(Node* head) {
    slow = head;

    while(fast!=slow) {
        fast = fast -> next;
        slow = slow -> next;
    }

    Node* startPoint = slow;
    Node* temp = fast;
    while(temp->next!=startPoint) {
        temp = temp->next;
    }

    temp->next = NULL;  
}