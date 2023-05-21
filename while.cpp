#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   cout<<"Enter any number"<<endl;
     cin>>n;
     int i=2;
     int sum=0;
     while (i<=n)
     {
        sum=sum+n;
        i=i+i;
       
     }
      cout<<sum;
      
     
    // int i=2;
    // while (i<=n)
    // {
    //     cout<<i<<" ";
    //     i=i+1;
    // }
    
}