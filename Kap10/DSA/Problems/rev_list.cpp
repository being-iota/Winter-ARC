#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    // Default constructor
    ListNode() {
        this->val = 0;
        this->next = nullptr;
    }

    // Constructor with value
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }

    // Constructor with value and next node
    ListNode(int val, ListNode* next) {
        this->val = val;
        this->next = next;
    }
};

ListNode* merge2list(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode*  tail = &dummy;

    while(l1 && l2) {
        if(l1->val < l2->val) {
            tail->next = l1;
            l1 = l1 -> next;
        }
        else {
            tail->next = l2;
            l2 = l2 -> next;
        }

        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

ListNode* remoD(ListNode* head) {
    
}

void printL(ListNode* head) {
    while(head) {
        cout << head->val << " ";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    cout << "Merge Lists: ";
    ListNode* mergeList = merge2list(l1, l2);
    printL(mergeList);

    cout << "List after Removing Duplicates: ";
    ListNode* remoD = removeDup(mergeList);
    printL(remoD);

    cout << "Reverse List: ";
    ListNode* rev = revL(remoD);
    printL(rev);

    pair<ListNode*, ListNode*> oddEvenList = seperateOddEven(remoD);
    ListNode* oddList = oddEvenList.first;
    ListNode* evenList = oddEvenList.second;
    cout << "Odd List: ";
    printL(oddList);

    cout << "Even List: ";
    printL(evenList);

    return 0;
}