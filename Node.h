#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int data;
    Node* link;
public:
    Node(int data);
    Node* getLink();
    void setLink(Node* link);
};

#endif