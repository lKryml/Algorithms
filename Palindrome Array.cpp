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
    for(int i =0,j=n-1;!i<j;i++,j--){
    if (arr.empty()) {
        cout<<"NO";
        return;  // Or return false depending on your definition
    }
    if(arr[i] != arr[j]){
    cout<<"NO";
    return;
    }
     
    }
    cout<<"YES";
     
    }
     
    int main()
    {
        solve();
        return 0;
    }