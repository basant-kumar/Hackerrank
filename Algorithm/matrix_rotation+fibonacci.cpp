#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define max 2000
using namespace std;

void swap(long long int &a,long long int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

long long int hackonacci(long long int n)
{
  long long int a = 1, b = 2, c=3,d, i;
    if(n==1)
        return a;
    else if(n==2)
        return b;
    else if(n==3)
        return c;
    
  for (i = 4; i <= n; i++)
  {
     d = (3*a) + (2*b) + (1*c);
     a = b;
     b = c;
     c = d;
  }
  return c;
}
/*
long long int hackonacci(long long int n)
{
  long long int f[n+1];
  long long int i;

  f[1] = 1;
  f[2] = 2;
  f[3] = 3;  
 
  for (i = 4; i <= n; i++)
  {
      f[i] = (1*f[i-1]) + (2*f[i-2]) + (3*f[i-3]);
  }
 
  return f[n];
}

long long int hackonacci(long long int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 3;
    
    return ((1*hackonacci(n-1)) + (2*hackonacci(n-2)) + (3*hackonacci(n-3)));
  
}*/


 int main() {
    long long int n,q;
    cin>>n>>q;
    char matrix[max][max];
    char m[max][max];
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
            long long int z=pow(((i+1)*(j+1)),2);
            long long int result = hackonacci(z);
            if(result%2==0){
                matrix[i][j]='X';
            }  
            else{
                matrix[i][j]='Y';
            }
                
        }
    }
   // cout<<"marte marte bach gaya"<<endl;
    while(q--){
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<n;j++){
                m[i][j]=matrix[i][j];   
            }
        }
        long long int angle,count=0;
        cin>>angle;
        long long int nor=(angle/90)%4;
        long long int flag=1;
        while(nor--){
            long long int last=n-1;
            long long int nol=n/2;
            long long int level=0;
            while(level<nol){
                for(long long int i=level;i<last;++i){
                    swap(m[level][i],m[i][last]);
                    swap(m[level][i],m[last][last-i+level]);
                    swap(m[level][i],m[last-i+level][level]);
                }
                ++level;
                --last;
            }
        }
        
        
        for(long long int i=0;i<n;++i){
            for(long long int j=0;j<n;++j){
                if(matrix[i][j]!=m[i][j])
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
