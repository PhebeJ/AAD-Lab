#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numEle 100000


int binary(int a[],int low,int high, int k)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(k<a[mid])
		high=mid-1;
		else if(k>a[mid])
		low=mid+1;
		else
		return 0;
	}
	return -1;
}
void main()
{
	int n;
	int i=0;
	int key=0;
	clock_t startt,endt;
	double totalt;
	int a[numEle];
	FILE *fpr;
	for(i=0;i<numEle;i++)
		scanf("%d",&a[i]); 
	int flag;	
	startt=clock();
	flag=binary(a,0,numEle-1,key);
	if(flag==0)
		printf("\nFound!\n");
	else
		printf("\nNot Found!\n");
	endt=clock();
	
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
