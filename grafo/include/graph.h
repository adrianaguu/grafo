#ifndef GRAPH_H
#define GRAPH_H
#include "node.h"
#include "edge.h"
#include "vector"

template <class N, class E>
class graph
{
    public:
        typedef graph<N,E> Self;
        typedef node<Self> Node;
        typedef edge<Self> Edge;
        typedef N n;
        typedef E e;
        graph();
        bool insertnode (n x);
        bool insertedge (bool,e,Node*,Node*);
        bool removeedge (bool,e,Node*,Node*);
        bool removenode (n x);
        n* dixtra ();
        void print();
        virtual ~graph();
        vector <Node*> nodes;

    protected:

    private:
};

#endif // GRAPH_H
