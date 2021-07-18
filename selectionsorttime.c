#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n,numEle;
	numEle=10;
	int i=0;
	clock_t startt,endt;
	double totalt;
	int a[numEle];
	FILE *fpr;
	for(i=0;i<numEle;i++)
		scanf("%d",&a[i]);                                                                                       
	int j=0;
	int t;
	int small,pos,temp;
	pos=i;
	startt=clock();
	for(i=0;i<numEle-1;i++){
    for(j=i+1;j<numEle;j++){
            if(a[pos]<a[j]){
                pos=j;
            }
        }
        if(pos!=i){
            t=a[i];
            a[i]=a[pos];
            a[pos]=t;
        }
    }	
	endt=clock();
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf",totalt);
}
