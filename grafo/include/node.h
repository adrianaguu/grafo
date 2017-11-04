#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <list>
using namespace std;

template <class G>
struct node
{
    public:
        typedef typename G::Edge Edge;
        typedef typename G::n N;
        N data;
        list<Edge*> edges;
        node(N);
        virtual ~node();

    protected:

    private:
};

#endif // NODE_H
