#include<bits/stdc++.h>
using namespace std;


int main(){
int tc,n,min,s,t,i,p;
cin>>t;
vector <int> a,b;
while(tc>0){
         s=0;t=0;
         cin>>n;
         for(i=0;i<n;i++){
                  cin>>a[i];
         }
         for(i=0;i<n;i++){
                  cin>>b[i];
         }
         i=0;
         while(i<n){
                  s=s+a[i];
                  i++;
                  s+=b[i];
                  i++;
         }
         i=0;
         while(i<n){
                  t=t+b[i];
                  i++;
                  t+=a[i];
                  i++;
         }
         p=(s>t)?t:s;
         cout<<p;
         tc--;

}
//if(tc>10){ return 0;}
}
