#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
   // cout<<a[n-1]<<" "<<b[0]<<endl;
    int f1=0,f2=0,c=0;
    for(int i=a[n-1];i<=b[0];i++){
        
        for(int j=0;j<n;j++){
            if(i%a[j]==0){
                f1=1;
            }
            else{
                f1=0;break;
            }       
        }
        for(int j=0;j<m;j++){
            if(b[j]%i==0){
                f2=1;
            }
            else{
                f2=0;break;
            }       
        }
        if(f1==1 && f2==1){
            c++;//cout<<"i is "<<i<<endl;
        }
    
    }

    cout<<c<<endl;
    return 0;
}