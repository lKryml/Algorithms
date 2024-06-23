

    #include <iostream>
    #include <vector>
    using namespace std;
     
    void solve(){
     
    long long n;
    cin >> n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
     
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
     
    }
    int main()
    {
        solve();
        return 0;
    }