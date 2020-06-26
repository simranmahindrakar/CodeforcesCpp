#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() 
{
    int n;
    string name;
    cin>>n;
    while(n--) {
        cin>>name;
        if (name.length() <= 10) {
            cout<< name<<endl;
        }
        else {
            cout<<name[0]<<name.length() - 2<<name[name.length() -1]<<endl;
        }
    }
}