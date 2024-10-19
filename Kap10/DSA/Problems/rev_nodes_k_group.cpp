#include<bits/stdc++.h>
using namespace std;

int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

Node* revK(Node* head, int k) {
    int len = getLength(head);
    if(len < k) {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = curr -> next;

    int pos = 0;

    while(pos < k) {
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        pos++;
    }

    Node* recKaAns = NULL;
    if(nextNode!=NULL) {
        recKaAns = revK(nextNode, k) 
        head -> next = recKaAns;
    }
    return prev;
}

int main() {
    
    return 0;
}