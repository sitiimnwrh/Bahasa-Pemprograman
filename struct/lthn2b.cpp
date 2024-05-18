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

void sequentialSearchAndUpdate(vector<int> &data, int target, int newValue) {
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == target) {
            data[i] = newValue;
            cout << "Nilai " << target << " ditemukan dan diganti dengan " << newValue << endl;
            return; // Jika target ditemukan, keluar dari fungsi
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

    sequentialSearchAndUpdate(data_array, targetValue, newValue);

    cout << "Data setelah perubahan:" << endl;
    for (int i = 0; i < data_array.size(); ++i) {
        cout << data_array[i] << " ";
    }
    cout << endl;

    return 0;
}
