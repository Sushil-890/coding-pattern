//heloo there
#include<iostream>
using namespace std;
int main(){
    int i=367;
    int *g=0;
    g=&i;//innstead of writting two lines code write *g=&i;
    //we can't do *g=i lead segmentation fault

    int a=5;
    int *p=&a;
    int **q=&p;
    // cout<<*p<<"++++++++++++++++++++++"<<p<<endl;
    // cout<<&(*p)<<endl;
    cout<<a<<endl;
    cout<<p<<" "<<*p<<endl; 
    cout<<q<<" "<<*q<<" "<<**q<<endl;
    
    *p=*p+30;
    cout<<a<<endl;
    cout<<p<<" "<<*p<<endl; 
    cout<<q<<" "<<*q<<" "<<**q;
    return 0;
}
