#include <fibHeap.h>

int FibHeap::getMin() const { return this->min->key; }

void FibHeap::insert(int key){
    // Create a new Node
    node* newNode = new node;
    newNode->key = key;
    newNode->right = newNode;
    newNode->left = newNode;

    if(this->min == nullptr){
        this->min = newNode;
    }else{
        // Add the new Node to the root list
        newNode->left = this->min;
        newNode->right = this->min->right;
        this->min->right = newNode;
        if(newNode->right != nullptr) newNode->right->left = newNode;

        // Update the new min value if needed
        if(newNode->key < this->min->key) this->min = newNode;
    }

    this->n++;

    return;
}