#include <iostream>
using namespace std;

// Node yapısı
struct Node {
    int data;
    Node* next;
};

// Yeni node oluşturma fonksiyonu
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Listeye sona ekleme fonksiyonu
void append(Node*& head, int value) {
    Node* newNode = createNode(value);

    if (head == nullptr) {
        head = newNode; // Liste boşsa yeni node head olur
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next; // listenin sonuna git
    }
    temp->next = newNode;
}

// Listeyi yazdırma fonksiyonu
void printList(Node* head) {
    Node* temp = head;
    cout << "Liste: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr; // Başlangıçta liste boş

    cout << "5 sayı girin:\n";
    for (int i = 0; i < 5; ++i) {
        int val;
        cin >> val;
        append(head, val);
    }

    printList(head);

    return 0;
}
