#include<bits/stdc++.h>
#define ll long long int
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define trace(x) cerr<<#x<<" : "<<x<<endl;
using namespace std;
int main()
{
    int t,flag=1;
    cin>>t;
    while(flag<=t)
    {
        string str,ans;
        cin>>str;
        int len=str.length(),active=0;
        for(int j=0;j<str[0]-48;j++){
            ans+='(';
            active++;
        }
        ans+=str[0];
        for(int i=1;i<len;i++){
            int diff=str[i-1]-str[i];
            if(diff==0)
            {
                ans+=str[i];
            }
            else if(diff<0)
            {
                for(int j=0;j<abs(diff);j++){
                    ans+='(';
                    active++;
                }
                ans+=str[i];
            }
            else
            {
                for(int j=0;j<diff;j++)
                {
                    ans+=')';
                    active--;
                }
                ans+=str[i];
            }
        }
        if(active>0)
        {
            for(int i=0;i<active;i++)
            {
                ans+=')';
            }
        }
        cout<<"Case "<<"#"<<flag++<<": "<<ans<<endl;
    }
}
