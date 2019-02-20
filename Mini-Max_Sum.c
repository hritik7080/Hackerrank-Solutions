#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    long a[5],i,j,t,sum=0,sums=0;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=4;i>=1;i--)
    {
        sum=sum+a[i];
    }
    for(i=0;i<4;i++)
    {
        sums=sums+a[i];
    }
    printf("%ld %ld",sums,sum);
 }
 
 /*
Copy and Paste the given link for the question https://www.hackerrank.com/challenges/mini-max-sum/problem 
*/
