#include <iostream>
#include <vector>
using namespace std;

void solve(){

int n;
cin >> n;
vector<int> arr;
for(int i = 0;i<n;i++){
    int element;
    cin >> element;
    arr.push_back(element);
}
for(int i = 0;i<n;i++){
    if(arr[i] <= 10){
        cout << "A[" << i << "] = "<<arr[i]<<endl;
    }
}

}
int main()
{
    solve();
    return 0;
}
