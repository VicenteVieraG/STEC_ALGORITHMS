#ifndef FIBHEAP_H
#define FIBHEAP_H

struct node {
    int key;
    node* parent;
    node* child;
    node* right;
    node* left;
    int degree;
    bool marked;
};

class FibHeap {
    private:
        node* min;
        int n;

    public:
        FibHeap(): min(nullptr), n(0) {}

        void insert(int key);
        node* link(node* y, node* x);
        void consolidate();
        int extracMin();
};

#endif