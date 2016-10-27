#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,c=0,p=5;
    cin>>n;
    while(n--){
        p=floor(p/2);
        c+=p;
        p=p*3;
    }
    cout<<c<<endl;
    return 0;
}