#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, i, arr[50], cari, atas, bawah, tengah;
    cout <<"Masukkan jumlah angka : ";
    cin>>n;
    cout <<"Masukkan " <<n<< " angka :\n";
    for (i=0; i<n; i++)
    {
        cin>>arr[1];
    }
    cout <<"Masukkan angka yang akan dicari :";
    cin>>cari;
    atas = 0;
    bawah = n-1;
    tengah = (atas+bawah)/2;
    while (atas <= bawah)
    {
        if(arr[tengah] < cari)
        {
            atas = tengah + 1;
        }
        else if(arr[tengah] == cari)
        {
            cout<<cari<<" ditemukan pada lokasi "<<tengah+1<<"\n";
            break;
        }
        else
        {
            bawah = tengah - 1;
        }
        tengah = (atas + atas)/2; 
    }
    if(atas > bawah)
    {
        cout<<"Tidak ditemukan!\n"<<cari<<" tidak termasuk dalam inputan ";
    }
    return 0;
}