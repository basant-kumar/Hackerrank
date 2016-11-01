#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    int size1,size2,min,i,c=0;
    size1=s.size();
    size2=t.size();
    min=(size1<size2) ? size1:size2;
    for(i=0;i<min;i++){
        if(s[i]!=t[i]){
            break;
        }
    }
    if(i==0){
        if(k>=(size1+size2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else if(i==min){
        if(min==size1 && min==size2){
            if(k>=(size1+size2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else if(min==size1 || min==size2 ){
            if(k==abs(size2-size1))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    else{
        if(k==((size1-i)+(size2-i)))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
