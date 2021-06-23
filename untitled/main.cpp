#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,pos;
    char x;
    string s,s1;
    int l=s.size();
    int ll=s1.size();
    int r;
    cin>>n>>q;
    cin>>s;
    for(int i=1;i<=q;i++)
    {
        cin>>s1;
        if(s1=="pop_back"){
            //s[l-1]='\0';
            s.pop_back();

            l=l-1;
        }
        else if(s1=="front")
        {
            cout<<s.front()<<endl;
        }
        else if(s1=="back")
        {
            cout<<s.back()<<endl;
        }
        else if(s1=="sort")
        {
            cin>>ll>>r;
            sort(s.begin()+ll-1,s.begin()+r);
        }
        else if(s1=="reverse")
        {
            cin>>ll>>r;
            reverse(s.begin()+ll-1,s.begin()+r);
        }
        else if(s1=="print")
        {
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
        else if(s1=="substr")
        {
            cin>>ll>>r;
            string sub = s.substr(ll-1,r);
            cout<<sub<<endl;
        }
        else if(s1=="push_back")
        {
            cin>>x;
            s.push_back(x);
            l=l+1;
        }
    }
}