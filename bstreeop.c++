#include<stdio.h>
#include<malloc.h>
struct nodetype
{
    int info;
    struct nodetype *lchild;
    struct nodetype *rchild;
}*root,*dnode,*pardnode;
int k=0,m=0;
void btreeins(int);
void btsrch(struct nodetype *,int);
void display(struct nodwetype *,int);
void btsrchn(int);
void delcaseA(struct nofetype *,struct nodetype *);
void delcaseB();
void btreedel(int);
int main()
{
    int n=0,ch,x,dn;
    root=NULL;  //empty tree
    do{
        printf("\n ENTER CHOICE FOR TREE");
        printf("\n 1.CREATE TREE/ INSERTION");
        printf("\n 2.DISPLAY TREE");
        printf("\n 3.SEARCH THE DESIRED VALUE");
        printf("\n 4.DELETION");
        printf("\n 5.EXIT");
        printf("\n ENTER CHOICE FOR TREE OPERATION");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
         while(n!=-1)
         {
            printf("\n Enter node,type(-1) to terminate");
            scanf("%d",&n);
            if(n!=-1)
            btreeins(n);
         }
         n=0;
            break;
        case 2:
        display(root,());
        break;
        case 3:
        printf("\n Enter node to be search");
        scanf("%d",&x);
        btsrch(root,x);
        break;
        case 4:
        printf("\n Enter the node to be deleted");
        scanf("%d",&dn);
        btreedel(dn);
        printf("\n Binary search Tree after DELETION of node %d is as follows",dn);
        display(root,1);
        break;
        case 5:
        break;
        default:
        printf("\n WRONG CHOICE !");
        }
    
    }while(ch!=5);
    return 0;
}
// end of the main function 
// the function btreeins insert a node value X in the binary tree
void btreeins(int x)
{
    struct nodetype *p, *parent;
    int found-0;
    p=root;
    while ((p!=NULL)&&(!found))
    {
        parent=p;
        if (x==p->info)
        found=1;
        else if (x<p->info)
        p=p->lchild;
        else
        p=p->rchild;
    }
    if(!found)
    {
        p=(struct nodetype *)malloc(sizeof(struct nodetype));
        p->info=x;
        p->lchild=NULL;
        p->rchild=NULL;
        if(root!=NULL)
        {
            if(x<parent->info)
            parent->lchild=p;
            else
            parent->rchild=p;
        }
        root=p;
    }
    
}// end of the btreeins
// the btsrch function find the given node in the binary tree
void btsrch(struct nodetype *p,int x)
{
    while((p!=NULL)&&(P->info!=x))
    {
        if (p->info>x)
        p=p->lchild;
        else
        p=p->rchild;
    }
    if (p==NULL)
    printf("\n Search Unsuccessful");
    else
    printf("\n Search successful at node address%d",p);
}