#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Charchter"<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
    cout<<"This is a lower case"<<endl;
    }else if (ch>='A'&& ch<='Z')
    {
        cout<<"This is a upper case"<<endl;
    }
    else{
        cout <<"This is numric value"<<endl;
    }
    
}