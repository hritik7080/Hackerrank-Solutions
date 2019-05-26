#include<iostream>
using namespace std;
int main(){
    int n,d,t=0;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i] == d){
                for(int k=j+1;k<n;k++){
                    if(arr[k]-arr[j]==d){
                        t++;
                    }
                }
            }
        }
    }
    cout<<t;
    return 0;
}



link for the question-->  https://www.hackerrank.com/challenges/beautiful-triplets/problem
