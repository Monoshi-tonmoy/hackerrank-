#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    string s[n];


    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>q;
    string query[q];
    int count[q];
    for(int i=0;i<q;i++){
        cin>>query[i];
    }
    for(int i=0;i<q;i++){
        count[i]=0;
    }

    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(s[j]==query[i]){
                count[i]=count[i]+1;
            }
        }
    }
    for(int i=0;i<q;i++){
        cout<<count[i]<<endl;
    }
}
