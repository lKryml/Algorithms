#include <iostream>
#include <vector>
using namespace std;

void solve(){

long long n,sum = 0;
cin >> n;
vector<long long> arr;

    for(int i = 0;i<n;i++){
            int element;
            cin >> element;
            arr.push_back(element);
        }

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    cout<< abs(sum);


};


int main()
{
    solve();
    return 0;
}
