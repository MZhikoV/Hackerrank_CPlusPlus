#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//const int MAX=10000;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<int> inpData;
    vector<int> arrayInp;

    int n, q;
    cin >> n >> q;

    for (size_t i = 0; i < n; i++) {
        int data;
        cin >> data;
        inpData.push_back(data);
        for (size_t j = 0; j < data; j++) {
            int temp;
            cin >> temp;
            arrayInp.push_back(temp);
        }
    }

    for (size_t k = 0; k < q; k++) {
        int a, b;
        cin >> a >> b;

        int sumIdxI = 0;
        for (size_t i = 0; i < a; i++) {
            sumIdxI += inpData[i];
        }
        cout << arrayInp[sumIdxI + b] << endl;
    }

    cout << "Check debug!" << endl;




    // long long int a[MAX][MAX];
    // int qi,qj;
    // int n,q;
    // cin>>n>>q;
    // for (int i=0,el; i<n; i++) {
    //     cin>>el;
    //     for (int j=0; j<el; j++) {
    //         cin>>a[i][j];
    //     }
    // }
    // for (int qq=0; qq<q;qq++) {
    //     cin>>qi>>qj;
    //     cout<<a[qi][qj]<<endl;
    // }


    return 0;
}
