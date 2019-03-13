#include<iostream>
using namespace std;
int main(){
    int c=0,i,a[1000],n,k,t,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>a[j];
            if(a[j]<=0){
                c++;
            }
        }
        if(c>=k){
            cout<<"NO"<<endl;
            c=0;
        }
        else{
            cout<<"YES"<<endl;
            c=0;
        }
    }
    return 0;
}

//Link for the question https://www.hackerrank.com/challenges/angry-professor/problem
