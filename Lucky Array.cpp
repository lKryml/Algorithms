

    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
     
    void Solve(){
        int n;
        vector<int>vektor;
        map<int,int> niggarray;
     
        cin >> n;
        int minElement = INT_MAX;
        for(int i =0;i<n;i++){
            int element;
            cin >> element;
            vektor.push_back(element);
        }
     
        for(int i = 0;i<n;i++){
                niggarray[vektor[i]]++;
    //        minElement = min(minElement, vektor[i]);
     
        }
     
        cout << ((niggarray.begin()->second) % 2 == 1 ? "Lucky" : "Unlucky") << endl;
     
    }
    int main() {
        Solve();
        return 0;
    }