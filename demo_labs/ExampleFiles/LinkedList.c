#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node* next;
}Node, *NodePtr;

int main()
{
    void printList(NodePtr);
    NodePtr makeNode(int);
    int n;
    NodePtr top,np,last;

    top = NULL;

    if(scanf("%d",&n) !=1)
    {
        n = 0;
        

    }
while(n != 0)
    {
        np = makeNode(n); //create new node.
        if (top == NULL) 
    {
        top = np; //setst top as the first node
    }
    else last -> next = np; //set last -> next forother nodes
    last = np; //update last to new node.
    if(scanf("%d",&n) !=1) n = 0;
    }
    printList(top);
}//end of main

NodePtr makeNode(int n)
    {
        NodePtr np =(NodePtr)malloc(sizeof(Node));
        np -> num = n;
        np -> next = NULL;
        return np;
    }
void printList(NodePtr np)
{
    while(np != NULL)//as long as there's a node
    {
        printf("%d\n",np -> num);
        np = np->next; //go on to the next node
    }
}//end of printList