#include <stdio.h>
#include <string.h>
void main()
{
	char txt[]="apple is is red";
	char pat[]="is";
	int m=strlen(txt);
	int n=strlen(pat);
	int t=0;
	int p=0;
	int h=1;
	int q=101;
	int d=256;
	int i,j;
	for(i=0;i<n-1;i++)
		h=(h*d)%q;
	for(i=0;i<n;i++)
	{
		t=((d*t)+txt[i])%q;
		p=((d*p)+pat[i])%q;
	}
	for(i=0;i<m-n+1;i++)
		
	{
		if(p==t)
		{
			for(j=0;j<n;j++)
			{
				if(txt[i+j]!=pat[j])
					break;
			}
		if(j==n)
			printf("\nFound at pos %d",i);
		}
	if(i<m-n)
	{
		t=(d*(t-txt[i]*h)+txt[i+n])%q;
	}
	if(t<0)
		t=t+q;
	}
}
