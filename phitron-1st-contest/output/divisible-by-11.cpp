#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    long long oddSum = 0, evenSum = 0;
    int len = num.size();

    for (int i = 0; i < len; i++) {
        int digit = num[len - 1 - i] - '0'; 
        if (i % 2 == 0){ 
        oddSum += digit; 
        } 
        else {
            evenSum += digit;
                     }            
    }

    int diff = abs(oddSum - evenSum);

    if (diff % 11 == 0) cout << "YES"<<endl;
    else cout << "NO"<<endl;

    return 0;
}
