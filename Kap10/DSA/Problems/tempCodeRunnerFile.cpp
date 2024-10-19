#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* deldup(Node* head) {
    if(head == NULL) {
        return head;
    }

    if(head->next == NULL) {
        return head;
    }

    Node* temp = head;

    while(temp != NULL) {
        if(temp->next != NULL && temp->data == temp->next->data) {
            Node* nextNode = temp->next;
            temp->next = nextNode->next;
            nextNode->next = NULL;
            delete nextNode;
        } else {
            temp = temp->next;
        }
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a sorted linked list with duplicates
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);

    cout << "Original list: ";
    printList(head);

    head = deldup(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Free the allocated memory
    while(head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}