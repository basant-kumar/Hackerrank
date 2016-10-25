#include <map>
#include<set>
#include<ctime>
#include<cmath>
#include<queue> 
#include<stack>
#include<bitset>
#include<vector>
#include<cstdio>
#include<string>
#include<cassert>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iterator>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
#define MM(a,x) memset(a, x, sizeof(a))
#define P(x) cout<<#x<<" = "<<x<<endl;
#define P2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl;
#define PV(a,n) for(int i=0;i<n;i++) cout<<#a<<"[" << i <<"] = "<<a[i]<<endl;
#define TM(a,b) cout<<#a<<"->"<<#b<<": "<<1.*(b-a)/CLOCKS_PER_SEC<<"s\n";

string S;
int d[10010];
int n;
int c[26], w[26];

int main() {
    cin >> S;
    reverse(S.begin(), S.end());
    n = S.length();
    assert(n <= 10000);
    for(int i = 0; i < n; i++) d[i] = S[i] - 'a';
    for(int i = 0; i < n; i++) c[d[i]]++;
    for(int i = 0; i < 26; i++) assert(c[i] % 2 == 0);
    for(int i = 0; i < 26; i++) w[i] = c[i] / 2;
    vector<int> ret(n / 2);
    for(int i = 0; 2 * i < n; i++) {
        for(int c = 0; c < 26; c++) {
            ret[i] = c;
            int p = 0;
            int l = 0;
            for(int j = 0; j < n; j++) {
                if(ret[p] == d[j]) {
                    p++;
                    l = j;
                    if(p > i) break;
                }
            }
            if(p <= i) continue;
            int want[26] = {};
            for(int j = 0; j < 26; j++) want[j] = w[j];
            for(int j = 0; j <= i; j++) want[ret[j]]--;
            int have[26] = {};
            for(int j = l + 1; j < n; j++) have[d[j]]++;
            int ok = 1;
            for(int j = 0; j < 26; j++) if(want[j] < 0 || want[j] > have[j]) ok = 0;
            if(ok) break;
        }
    }
    string r;
    for(int i = 0; 2 * i < n; i++) r += char(ret[i] + 'a');
    cout << r << endl;
    return 0;
}


/*
#include <iostream>
#include <vector>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void print(char *A,int size){
    for(int i=0;i<size;i++){
        cout<<A[i];
    }
    cout<<endl;
}

int main(){
    string s;
    cin>>s;
  
    vector<char> v(begin(s),end(s));
    sort(v.begin(),v.end());
    int frq[26],ign[26],cnt[26];
    memset(frq,0,sizeof(frq));
    memset(ign,0,sizeof(ign));
    memset(cnt,0,sizeof(cnt));
   // cin.clear();
    int size=s.size(),idx=0;
    cout<<"size "<<size<<endl;
    char A[size/2];
    for(int i=0;i<size;i++){
        frq[(int)s[i]-97]++;
    }
 
    for(int i=0;i<26;i++){
        frq[i]/=2;
    }
     
     for(int i=0;i<26;i++){
        cout<<i<<"->>"<<frq[i]<<endl;
    }
  
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(int i=size-1;i>=0;i--){//cout<<i<<"->INSIDE"<<endl;
      /*  if(idx==(size)/2){//cout<<"finally"<<endl;
            print(A,size/2);
            return 0;
        }*/
   
        if(ign[(int)s[i]-97]>=frq[(int)s[i]-97]){ //cout<<"idx1 "<<idx<<endl;
            A[idx++]=s[i];cnt[(int)s[i]-97]++;
        }
        else if(s[i]==v[0] && cnt[(int)s[i]-97] <frq[(int)s[i]-97] ){//cout<<"idx2 "<<idx<<endl;
            A[idx++]=s[i]; cnt[(int)s[i]-97]++;
            v.erase(v.begin());
        }
        else{
            ign[(int)s[i]-97]++;
        }
        //cout<<"idx "<<idx<<endl;
       // cout<<"I "<<i<<endl;
       
     }
    print(A,size/2);
    //cout<<s<<endl;
    return 0;
}
*/