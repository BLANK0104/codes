#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    insertionSort(arr);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    arr = {5, 2, 4, 6, 1, 3};
    selectionSort(arr);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
