#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,d;
        cin>>a>>b>>d;
        if(d==0){
            cout<<0<<endl;
        }else if(a==d||b==d){
            cout<<1<<endl;
        }else if(a>d||b>d){
            cout<<2<<endl;
        }else{
            int r=d%b;
            int q=d/b;
            if(r==0)
                cout<<q<<endl;
            else   
                cout<<q+1<<endl;
        }
    }
    return 0;
}
