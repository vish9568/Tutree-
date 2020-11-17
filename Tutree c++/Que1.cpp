#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,lines;
    n=7;
    lines=2*n-1;
    string s;
    for(int i=1;i<=lines;i++){
        if(i<=(lines+1)/2)
        {
            int j=i-1;
            while((--j)>=0)
            {
                s+=" ";
            }
            j=i;
            while(j<=n)
            {
                s+=(to_string(j++)+" ");
            }
            cout<<s<<"\n";
            s="";
        }
        else
        {
            int j=2*n-i-1;
            while((--j)>=0){
                s+=" ";
            }
            j=2*n-i;
            while(j<=n){
                s+=(to_string(j++)+" ");
            }
            cout<<s<<"\n";
            s="";
        }
    }
}
