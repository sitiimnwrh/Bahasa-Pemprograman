#include <iostream>
#include <vector>

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
    return data;
}

int main() {
    vector<int> data_array = inputData();
    cout << "Data yang dimasukkan:" << endl;
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i] << " ";
    }
    cout << endl;
    return 0;
}
