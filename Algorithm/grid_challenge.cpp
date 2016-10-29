#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define for(i,a,b) for(i=a;i<b;i++)

using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int i,j,flag=0;
        string a[N];
        for(i,0,N){
            cin>>a[i];
            sort(a.begin(),a.end());
        }
        for(i,0,N){
            for(j,1,N-1){
                if(a[i][j]>a[i+1][j])
                    flag=1;break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}