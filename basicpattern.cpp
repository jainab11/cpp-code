// *  *  *  *
// *  *  *  *
// *  *  *  *
// *  *  *  *
//  print this
// 1) for outer loop , count the no.of line
// 2) for inner loop focus on coloms and connect them with rows
// 3) print them inside the inner foe loop
// 4) observe Symmetry 
// for (i=0;i<4;i++)
// for(j-0;j<4;j++)
// print *
#include<bits/stdc++.h>
using namespace std;
void print1(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j< 4; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    
}
int main(){
    print1();

}