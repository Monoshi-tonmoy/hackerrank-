#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void MoveNode(Node** destRef,Node** sourceRef);

Node* SortedMerge(Node *a,Node *b)
{
    Node dummy;

    Node* tail=&dummy;

    dummy.next=NULL;

    while(1)
    {
        if(a==NULL){
            tail->next=b;
            break;
        }
        else if(b==NULL){
            tail->next=a;
            break;
        }
        if(a->data<=b->data)
            MoveNode(&(tail->next),&a);
        else
            ModeNode(&(tail->next),&b);

        tail=tail->next;
    }
    return (dummy.next);

}
