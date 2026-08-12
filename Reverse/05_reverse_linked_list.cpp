#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node;
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}
