#include <iostream>     // cout
#include <ctime>        // time
#include <cstdlib>      // srand,rand
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> box(m);
    for (int i = 0; i < m; ++i) {
        box.at(i) = rand ()% n + 1;
    }
    for (int i = 0; i < box.size(); i++){
        cout << box.at(i);
        cout << " ";
    }
    cout << endl;
}