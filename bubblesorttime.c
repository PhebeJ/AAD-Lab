#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n,numEle;
	numEle=100000;
	int i=0;
	clock_t startt,endt;
	double totalt;
	int a[numEle];
	FILE *fpr;
	for(i=0;i<numEle;i++)
		scanf("%d",&a[i]);                                                                                       
	int j=0;
	int t;
	
	startt=clock();
	for(i=0;i<numEle-1;i++)
	{
		for(j=0;j<numEle-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	endt=clock();
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
