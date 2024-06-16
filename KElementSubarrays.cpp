#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int N,k,i,start,sum=0,element;
        cin >> N;
        cin>> k;
        vector<int>A;

        for (i = 0; i < N; i++) {
            cin >> element;
            A.push_back(element);
        }
        for(i = 0;i< k;i++)
        {
            sum += A[i];
        }
        cout<<sum<<endl;
        for(start = 1;start < N-k + 1 ;start++){
            sum = sum - A[start-1] + A[start+k-1];\
            cout<< sum<<"  "<<endl;
        }
}
