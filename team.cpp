#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum, counter=0;
    int p,v,t;
    cin>>n;
    while (n--)
    {
        cin>>p>>v>>t;
        sum = p+v+t;          //just maeke sure their sum is >=2
        if(sum >= 2) {
            counter++;
        }
    }
    cout<<counter<<endl;
}
