#include<iostream>
using namespace std;

int main(){
    int i=10,j=10,k;
        //10  //9    //9  //10   //9  //10  //10  //9
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//10+
    cout<<k<<endl;
    return 0;
}