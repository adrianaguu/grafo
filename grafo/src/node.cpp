#include "graph.h"

template <class G>
node<G>::node(N _d)
{
    this->data=_d;
}

template <class G>
node<G>::~node()
{

}

template class node<graph<char,int> >;
