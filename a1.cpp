#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int row=1;
//    char start='A';
   while (row<=n)
   {
    int col=1;
    // char value =row ;
    while (col<=n)
    {
        char ch='A'+row+col+1;
        cout<<ch;
        // value=value+1;

         col=col+1;
        // char ch='A'+row+col-2;
        // cout<<ch;
        // col=col+1;
        // new
        // char ch ='A'+row-1;
        // char ch='A'+ col-1;
        // new
        // cout<<ch;
        // col=col+1;
        // new
        // cout<<start;
        // start=start+1;
        // col=col+1;



    }
    cout<<endl;
        row=row+1;

   }
   
    
    
}