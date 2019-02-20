#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void countAppleandOranges();
main()
{
    countAppleandOranges();
}
void countAppleandOranges()
{
    int s,t,a,b,m,n,*app,*orr,diffa[1000000],diffo[1000000],apple=0,orange=0,i;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    app=(int *)calloc(m,sizeof(int));
    orr=(int *)calloc(n,sizeof(int));
    for(i=0;i<m;i++)
    {
        scanf("%d",(app+i));
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",(orr+i));
    }
    for(i=0;i<m;i++)
    {
        diffa[i]=a+*(app+i);
    }
    for(i=0;i<n;i++)
    {
        diffo[i]=b+*(orr+i);
    }
    for(i=0;i<m;i++)
    {
        if(diffa[i]>=s&&diffa[i]<=t)
        {
            apple++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(diffo[i]>=s&&diffo[i]<=t)
        {
            orange++;
        }
    }
    printf("%d",apple);
    printf("\n%d",orange);
}
/*
Copy and Paste the given link for the question https://www.hackerrank.com/challenges/apple-and-orange/problem 
*/
