#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int c=1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(isupper(s[i])){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}