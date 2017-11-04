#ifndef EDGE_H
#define EDGE_H

template <class G>
class edge
{
    public:
        typedef typename G::Node Node;
        typedef typename G::e E;
        Node* nodes[2];
        E data;
        bool dir;
        edge(bool,E,Node*,Node*);
        virtual ~edge();

    protected:

    private:
};

#endif // EDGE_H
