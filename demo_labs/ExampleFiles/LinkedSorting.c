#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int num;
    struct node *next;

}  Node, *NodePtr;

int main()
{
    clock_t begin, end;
    double time_spent;
     begin = clock();
    void printList(NodePtr);
    NodePtr AddInPlace(NodePtr, int);
    int n;
    NodePtr top = NULL;
    if(scanf("%d",&n) != 1) n = 0;
    while (n != 0)
    {
        top= AddInPlace(top,n);
        if(scanf("%d",&n) != 1) n = 0;
    }
    printList(top);
        
     
    /* here, do your time-consuming job */
     
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
}//end main

NodePtr AddInPlace(NodePtr top, int n)
{
    NodePtr np, curr, prev, makenode(int);
    np = makenode(n);
    prev = NULL;
    curr = top;
    while(curr !=NULL && n > curr->num)
    {
        prev = curr;
        curr = curr->next;
    }
    if(prev==NULL) //new number must be added to the top
    {
        np -> next = top;
        return top;// the top of the list has changed to the new node
    }
    np->next = curr;
    prev ->next = np;
    return np;
}

NodePtr makenode(int n)
{
    NodePtr np =(NodePtr)malloc(sizeof(Node));
    np->num = n;
    np->next = NULL;
    return np;
}//end of makenode

void printList(NodePtr np)
{
    while (np != NULL)//as long as there is a node
    {
        printf("%d\n",np->num);
        np = np->next;//Go onto the next meme
    }
}