#include <iostream>

using namespace std;

struct Node {
    public:
        int value;
        Node *next;

        Node(int value) {
            this->value = value;
            this->next = NULL;
        }
};

struct LinkedList {
    public:
        Node *hed;
        Node *tal;

        LinkedList() {
            this->hed = NULL;
            this->tal = NULL;
        }

        void insertNode(int value) {
            Node *node = new Node(value);
            if (this->hed == NULL) {
                this->hed = node;
                this->tal = node;
            } else {
                this->tal->next = node;
                this->tal = node;
            }
        }

        void deleteNode(int value) {
            Node *current = this->hed;
            Node *previous = NULL;
            while (current != NULL) {
                if (current->value == value) {
                    if (previous == NULL) {
                        this->hed = current->next;
                    } else {
                        previous->next = current->next;
                    }
                }
                previous = current;
                current = current->next;
            }
        }

        void display() {
            Node *node = this->hed;
            while (node != NULL) {
                cout << node->value << " ";
                node = node->next;
            }
            cout << endl;
        }
};

int main() {
    LinkedList list = LinkedList();
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);
    list.deleteNode(4);
    list.display();

    return 0;
}