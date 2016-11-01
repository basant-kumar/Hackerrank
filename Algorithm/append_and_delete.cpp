#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    int s1,s2,min,i;
    s1=s.size();
    s2=t.size();
    min=(s1<s2) ? s1:s2;
    for(i=0;i<min;i++){
        if(s[i]!=t[i]){
            break;
        }
    }
    if(k>=(s1+s2)){
        cout<<"Yes"<<endl;
    }
    else if((k-(s1+s2)-2*i)%2==0 && k>=(s1+s2)-2*i){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
