#include <iostream>

using namespace std;

int main(){
    int q,n,zz;
    cin>>q;
    for(int z=0;z<q;++z){
        int c=0;
        cin>>n;
        int a[2*n][2*n];
        for(int i=0;i<2*n;++i){
            for(int j=0;j<2*n;++j){
                cin>>a[i][j];
            }

        }
        int n1=(2*n)-1;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                c+=max(a[n1-i][n1-j],(max(a[i][n1-j],(max(a[i][j],a[n1-i][j])))));
            }
        }
        cout<<c<<endl;
    }
    return 0;
}