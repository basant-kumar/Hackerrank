#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k,z,c=0;
    cin>>n>>k;
    int frq[k]={0};
    for(int i=0;i<n;++i){
        cin>>z;
        frq[z%k]++;
    }

    for(int i=1;i<k;++i){
        if(i!=k-i)
            c=c + max(frq[i],frq[k-i]);
    }
    c=c/2;
    
    if(frq[0]>0){
        c++;
    }
    if(k%2==0){
        if(frq[k/2]>0){
            c++;
        }
    }      
    cout<<c<<endl;
    return 0;
}