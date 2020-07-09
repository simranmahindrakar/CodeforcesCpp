#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
   long n,t;
   cin>>t;
   while(t--) 
   {
       cin>>n;
       long step2=0, step3=0;
       while(n%2 == 0)
       {
           step2++;
           n=n/2;   //UPDATE n
       }
       while(n%3 == 0)
       {
           step3++;
           n=n/3;
       }
       if (n!=1 || step2 > step3)   //number of 2s more than number of 3s
       {
           printf("-1 \n");
       }
       else {
           cout<<(step3 - step2) + step3<<endl;
       }
}
 return 0;
}
