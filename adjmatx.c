#include <stdio.h>
void main()
{
	int v,i,j,x,y,n;
	printf("\nEnter the number of vertices\n");
	scanf("%d",&v);
	int a[v][v];
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
			a[i][j]=0;	
	printf("Enter the no edges: \n");
	scanf("%d",&n);
	printf("Enter the edges: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		a[x][y]=1;
		a[y][x]=1;
	}
	for(i=0;i<v;i++)
	{	for(j=0;j<v;j++)
			printf("%d ",a[i][j]);
		printf("\n");	
	}
}
