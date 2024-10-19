#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

ListNode* removeDuplicates(ListNode* head) {
    ListNode* current = head;
    while (current && current->next) {
        if (current->val == current->next->val) {
            ListNode* nextNext = current->next->next;
            delete current->next;
            current->next = nextNext;
        } else {
            current = current->next;
        }
    }
    return head;
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* current = head;
    while (current) {
        ListNode* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}

pair<ListNode*, ListNode*> separateOddEven(ListNode* head) {
    ListNode* oddDummy = new ListNode(0);
    ListNode* evenDummy = new ListNode(0);
    ListNode* oddTail = oddDummy;
    ListNode* evenTail = evenDummy;
    ListNode* current = head;
    while (current) {
        if (current->val % 2 == 0) {
            evenTail->next = current;
            evenTail = evenTail->next;
        } else {
            oddTail->next = current;
            oddTail = oddTail->next;
        }
        current = current->next;
    }
    oddTail->next = NULL;
    evenTail->next = NULL;
    return {oddDummy->next, evenDummy->next};
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
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
    l2->next->next->next = new ListNode(6);

    cout << "Merged List: ";
    ListNode* mergedList = mergeTwoLists(l1, l2);
    printList(mergedList);

    cout << "List after removing duplicates: ";
    ListNode* noDupList = removeDuplicates(mergedList);
    printList(noDupList);

    cout << "Reversed List: ";
    ListNode* reversedList = reverseList(noDupList);
    printList(reversedList);

    pair<ListNode*, ListNode*> oddEvenLists = separateOddEven(reversedList);
    ListNode* oddList = oddEvenLists.first;
    ListNode* evenList = oddEvenLists.second;
    cout << "Odd List: ";
    printList(oddList);
    cout << "Even List: ";
    printList(evenList);

    return 0;
}