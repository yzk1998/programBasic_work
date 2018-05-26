#include <stdio.h>
#include <stdlib.h>

struct node
    {
        int data;
        struct node *next;
    };

typedef struct node node;

void create(int n);
void print(int n);
void invert(int n);
node *find(int n);

node *head;
int main()
{
    int n = 0;

    head = (node *)malloc(sizeof(node));

    printf("ENTER THE NUMBER OF LIST YOU WANT TO CREATE:");
    scanf("%d",&n);

    create(n);

    invert(n);

    print(n);


    printf("Hello world!\n");
    return 0;
}
void create(int n)
    {
        int m = 0;
        node *p = (node *)malloc(sizeof(node));
        node *q = NULL;
        head->next = p;
        for(;m<n;m++)
            {
                q = (node *)malloc(sizeof(node));
                printf("ENTER THE NUMBER OF THE %dth NODE:",m+1);
                scanf("%d",&(p->data));
                p->next = q;
                q->next = NULL;
                p = q;
            }
    }
void invert(int n)
    {
        node *p = find(n);
        for(;n>1;n--)
            {
                find(n)->next = find(n-1);
            }
        find(1)->next = NULL;
        head->next = p;
    }
void print(int n)
    {
        node *p = head;
        for(;n>0;n--)
            {
                p = p->next;
                printf("%d",p->data);
            }
        printf("\n");
    }
node *find(int n)
    {
        node *p = head;
        for(;n>0;n--)
            {
                p = p->next;
            }
        return p;
    }
