    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n,sum=0,sum2=0;
        cin >> n;
     
        vector<vector<int>>a(n, vector<int>(n));
     
        for (int i = 0; i < n; i++) {
            for(int j = 0;j<n;j++){
     
                cin >> a[i][j];
            }
        }
         int i  = 0;
            for(int j = 0;j<n;j++){
               sum += a[i][j];
            sum2+= a[i][n-j-1];
                i+=1;
     
            }
     
            cout<<abs(sum-sum2);
     
    return 0;
    }