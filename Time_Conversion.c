#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char s[2];
    scanf("%d:%d:%d%s",&a,&b,&c,s);
    if(strcmp(s,"PM")==0 && a!=12)
    a+=12;
    if(strcmp(s,"AM")==0 && a==12)
    a=0;
    printf("%02d:%02d:%02d",a,b,c);
    return 0;
}
/*
Copy and Paste the given link for the question https://www.hackerrank.com/challenges/time-conversion/problem 
*/
