#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> inputData() {
    vector<int> data;
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> value;
        data.push_back(value);
    }
    sort(data.begin(), data.end()); // Mengurutkan array
    return data;
}

void binarySearchAndUpdate(vector<int> &data, int target, int newValue) {
    int left = 0;
    int right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid] == target) {
            data[mid] = newValue;
            cout << "Nilai " << target << " ditemukan dan diganti dengan " << newValue << endl;
            return;
        } else if (data[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "Nilai " << target << " tidak ditemukan dalam array." << endl;
}

int main() {
    vector<int> data_array = inputData();
    cout << "Data yang dimasukkan:" << endl;
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i] << " ";
    }
    cout << endl;

    int targetValue, newValue;
    cout << "Masukkan nilai yang ingin dicari dan diganti: ";
    cin >> targetValue >> newValue;

    binarySearchAndUpdate(data_array, targetValue, newValue);

    cout << "Data setelah perubahan:" << endl;
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i] << " ";
    }
    cout << endl;

    return 0;
}
