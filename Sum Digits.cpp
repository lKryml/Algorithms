    #include <iostream>
    #include <string>
     
    using namespace std;
     
    int main() {
        int N;
        cin >> N;
     
        string digits;
        cin >> digits;
     
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += digits[i] - '0';  // Convert char to int
        }
     
        cout << sum;
     
        return 0;
    }