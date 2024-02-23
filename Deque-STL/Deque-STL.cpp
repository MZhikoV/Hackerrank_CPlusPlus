#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k) {
    //Write your code here.
    deque<int> matrix(arr, arr + n);


    while (matrix.size() >= k) {

       // cout << *max_element(matrix.begin(), matrix.begin() + k) << ' ';

        printf("%d%c", *max_element(matrix.begin(), matrix.begin() + k),' ');


        matrix.pop_front();

    }
    cout << endl;
    printf("\n");
}


int main() {

    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[10000];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}