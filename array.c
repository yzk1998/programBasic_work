#include <stdio.h>
#include <stdlib.h>


struct linear_chain_node
    {
       int data;
       struct linear_chain_node *link;
    };
typedef struct linear_chain_node NODE;


NODE *createSingleNode();
NODE *resetNode();
NODE *insertNOde(NODE *head,int a,int n,int b);

int main()
{
    int n = 0;
    NODE *firstHead = NULL;
    NODE *secondHead = NULL;


    printf("Enter the counts of NODE: ");
    scanf("%d",&n);
    /*firstHead = createSingleNode(n);
    printf("%d",firstHead->data);
    secondHead = resetNode(firstHead,n);
    printf("\n");
    printf("%d",secondHead->link->link->data);
    */
    return 0;
}

NODE *createSingleNode(int n)
{
    NODE *head,*p,*q;
    head = (NODE *)malloc(sizeof(NODE));
    head->data = 0;head->link = NULL;
    p = head;

    for(;n>1;n--)
{
    q = (NODE *)malloc(sizeof(NODE));
    scanf("%d",&q->data);
    q->link = NULL;
    p->link = q;
    p = q;
}
return (head);/*ѭ�������������������ٰ�β�ͺ�ͷ������*/

}
NODE *resetNode(NODE *head,int n)
{
    NODE *p,*q,*r;
    p = head->link;
    head->link = NULL;
    q = head;
    for(;n>2;n--)
{
    r = p->link;
    p->link = q;
    q = p;
    p = r;
}
    p->link = q;


head = p;
return head;

}
NODE *insertNode(NODE *head,int a,int n,int b)
{
    int m = 0;
    int z = 0;
    NODE *p = head;
    NODE *q = head;
    for(z = n;z>=0;z--)
    {

        if(p->data == a)
        {
            for(m=n;m==z+1;m--)
            {
                q = q->link;
            }
            q->link = (NODE *)malloc(sizeof(NODE));
            q->link->data = b;
            q->link->link = p;
            return head;
        }
        if(z==0)
        {
            p->link = (NODE *)malloc(sizeof(NODE));
            p->link->data = b;
            p->link->link = NULL;/*ѭ���б�ΪNULL*/
            return head;
        }
        if(z>1)
        {
            p = p->link;
        }
    }


}








