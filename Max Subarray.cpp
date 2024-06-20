    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    int main() {
     
        int T;
        cin>>T;
    for(int Z=1 ; Z<=T; Z++)
        {
     
            int N;
            cin>>N;
            int arr [N];
            for(int i =0 ; i<N;i++)
            {
                cin>>arr[i];
            }
     
            for (int start = 0; start < N;start++) {
     
                int maxNum = arr[start];
     
                for (int end = start; end < N; end++) {
                    maxNum = max(maxNum, arr[end]);
                    cout << maxNum << " ";
                }
     
     
     
     
            }
            cout<<endl;
        }
     
     
        return 0;
    }