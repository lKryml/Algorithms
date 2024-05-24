#include <iostream>
#include <vector>
using namespace std;

void solve(){

long long n,index,min = 999999;
cin >> n;
vector<int> arr;
for(int i = 0;i<n;i++){
    int element;
    cin >> element;
    arr.push_back(element);
}
for(int i = 0;i<n;i++){
    if(arr[i] < min){
        min = arr[i];
        index = i+1;
    }

}
cout<<min<< " "<< index ;
}
int main()
{
    solve();
    return 0;
}
