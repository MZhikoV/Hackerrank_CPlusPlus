#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int>grades;

    int num;
    cin >> num;

    while (num--) {
        int operation;
        cin >> operation;

        string name;
        cin >> name;

        switch (operation) {
        case 1:
            int grade; cin >> grade; grades[name] += grade; break;
        case 2:
            grades.erase(name); break;
        case 3:
            auto it = grades.find(name);
            if (it != grades.end()) {
                cout << it->second << endl;
            }
            else {
                cout << '0' << endl;
            }
            break;
        }
        return 0;
    }

    return 0;
}



//Input
/*
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
*/

//output

/*
30
20
0
*/