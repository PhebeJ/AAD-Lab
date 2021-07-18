#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int n,cost[9][9],i,j,a,b,ne=1,mincost=0,parent[9],min,u,v;
int find(int i)
{
	while(parent[i])
		i=parent[i];
	return i;
}
int uni(int i, int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}
void main()
{
	printf("\nEnter the number of vertices\n");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=INT_MAX;			
		}
	
	while(ne<n)
	{
		for(i=1,min=INT_MAX;i<=n;i++)
		for(j=1;j<=n;j++)
			if(cost[i][j]<min)
			{
				min=cost[i][j];
				a=i;
				b=j;
			}
		u=find(a);
		v=find(b);	
		
		if(uni(u,v))
		{
			printf("\n%d edge (%d,%d)\n",ne++,a,b,min);
			mincost+=min;
		}
		cost[a][b]=cost[b][a]=INT_MAX;
	}		
	printf("\n\nCost= %d",mincost);
}
