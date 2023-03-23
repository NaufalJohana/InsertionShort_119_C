#include <iostream>
using namespace std;

int arr[20];	// Membuat array dengan panjang data 20
int n;			//  Membuat variable inputan n

void input()
	// Procedure Input
{while (true)
{
		cout << "Memasukkan Jumlah Data pada Array : ";	// Membuat inputan julah element array
		cin >> n;										// Memanggil variable inputan n
		if (n <= 20)
		{	// Membuar kondisi n tidak lebih dari 20
				break;

		}
		else
		{
			cout << "\n Arrray yang anda masukkan maksimal 20 elemen. \n"	// Menampilkan pesan jika data
		}
	}
}
cout << endl;												// Membuat jarak per baris progan
cout << "===========================" << endl;					// Membuat tampilan data element Array
