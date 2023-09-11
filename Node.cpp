
#include "Node.h"

Node::Node(int data) {
    this->data = data;
    link = nullptr;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* link) {
    this->link = link;
    return;
}
