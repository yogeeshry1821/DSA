#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    long long t;
    cin >> t;
    while (t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(a*d==b*c){
            cout<<0<<endl;
        }
        else
        {
            long long p=b*c, q=a*d;
            if((p)!=0 && (q)%(p)==0){
                cout<<1<<endl;
            }
            else if((q)!=0 && (p)%(q)==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        
    }
}