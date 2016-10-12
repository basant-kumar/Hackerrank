#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    ll n,c=0,output;
    int c1=0,c2=0,size,rem;
    cin>>n;
    vector<char> a(s.begin(),s.end());
    vector<char>::iterator it=a.begin();
    //no of a's in original string
    size=a.size();
    for(int i=0;i<size;++i){
        if(a[i]=='a'){
            c1++;
        }
    }
    output=n/size;
    rem=n%size;
    for(int i=0;i<rem;++i){
        if(a[i]=='a'){
            c2++;
        }
    }
   
    c=(output*c1)+c2;
    cout<<c<<endl;
    return 0;
}