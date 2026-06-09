#include <iostream>
using namespace std;
void printSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;
    int array[4]={1, 2, 3, 4};
    int n =4;
    // cout << "Enter the elements of the array:" << endl;
    // for (int i = 0; i < n; i++) {
    //     cin >> array[i];
    // }
    cout << "All subarrays are:" << endl;
    printSubarrays(array, n);
    return 0;
}