#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int a[26],y=0,c[100];
    for(char i='a';i<='z';i++){
        cin>>a[i];
    }
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        for(char j='a';j<='z';j++){
            if(x[i]==j){
                c[y]=a[j];
                y++;
            }
        }
    }
    sort(c,c+y);
    cout<<c[y-1]*x.length();
    return 0;
}



link for the question---> https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
