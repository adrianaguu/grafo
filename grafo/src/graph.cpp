#include "graph.h"

template <class N, class E>
graph<N,E>::graph()
{
    //ctor
}

template <class N, class E>
bool graph<N,E>::insertnode(n x)
{
    Node* _new=new Node(x);
    nodes.push_back(_new);
    return 1;
}
template <class N, class E>
bool graph<N,E>::insertedge(bool _dir, e peso, Node* a, Node* b)
{
    Edge* _new=new Edge(_dir,peso,a,b);
    if (_dir==0)
    {
        a->edges.push_back(_new);
        b->edges.push_back(_new);
    }
    else{
        a->edges.push_back(_new);
    }
    return 1;
}

template <class N, class E>
void graph<N,E>::print()
{
    typename list<Edge*>::iterator it;
    for (unsigned int i=0; i<this->nodes.size(); i++)
    {
        it=nodes[i]->edges.begin();
        cout<<nodes[i]->data<<"->";

        while(it!=nodes[i]->edges.end())
        {
            cout<<(*it)->data<<(*it)->nodes[nodes[i]->data!=(*it)->nodes[1]->data]->data<<",";
            it++;
        }
        cout<<endl;
    }
    cout<< endl<<endl;
}

template <class N, class E>
bool graph<N,E>::removeedge(bool _dir, e peso, Node* a, Node* b)
{
    typename list<Edge*>::iterator it;
    it=a->edges.begin();
    bool res=0;
    while(it!=a->edges.end())
    {
        if(((*it)->nodes[0]==b || (*it)->nodes[1]==b) && (*it)->data==peso && (*it)->dir==_dir)
        {
            a->edges.erase(it);
            res=1;
            break;
        }
        it++;
    }
    if (_dir==0)
    {
        it=b->edges.begin();
        while(it!=b->edges.end())
        {
            if(((*it)->nodes[0]==a || (*it)->nodes[1]==a) && (*it)->data==peso && (*it)->dir==_dir)
            {
                b->edges.erase(it);
                break;
            }
            it++;
        }
    }

    return res;
}

template <class N, class E>
bool graph<N,E>::removenode(n x)
{
    unsigned int pos;
    typename list<Edge*>::iterator it;
    typename list<Edge*>::iterator it2;
    for (pos=0;pos<nodes.size();pos++)
    {
        if(nodes[pos]->data==x)
        {
            break;
        }
    }
    if (pos==nodes.size())
        return 0;
    Node* temp=nodes[pos];
    this->nodes.erase(nodes.begin()+pos);
    for (unsigned int i=0; i<nodes.size(); i++)
    {
        it=nodes[i]->edges.begin();
        while(it!=nodes[i]->edges.end())
        {
            if((*it)->nodes[0]==temp || (*it)->nodes[1]==temp)
            {
                it2=it;
                it--;
                nodes[i]->edges.erase(it2);
            }
            it++;
        }
    }
    delete temp;
    return 1;
}

template <class N, class E>
N* graph<N,E>::dixtra()
{

}

template <class N, class E>
graph<N,E>::~graph()
{

}

template class graph <char,int>;
