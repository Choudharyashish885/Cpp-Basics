#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    bool check=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"Prime"<<endl;
    }
    
    
    return 0;
}



