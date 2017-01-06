#include <iostream>
#include <vector>
#include <list>
#include <cstring>
#include <cstdio>

using namespace std;
bool g[100001]={false};


void make(vector< vector<int> > &a,vector< vector<int> >& s,int i,int j,int *b){
        int z;
        if(!a[j].empty()){//cout<<"inside if"<<endl;
            vector<int>::iterator itt;
            //cout<<"inside if1"<<endl;
          for(itt=a[j].begin();itt!=a[j].end();itt++){//cout<<"inside while"<<endl;
               z=*itt;
               if(b[z]==0){
                    b[z]=1;
                    s[i].push_back(z);
                    make(a,s,i,z,b);
                    
               }    
            }
        }else{
            return;
        }
       
}

int main(){
    int n,m,q,u,v;
    scanf("%d %d %d",&n,&m,&q);
    vector< vector<int> > a;
    vector< vector<int> > s;
    for(int i=0;i<=n;i++){
        a.push_back(vector<int>());
        s.push_back(vector<int>());
    }
   
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
    }


    int f,x,b[n+1],z1;
    vector<int>::iterator it;
    while(q--){
       scanf("%d",&f);
        if(f==1 ){
            scanf("%d %d",&u,&x);
            if(g[u]==false){
                g[u]=true;
                memset(b,0,sizeof(b));
                make(a,s,u,u,b);
            }
            arr[u]=x;
            if(!s[u].empty()){
               for(it=s[u].begin();it!=s[u].end();it++){
                    z1=*it;
                    arr[z1]=x;
                    
                }
            }
            
        }else if(f==2){
            scanf("%d %d",&u,&x);
            if(g[u]==false){
                g[u]=true;
                memset(b,0,sizeof(b));
                make(a,s,u,u,b);
            }   
            if(arr[u]>x)
                    arr[u]=x;
            if(!s[u].empty()){
                for(it=s[u].begin();it!=s[u].end();it++){
                    z1=*it;
                    if(arr[z1]>x){
                        arr[z1]=x;
                    }
                    
                }
            }
            
        }else {
            scanf("%d",&u);
            printf("%d\n",arr[u]);
           
        }
    }

    return 0;
}