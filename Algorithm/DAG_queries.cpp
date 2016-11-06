#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;

void make(vector< list<int> > &a,vector< set<int> >& s,int i,int j){
       // cout<<"Inside make"<<endl;
        if(!a[j].empty()){//cout<<"inside if"<<endl;
            list<int>::iterator it=a[j].begin(); 
            //cout<<"inside if1"<<endl;
           while(it!=a[j].end()){//cout<<"inside while"<<endl;
                int z=*it;
                s[i].insert(z); //cout<<"z "<<z<<endl;
                make(a,s,i,z);
                it++;
            }
        }else{
            return;
        }
       
}

int main(){
    int n,m,q,u,v;
    cin>>n>>m>>q;
    vector< list<int> > a(n+1);
    vector< set<int> > s(n+1);
    int arr[n+1]={0};
    for(int i=0;i<m;i++){
        cin>>u>>v;
        a[u].push_back(v);
    }
/*
    for(int i=0;i<n;i++){
         make(a,s,i,i);
    }  
    
    
    for(int i=0;i<n;i++){
        cout<<i<<">>";
        set<int>::iterator it=s[i].begin();
        while(it!=s[i].end()){
            cout<<*it<<" ";
            it++;
        }cout<<endl;
    }*/
    int f,x;
    while(q--){
        cin>>f;
        if(f==1 ){
            cin>>u>>x;
            if(s[u].empty()){
                make(a,s,u,u);
            }
            arr[u]=x;
            if(!s[u].empty()){
                set<int>::iterator it=s[u].begin();
                //arr[u]=x;
                while(it!=s[u].end()){
                    int z1=*it;
                    arr[z1]=x;
                    it++;
                }
            }
            
        }else if(f==2){
            cin>>u>>x;
            if(s[u].empty()){
                make(a,s,u,u);
            }   
            if(arr[u]>x)
                    arr[u]=x;
            if(!s[u].empty()){
                set<int>::iterator it=s[u].begin();
                
                while(it!=s[u].end()){
                    int z1=*it;
                    if(arr[z1]>x){
                        arr[z1]=x;
                    }
                    it++;
                }
            }
            
        }else if(f==3){
            cin>>u;
            cout<<arr[u]<<endl;
        }
    }

    return 0;
}