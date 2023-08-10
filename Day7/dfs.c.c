#include <stdio.h>
#include <stdlib.h>
int q[10],n,s[10],a[10][10];
void bfs(int source)
{
    int f,r,u,v;
    f=r=u=v=1;
    q[u]=source;
    s[source]=1;
    while(f<=r)
    {
        u=q[f++];
        for(v=1;v<=n;v++)
        {
            if(a[u][v]&&!s[v])
            {
                s[v]=1;
                q[++r]=v;
            }
        }
    }
}
int main()
{
    int i,j,source;
    printf("enter the no. of vertices:\n");
    scanf("%d",&n);
    printf("enter the source vertex:\n");
    scanf("%d",&source);
    printf("enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        s[i]=0;
    bfs(source);
    for(i=1;i<=n;i++)
    {
        if(s[i]==1)
            printf("vertex %d reachable from %d\n",i,source);
    }
}
