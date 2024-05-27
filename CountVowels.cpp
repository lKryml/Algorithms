#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int f(string s,int i,int c,map<char,int>&mp)
{

    if(i== s.size())return c;


    if(mp[s[i]])c++;

    return f(s,i+1,c,mp);

}

int main()
{

    string s;
    cin>>s;
    map<char,int>mp{
        {'a',1},{'e',1},{'o',1},{'i',1},{'u',1}
    };

    for(int i= 0 ; i< s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    cout<< f(s,0,0,mp);


    return 0;
}