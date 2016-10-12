#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,z,c=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
       
    }
    int i=0;
    while(i<n-1){
        if(a[i+1]==0 && a[i+2]==0){
            c++;
            ++i;
        }
        else if(a[i+1]==0 && a[i+2]==1){
            c++;
        }
        else if(a[i+1]==1){
            c++;
            ++i;
        }
        else{
            c++;
        }
        
        ++i;
    }

    cout<<c<<endl;
    return 0;
}