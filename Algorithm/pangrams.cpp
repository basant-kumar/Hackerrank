#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
   // cin>>s;
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> a(begin(s),end(s));
    if(a.size()==26)
        cout<<"pangram"<<endl;
    else 
        cout<<"not pangram"<<endl;
    return 0;
}   