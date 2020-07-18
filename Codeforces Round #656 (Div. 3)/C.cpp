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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<ll> a(n);
        for(ll i=0;i<n;i++) 
        cin>>a[i];
        
        reverse(a.begin(), a.end());
        
        int p=a[0],cur;
        int ref=n;
        int f=0;
        for(int i=1;i<n;i++)
        {
            cur = a[i];
            if(cur<p)
            f=1;
            else if(f==1 and cur>p)
            {
                ref=i;break;
            }
            p=cur;
        }
        cout<<n-ref<<endl;
    }
}
	
