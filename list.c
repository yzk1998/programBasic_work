#include <stdio.h>
#include <stdlib.h>

/*实验 3：单向链表的基本操作
题目 3（学时 2）：
创建一个由6个结点的单向链表，实现增加、删除、查找、移动、显示结点的基本功能。

题目 4 ：字符逆转（学时：2）
从键盘读入一个字符串，把它存入一个链表（每结点储1个字符），并个字符），并按相反的次序将字符串输出到显示器.
*/

struct node
        {
        int data;
        struct node *next;
        };

typedef struct node node;

int find(int n);
void del(int n);
int find_val(int val,int num);
void create(int n);
void insert(int n);
void print(int n);
void move(int n,int m);


node *head;

int main()
{
    head = malloc(sizeof(node));
    head->data = 0;
    head->next = NULL;

    int num;

    printf("ENTER THE NUMBER OF THE LIST YOU WANT TO CREATE:");
    scanf("%d",&num);
    create(num);
    printf("%d\t%d\n",find(6),find_val(6,num));

    printf("I will take 6 to 3\n");
    printf("%d\t\t%d\n",find(6),find(3));
    move(6,3);
    printf("%d\t\t%d",find(3),find(4));



    /*insert(3);
    printf("%d,%d,%d,%d,%d,%d",find(1),find(2),find(3),find(4),find(5),find(6));
    */

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
void insert(int n)
    {
        node *p = head;
        node *insert_node = (node *)malloc(sizeof(node));
        for(;n>1;n--)
            {
                p = p->next;
            }
      insert_node->next = p->next;
      p->next = insert_node;
      printf("ENTER THE DATA OF THE NODE YOU INSERT:");
      scanf("%d",&(insert_node->data));
    }
int find(int n)
    {
        node *p = head;

        for(;n>0;n--)
            {
                p = p->next;
            }
        return p->data;
    }
int find_val(int val,int num)
    {
        node *q = NULL;
        node *p = head;
        int n = 0;

        while(1)
            {
                n = n+1;
                q = p->next;
                if(q->data == val)return n;
                if(n == num) {printf("NOT FOUND!");return 0;}
                p = q;

            }

    }
void print(int n)
    {
        int m = n;
        node *q = NULL;
        node *p = head;

        for(;n>0;n--)
            {
                q = p->next;
                p = q;
            }
        printf("THIS IS THE DATA OF THE %dth NODE THAT YOU WANT TO FIND",m);
        printf("%d\n",p->data);
    }
void del(int n)
    {
        node *p = head;
        for(;n>1;n--)
            {
                p = p->next;
            }
        p->next = p->next->next;
    }
void move(int n,int m)
    {
        node *p = head;
        node *q = head;
        node *z = NULL;
        printf("YOU WILL TAKE THE %dth NODE TO THE %dth NODE\n",n,m);
        for(;n>1;n--)
            {
                p = p->next;
            }
        for(;m>1;m--)
            {
                q = q->next;
            }
        z = p->next;
        p->next = p->next->next;
        z->next = q->next;
        q->next = z;
    }

