#include "graph.h"

int main()
{
    graph <char,int> test;
    test.insertnode('A');
    test.insertnode('B');
    test.insertnode('C');
    test.insertnode('D');
    test.insertnode('E');
    test.insertnode('X');
    test.insertedge(1,2,test.nodes[0],test.nodes[1]);
    test.insertedge(1,3,test.nodes[0],test.nodes[2]);
    test.insertedge(0,4,test.nodes[1],test.nodes[2]);
    test.insertedge(1,6,test.nodes[1],test.nodes[3]);
    test.insertedge(1,7,test.nodes[2],test.nodes[3]);
    test.insertedge(0,5,test.nodes[2],test.nodes[4]);
    test.insertedge(1,3,test.nodes[3],test.nodes[4]);
    test.insertedge(1,2,test.nodes[4],test.nodes[5]);
    test.insertedge(0,6,test.nodes[3],test.nodes[5]);
    test.print();
    test.removeedge(0,4,test.nodes[1],test.nodes[2]);
    test.removeedge(1,3,test.nodes[3],test.nodes[4]);
    test.print();
    test.removenode('D');

    test.print();

    return 0;
}
