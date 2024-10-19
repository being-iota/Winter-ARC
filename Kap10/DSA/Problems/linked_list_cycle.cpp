#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }
        return false;
    }
};

int main() {
    // Create nodes
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);

    // Create a linked list 1 -> 2 -> 3 -> 4
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Uncomment the next line to create a cycle: 4 -> 2
    // node4->next = node2;

    Solution solution;
    bool result = solution.hasCycle(node1);

    std::cout << "Has cycle: " << (result ? "Yes" : "No") << std::endl;

    // Clean up memory (note: this won't handle cycles properly)
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
