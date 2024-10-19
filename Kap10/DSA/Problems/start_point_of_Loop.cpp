class Solution{
public:
    Node* detectCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast!=NULL) {
            fast = fast -> next;
            if(fast!=NULL) {
                fast = fast -> next;
                slow = slow -> next;
            }

            if(slow==fast) break;
        }

        if(fast == NULL) {
            return fast;
        }

        slow = head;
        while(fast != slow) {
            slow = slow -> next;
            fast = fast -> next;
        }   
        return slow;
    }
}