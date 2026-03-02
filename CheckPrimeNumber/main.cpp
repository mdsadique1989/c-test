#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    bool prime = true;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) prime = false;
    cout << (prime ? "Prime" : "Not Prime") << endl;
    return 0;
}
