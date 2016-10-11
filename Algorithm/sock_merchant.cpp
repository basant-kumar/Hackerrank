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

//above code complexity is O(nlogn) which is not optimized 
//this given code complexity is O(n) using  couting frequency of a number

/*
#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
    cin>>n;
	int freq[101] = {};
	for(int i = 0; i < n; i++) {
        int c;
        cin >> c;
        freq[c]++;
    }

	int res = 0;
	for(int i = 0; i <= 100; i++){
         res += freq[i] / 2;
     }
	cout << res << endl;
	return 0;
}
*/ 