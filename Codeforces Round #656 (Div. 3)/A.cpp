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
                ll a[3];
                for(int i=0;i<3;i++)
                cin>>a[i];

                sort(a,a+3);
                ll cnt=0;

                for(int i=0;i<3;i++)
                {
                        if(a[i]==a[2])
                        cnt++;
                }

                if(cnt==1)
                cout<<"NO\n";
                else
                {
                        if(cnt==3)
                        {
                                cout<<"YES\n";
                                cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<endl; 
                        }
                        if(cnt==2)
                        {
                                cout<<"YES\n";
                                cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl; 
                        }
                }   
                
        }
    
}
	
	
