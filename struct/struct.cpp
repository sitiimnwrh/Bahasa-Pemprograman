#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa{
    string name;
    string age;
    string address;
};

int main(){
    Mahasiswa mhs;
    mhs.name = "Siti";
    mhs.age = 20;
    mhs.address= "Kabupaten Tangerang";

    cout << "Name : " << mhs.name << endl;
    cout << "Age :" << mhs.age << endl;
    cout << "Address :" << mhs.address << endl;

    return 0;
}