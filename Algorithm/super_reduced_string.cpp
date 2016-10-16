#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin>>s;
    stack<char> st;
    vector<char> v;
    for(int i=0;i<s.size();++i){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i]==st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.size()==0){
        cout<<"Empty String"<<endl;
    }
    else{
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(auto it=v.crbegin();it!=v.crend();++it){
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}
