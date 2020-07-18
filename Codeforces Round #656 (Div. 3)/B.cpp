#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define speed ios_base::sync_with_stdio(0); cin.tie(0);
#define FL(i,a,n) for(ll i=a;i<n;i++)
#define even(x) (((x)%(2))==(0))
#define odd(x) (((x)%(2))==(1))
#define meme(x) memset(x, 0, sizeof(x))

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
	
int main()
{
        int t;cin>>t;
        while(t--)
        {
                ll n;cin>>n;
                n=n*2;
                ll a[n];
                set<int> s;
                for(int i=0;i<n;i++)
                {
                        cin>>a[i];
                        if(s.find(a[i])==s.end())
                        {cout<<a[i]<<" ";
                        s.insert(a[i]);}
                }
                
                cout<<endl;
                
        }
    
}
	
	
