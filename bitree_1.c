#include <stdio.h>
#include <stdlib.h>

struct biTree
    {int data;
    struct biTree*lc;
    struct biTree*rc;
    };
typedef struct biTree bt;

bt* create();
int pre(bt*root,int *a,int *n);
int mid(bt*root,int *a,int *n);
int behind();

int main()
{
    bt*root;
    int n = 0;
    int m;
    int a[30] = {};
    root = create();

    pre(root,a,&n);


    for(m = 0;n>0;n--,m++)
        {
            printf("%d\t",a[m]);
        }

    return 0;
}

bt* create()
    {
        bt *root = (bt*)malloc(sizeof(bt));

        root->lc = NULL;
        root->rc = NULL;

        scanf("%d",&(root->data));

        if(root->data==0){return root;}

        root->lc = create();
        root->rc = create();


        return root;
    }
int pre(bt*root,int *a,int *n)
    {
        a[*n] = root->data;

        if(root==NULL){return 0;}

        *n = *n+1;

        pre(root->lc,a,n);
        pre(root->rc,a,n);

        return 0;

    }

int mid(bt*root,int *a,int *n)
    {

        if(root->lc!=NULL) mid(root->lc);
        else return 0;

        a[*n] = root->data;
        *n = *n+1;

        mid(root->rc);


        return 0;

    }
