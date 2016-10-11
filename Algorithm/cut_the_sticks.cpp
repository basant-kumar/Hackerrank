#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n,z;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin>>z;
        a.push_back(z);
    }
    while(a.size()!=0){
        int size=a.size();
        cout<<size<<endl;
        int min=*(min_element(a.begin(),a.end()));
        for(int i=0;i<size;++i){
            a[i]=a[i]-min;
            if(a[i]==0){
                a.erase((a.begin()+i));
                size--;
                i--;
            }
        }
    }
    
    return 0;
}