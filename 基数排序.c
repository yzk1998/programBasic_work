#include <stdio.h>
#include <stdlib.h>

struct node
    {
        int key;
    };

typedef struct node node;


void scan(node *p,int n);
void arrange(node *p,int n);
int num1(node *p);
int num2(int *p);
int num3(int **p);
void first(node *p,int n);
void second(node *p, int n);
void third(node *p,int n);



int main()
{
    int n;
    int m;
    node a[30] = {};

    printf("enter the number of list:");
    scanf("%d",&n);

    scan(a,n);

    arrange(a,n);

    m = num1(a);

    for(n = 1;n<m;n++)
        printf("%d\n",a[n].key);


    printf("Hello world!\n");



    return 0;
}

int num1(node *p)
    {
        int n;

        for(n = 1;p[n].key!=0;n++);

        return n;
    }
int num2(int *p)
    {
        int n;

        for(n = 0;p[n]!=0;n++);

        return n;

    }
int num3(int **p)
    {
        int n;

        for(n = 0;p[n]!=0;n++);

        return n;

    }

void scan(node *p,int n)
    {
        int m;
        m = n;
        for(;n>0;n--)
        {
            printf("enter the %dth num less than 1000:",m-n);
            scanf("%d",&(p[n].key));
        }
    }

void arrange(node *p,int n)
    {
        first(p,n);
        second(p,n);
        third(p,n);

    }

void first(node *p,int n)
    {
        int nnn;int m;int mm;int mmm;
        int q = 0,w = 0,x = 0,r = 0,t = 0,y = 0,u = 0,v = 0,o = 0,z = 0;
        int a[10] = {};int b[10] = {};int c[10] = {};int d[10] = {};int e[10] = {};int f[10] = {};int g[10] = {};int h[10] = {};int i[10] = {};int j[10] = {};
        int *aa[10] = {a,b,c,d,e,f,g,h,i,j};
        int nn = num3(aa);

        for(;n>0;n--)
            {
                m = p[n].key%10;
                    switch(m)
                        {
                            case 1:a[q] = p[n].key;q++;break;
                            case 2:b[w] = p[n].key;w++;break;
                            case 3:c[x] = p[n].key;x++;break;
                            case 4:d[r] = p[n].key;r++;break;
                            case 5:e[t] = p[n].key;t++;break;
                            case 6:f[y] = p[n].key;y++;break;
                            case 7:g[u] = p[n].key;u++;break;
                            case 8:h[v] = p[n].key;v++;break;
                            case 9:i[q] = p[n].key;o++;break;
                            case 0:j[z] = p[n].key;z++;break;
                        }
            }
        for(n = 0;n<nn;n++)
            {
                mm = 0;
                nnn = num2(aa[n]);
                mm = mm + nnn;
                mmm = 0;
                for(;nnn>0;mmm++,nnn--)
                    {
                        p[mmm].key = aa[n][nnn];
                    }
            }
    }

void second(node *p, int n)
    {
        int nnn;int m;int mm;int mmm;
        int q = 0,w = 0,x = 0,r = 0,t = 0,y = 0,u = 0,v = 0,o = 0,z = 0;
        int a[10] = {};int b[10] = {};int c[10] = {};int d[10] = {};int e[10] = {};int f[10] = {};int g[10] = {};int h[10] = {};int i[10] = {};int j[10] = {};
        int *aa[10] = {a,b,c,d,e,f,g,h,i,j};
        int nn = num3(aa);

        for(;n>0;n--)
            {
                m = (p[n].key%100)-(p[n].key%10);
                    switch(m)
                        {
                            case 1:a[q] = p[n].key;q++;break;
                            case 2:b[w] = p[n].key;w++;break;
                            case 3:c[x] = p[n].key;x++;break;
                            case 4:d[r] = p[n].key;r++;break;
                            case 5:e[t] = p[n].key;t++;break;
                            case 6:f[y] = p[n].key;y++;break;
                            case 7:g[u] = p[n].key;u++;break;
                            case 8:h[v] = p[n].key;v++;break;
                            case 9:i[q] = p[n].key;o++;break;
                            case 0:j[z] = p[n].key;z++;break;
                        }
            }
        for(n = 0;n<nn;n++)
            {
                mm = 0;
                nnn = num2(aa[n]);
                mm = mm + nnn;
                mmm = 0;
                for(;nnn>0;mmm++,nnn--)
                    {
                        p[mmm].key = aa[n][nnn];
                    }
            }

    }


void third(node *p,int n)
    {
        int nnn;int m;int mm;int mmm;
        int q = 0,w = 0,x = 0,r = 0,t = 0,y = 0,u = 0,v = 0,o = 0;
        int a[10] = {};int b[10] = {};int c[10] = {};int d[10] = {};int e[10] = {};int f[10] = {};int g[10] = {};int h[10] = {};int i[10] = {};int j[10] = {};
        int *aa[10] = {a,b,c,d,e,f,g,h,i,j};
        int nn = num3(aa)-1;

        for(;n>0;n--)
            {
                m = (p[n].key%1000)-(p[n].key%100);
                    switch(m)
                        {
                            case 1:a[q] = p[n].key;q++;break;
                            case 2:b[w] = p[n].key;w++;break;
                            case 3:c[x] = p[n].key;x++;break;
                            case 4:d[r] = p[n].key;r++;break;
                            case 5:e[t] = p[n].key;t++;break;
                            case 6:f[y] = p[n].key;y++;break;
                            case 7:g[u] = p[n].key;u++;break;
                            case 8:h[v] = p[n].key;v++;break;
                            case 9:i[q] = p[n].key;o++;break;
                        }
            }
        for(n = 0;n<nn;n++)
            {
                mm = 0;
                nnn = num2(aa[n]);
                mm = mm + nnn;
                mmm = 0;
                for(;nnn>0;mmm++,nnn--)
                    {
                        p[mmm].key = aa[n][nnn];
                    }
            }

    }


