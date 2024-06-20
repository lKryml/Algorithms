    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n, x;
        cin >> n;
        vector<int> a;
        vector<int> b;
     
     
        for (int i = 0; i < n; i++) {
            cin >> x;
     
            a.push_back(x);
     
        }
     
        for (int i = 0; i < n; i++) {
            cin >> x;
     
            b.push_back(x);
     
     
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(b == a){
            cout<<"yes";
        }else
        {cout<<"no";}
     
    }