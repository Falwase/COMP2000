
#include "LinkedList.h"

LinkedList::LinkedList(int* array, int len) {

    Node* temp;

    temp = new Node(array[0]);
    head = temp;

    for(int i = 1; i < len; i++) {

        temp->setLink(new Node(array[i]));
        temp = temp->getLink();
    }
}

LinkedList::~LinkedList() {
    
    Node* temp;

    while (head != nullptr) {
       temp = head;
       head = head->getLink();
       delete(temp);
    }
}

void LinkedList::insertPosition(int pos, int newNum) {

    Node* temp = head;
    Node* temp0 = new Node(newNum);

    if (pos <= 1) {
        temp0->setLink(head);
        head = temp0;
    }

    for (int i = 1; i < pos-1; i++) {
        
        if (temp->getLink() == nullptr) {
            break;
        }

        temp = temp->getLink();
    }

    temp0->setLink(temp->getLink());
    temp->setLink(temp0);

}

bool LinkedList::deletePosition(int pos) {

    Node* temp = head;

    for(int i = 1; i < pos-1; i++) {

        if (temp == nullptr) {
            return false;
        }

        temp = temp->getLink();
    }

    if (temp = head) {
        head = temp->getLink();
        delete(temp);
        return true;
    }

    Node* temp0 = temp->getLink();
    temp->setLink(temp0->getLink());
    delete(temp0);
    return true;
}

int LinkedList::get(int pos) {

}

int LinkedList::search(int target) {

}

void LinkedList::printList() {

}
