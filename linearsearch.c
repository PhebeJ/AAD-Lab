#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numEle 100000
int linear(int a[], int k)
{
	int i,flag=1;
	for(i=0;i<numEle;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			return 0;
		}
	}
	return -1;
}
void main()
{
	int n;
	int i=0;
	clock_t startt,endt;
	double totalt;
	int a[numEle];
	FILE *fpr;
	for(i=0;i<numEle;i++)
		scanf("%d",&a[i]); 
	int key=a[0];
	int flag;	
	startt=clock();
	flag=linear(a,key);
	if(flag==0)
		printf("\nFound!\n");
	else
		printf("\nNot Found!\n");
	endt=clock();
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
