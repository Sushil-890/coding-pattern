#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--)
        cout<<"*";
        for(int j=1;j<2*i-1;j++)
        cout<<" ";
        for(int j=n;j>=i;j--)
        cout<<"*";
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--)
        cout<<"*";
        for(int j=2*i-1;j>1;j--)
        cout<<" ";
        for(int j=n;j>=i;j--)
        cout<<"*";
        cout<<endl;
    }
}