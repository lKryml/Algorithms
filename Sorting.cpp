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
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
            swap(arr[i],arr[j]);
        }
        }
    }
     
    for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    }
     
    int main()
    {
        solve();
        return 0;
    }