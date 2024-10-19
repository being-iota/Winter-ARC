#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

Node* sorList(Node* head) {
    std::vector<int> nums;

    Node* temp = head;

    while(temp != NULL) {
        nums.push_back(temp->data);
        temp = temp->next;
    }

    std::sort(nums.begin(), nums.end());

    temp = head;

    for(int i = 0; i < nums.size(); i++) {
        temp->data = nums[i];
        temp = temp->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Helper function to create a new node
Node* newNode(int data) {
    Node* node = new Node(data);
    return node;
}

int main() {
    Node* head = newNode(3);
    head->next = newNode(1);
    head->next->next = newNode(2);

    std::cout << "Original list: ";
    printList(head);

    head = sorList(head);

    std::cout << "Sorted list: ";
    printList(head);

    return 0;
}