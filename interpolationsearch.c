#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numEle 10
int interpolation(int a[],int n,int k)
{
	int low,high,pos;
	low=0;
	high=n-1;
	while((low<=high) && (k<=a[high]) && (k>=a[low]))
	{
		pos=low+(((double)(high-low)/(a[high]-a[low]))*(k-a[low]));
		printf("%d\n",pos);							
		if(k>a[pos])
			low=pos+1;
		else if(k<a[pos])
			high=pos-1;
		else
			return 1;
	}
	return 0;
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
	int key=a[7];
	int flag;	
	startt=clock();
	flag=interpolation(a,numEle,key);
	endt=clock();
	if(flag)
		printf("\nFound!\n");
	else
		printf("\nNot Found!\n");	
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
