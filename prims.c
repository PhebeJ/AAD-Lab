#include <stdio.h>
#include <limits.h>
#define V 5
int min_key(int key[],int mst[])
{
	int i,min=INT_MAX,min_index;
	for(i=0;i<V;i++)
		if(key[i]<min && mst[i]==0)
		{
			min=key[i];
			min_index=i;
		}
	return min_index;
}
void primMST(int graph[V][V])
{
	int i;
	int parent[V];		//To store the final tree
	int key[V];			//To assign key values to all the vertices
	int mst[V];			//To know which all vertices are not included
	for(i=0;i<V;i++)
	{
		key[i]=INT_MAX;
		mst[i]=0;
	}
	key[0]=0;
	mst[i]=-1;
	for(i=0;i<V-1;i++)
	{
		int u,v;
		u=min_key(key,mst);		//To select the minimum key
		mst[u]=1;
		for(v=0;v<V;v++)
		{
			if(graph[u][v] && mst[v]==0 && key[v]>graph[u][v])
			{
				parent[v]=u;
				key[v]=graph[u][v];
			}
		}
		
	}
	printf("Edge	Weight\n");
	for(i=1;i<V;i++)
		printf("%d - %d   %d\n",parent[i],i,graph[i][parent[i]]);
}
void main()
{
	int graph[V][V]={{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
	primMST(graph);
}
