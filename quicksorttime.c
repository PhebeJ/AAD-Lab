#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int* b)
{
	int t;
     t = *a;
    *a = *b;
    *b = t;
}

int partition (int a[],int low,int high)
{
	int i,j,pivot;
     pivot = a[high];    
    i = (low-1);  
    for (j=low; j<=high-1;j++)
    {
        if (a[j]<=pivot)
        {
            i++;   
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
void quickSort(int a[],int low,int high)
{
	int pi;
    if (low<high)
    {
        pi=partition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
void main()
{
	int n,numEle;
	numEle=1000;
	int i;
	clock_t startt,endt;
	double totalt;
	int a[numEle];
	for(i=0;i<numEle;i++)
		scanf("%d",&a[i]);                                                                                       

	startt=clock();
    	quickSort(a,0,numEle-1);
	endt=clock();
	
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
