#include <iostream>

using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        if(N==1)
            cout<<"Second"<<endl;
        else{
            if(N%7==0 || (N-1)%7==0)
                cout<<"Second"<<endl;
            else 
                cout<<"First"<<endl;
        }
    }
    return 0;
}