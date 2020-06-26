// Example program
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[10000];
    vector<int> even,odd;
    vector<pair<int, int> > vishnuResult;
    int n;
    
    while(t--) {
        cin>>n;
        for (int i=0 ; i<=2*n ; i++) {
            cin>>arr[i];
            if(arr[i]%2 ) {                 //vishnu ne bola
                odd.push_back(arr[i]);
            }
            else {
                even.push_back(arr[i]);
            }
        }
        for(int j=0 ; j<odd.size()-1; j=j+2) {
            vishnuResult.push_back(make_pair(odd[j],odd[j+1]));
        }
         for(int k=0 ; k<even.size()-1; k=k+2) {
            vishnuResult.push_back(make_pair(even[k],even[k+1]));
         }
         
         for (int m=0 ; m<n-1 ; m++) {
             cout<<vishnuResult[m].first<<" "<<vishnuResult[m].second<<endl;
         }
    }
}