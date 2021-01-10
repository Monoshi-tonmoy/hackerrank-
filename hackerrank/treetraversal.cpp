#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

void printpostorder(struct Node *node)
{
    if(node==NULL){
        return;
    }
    printpostorder(node->left);
    printpostorder(node->right);

    cout<<node->data<<endl;
}

void printinorder(struct Node *node){
    if(node==NULL){
        return ;
    }
    printinorder(node->left);

    cout<<node->data<<endl;

    printinorder(node->right);
}

void printpreorder(struct Node* node)
{
    if (node == NULL)
        return;

    /* first print data of node */
    cout << node->data << " ";

    /* then recur on left sutree */
    printpreorder(node->left);

    /* now recur on right subtree */
    printpreorder(node->right);
}

int main()
{
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"Preorder traverse"<<endl;
    printpreorder(root);
    cout<<endl;

    cout<<"Inorder traverse"<<endl;
    printinorder(root);
    cout<<endl;

    cout<<"Postorder traverse"<<endl;
    printpostorder(root);

    return 0;



}
