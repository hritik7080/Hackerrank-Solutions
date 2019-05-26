#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,t,a,b,g=0;
    cin>>n>>t;
    int r[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    for(int i=0;i<t;i++){
        cin>>a>>b;
        int d=b-a;
        d=d+1;
        int f[d];
        for(int j=a;j<=b;j++){
            f[g]=r[j];
            g++;
        }
        sort(f,f+d);
        cout<<f[0]<<endl;
        g=0;

    }
    return 0;
}


link for question-->   https://www.hackerrank.com/challenges/service-lane/problem
