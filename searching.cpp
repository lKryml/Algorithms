#include <iostream>
#include <vector>
using namespace std;

void solve(){

int n,x;
cin >> n;
vector<int> arr;

    for(int i = 0;i<n;i++){
            int element;
            cin >> element;
            arr.push_back(element);
        }

        cin>> x;
    for(int i = 0;i<n;i++){
        if(arr[i] == x){
            cout<< i;
            return;
        }
    }
    cout<< -1;



};


int main()
{
    solve();
    return 0;
}
