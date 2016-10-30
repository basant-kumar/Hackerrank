#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int size=s.size(),c=0;
    for(int i=0;i<size-3;i++){
        if(s[i]!='S'){
            c++;
        }
        if(s[i+1]!='O'){
            c++;
        }
        if(s[i+2]!='S'){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}