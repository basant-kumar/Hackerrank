#include <iostream>
#include <vector>
#include <string>
#include <set>
#include<assert.h>
using namespace std;

int check(string s,char a,char b,int len){
    string temp;
    char last;
    for(int i=0;i<len;i++){
        if(s[i]==a || s[i]==b)
            temp+=s[i];
    }
    len=temp.size();
    if(len<=1)
        return 0;
    last=temp[0];
    for(int i=1;i<len;i++){
        if(temp[i]==last)
            return 0;
        last=temp[i];
    }   
    return len;
}


int main(){
    int len,max=0,c=0;
    cin>>len;
    string s;
    cin>>s;
    set<char> aa(begin(s),end(s));
    if(aa.size()==1){
        cout<<0<<endl;
        return 0;
    }
    vector<char> a(begin(aa),end(aa));
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
           c=check(s,a[i],a[j],len);
           if(c>max)
            max=c;
        }    
    }
    cout<<max<<endl;
    return 0;
}