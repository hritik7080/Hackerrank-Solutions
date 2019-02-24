#include<stdio.h>
int main(){
    int i,x,a[10000],b[10000],c[10000],j,y=0,d[10000],t=0;
     scanf("%d",&x);
    for(i=0;i<x;i++){
        c[i]=0;//declaring all the values of this array to zero.
        d[i]=0;//declaring all the values of this array to zero.
    }
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if(a[i]==a[j] || a[i]+1==a[j]){
                c[i]++;
            }
            else if(a[i]==a[j] || a[i]-1==a[j]){
                d[i]++;
            }
        }
        
    }
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(c[i]<c[j]){
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(d[i]<d[j]){
                t=d[i];
                d[i]=d[j];
                d[j]=t;
            }
        }
    }
    if(c[0]>d[0]){
        printf("%d",c[0]);
    }
    else{
        printf("%d",d[0]);
    }
    return 0;
}


//Link for the question https://www.hackerrank.com/challenges/picking-numbers/problem
