#include "graph.h"

template <class G>
edge<G>::edge(bool _dir,E _d,Node* _f,Node* _l)
{
    this->dir=_dir;
    this->data=_d;
    this->nodes[0]=_f;
    this->nodes[1]=_l;
}

template <class G>
edge<G>::~edge()
{

}

template class edge<graph<char,int> >;
