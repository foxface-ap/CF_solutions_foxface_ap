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

int func(string s , char a)
{       
        int n=s.length();
         
        if(n==1 && s[0]==a)
        return 0;
        else if(n==1)
        return 1;

        int mid = n/2;
        
        int cnt1 =  func(string(s.begin() + mid,s.end()), a+1);
         cnt1 += n/2 - count(s.begin(),s.begin() + mid, a); 
        
        int cnt2 =  func(string(s.begin(),s.begin()+mid), a+1);        
         cnt2 += n/2 -  count(s.begin() + mid,s.end(), a);

        return min(cnt1,cnt2);
}
	
int main()
{
        int t;cin>>t;
        while(t--)
        {
              int n;cin>>n;
              string s;cin>>s;
              
              cout<<func(s,'a')<<endl;

        }
}
	
	
