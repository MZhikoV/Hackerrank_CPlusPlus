#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> input;

    for (size_t i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        input.push_back(inp);
    }

    int q;
    cin >> q;

    vector<int>::iterator it1, low;

    for (size_t j = 0; j < q; j++) {
        int inpq;
        cin >> inpq;

        //     it1=find(input.begin(),input.end(),inpq);
        //     if (it1!=input.end()) {
        //         cout<<"Yes"<<' '<<it1-input.begin()+1<<endl;
        //     }
        //     else {
        //         cout<<"No"<<' ';
        //         low=lower_bound(input.begin(), input.end(), inpq);
        //         cout<<low-input.begin()+1<<endl;
        //     }


        it1 = lower_bound(input.begin(), input.end(), inpq);
        if (inpq == *it1) {
            cout << "Yes" << ' ';
        }
        else {
            cout << "No" << ' ';
        }

        cout << it1 - input.begin() + 1 << endl;


    }
    return 0;
}
