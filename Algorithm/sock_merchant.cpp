#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

//for sort function to sort an vector
/*
bool com(int i,int j){
    return (i<j);
}

struct myclass{
    bool operator() (int i,int j){
        return (i<j);
    }
}myobj; */


int main(){
    int n,z,c=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin>>z;
        a.push_back(z);
    }
    sort(a.begin(),a.end());
    int size=a.size();

   int i=0;
   while(i<size-1){
        if(a[i]==a[i+1]){
            a.erase(a.begin()+i,a.begin()+i+2);
            size=size-2;
            i--;
            c++;
        }
        i++;
    }

    cout<<c<<endl;
    return 0;
}