class MyLinkedList {
public:
    class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;

    MyLinkedList() { head = tail = NULL; }

    void insertAfter(Node* temp, int val) {
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
    }

    int get(int index) {
        int idx = 0;
        Node* temp = head;
        while (temp != NULL) {
            if (idx == index) {
                return temp->data;
                
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    void addAtHead(int val) {

        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addAtIndex(int index, int val) {
        if (index < 0)
            return;
        if (index == 0) {
            return addAtHead(val);
        }
        int idx = 0;
        Node* temp = head;
        while (temp != NULL) {
            if (idx == index - 1) {
                insertAfter(temp, val);
                return;
            }
            idx++;
            temp = temp->next;
        }
        if (index == idx) {
            return addAtTail(val);
        } else if (index > idx) {
            return;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0) {
            return;
        }
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        if (index == 0) {
            if (temp->next == NULL) {
                head = tail = NULL;
                delete temp;
                return;
            }

            Node* Next = head->next;
            head = Next;
            temp->next = NULL;
            delete temp;
            return;
        }

        int idx = 0;
        while (temp != NULL) {
            if (idx == index - 1) {
                break;
            }
            idx++;
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            return;
        } else {
            if (temp->next->next == NULL) {
                Node* last = tail;
                tail = temp;
                temp->next = NULL;
                delete last;
                return;
            }
            Node* Del = temp->next;
            Node* nextNode = Del->next;
            temp->next = nextNode;
            Del->next = NULL;
            delete Del;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */