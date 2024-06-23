    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    int main() {
     
            int N,i,max,min,element,maxi,mini;
            cin >> N;
            max = INT_MIN;
            min = INT_MAX;
     
            vector<int>A;
            for (i = 0; i < N; i++) {
                cin >> element;
     
                A.push_back(element);
            }
        for (i = 0; i < N; i++) {
            if(A[i] > max) {max = A[i]; maxi = i;}
            if(A[i] < min) {min = A[i]; mini = i;}
     
        }
            swap(A[maxi],A[mini]);
        for (i = 0; i < N; i++) {
            cout<< A[i]<<" ";
        }
     
     
        return 0;
    }