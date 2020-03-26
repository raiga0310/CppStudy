//
// Created by raiga on 2020/03/26.
//
#include <bits/stdc++.h>
using namespace std;

int min(int a,int b);
int main() {
    int a,b;

    cin >> a >> b;

    cout << min(a,b) << endl;
}

int min(int a,int b) {
    if(a > b)
        return b;
    else
        return a;
}