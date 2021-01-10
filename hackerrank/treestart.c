#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int data)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));

    node->data=data;

    node->left=NULL;
    node->right=NULL;

    return node;
};

int main()
{
    struct node *root=newnode(1);

    root->left=newnode(2);
    root->left=newnode(2);

    root->left->left=newnode(4);


    while(root->left!=NULL && root->right!=NULL){
        printf("%d\n",root->data);
    }

    return 0;
}
