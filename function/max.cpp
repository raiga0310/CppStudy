#include <bits/stdc++.h>
using namespace std;

int max(int a,int b);
int main() {
    int a,b;
    cin >> a >> b;

    cout << max(a,b) << endl;
}

int max(int a,int b) {
    if(a > b)
        return a;
    else
        return b;
}
