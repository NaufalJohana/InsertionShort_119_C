#include <iostream>
using namespace std;

int arr[20];	// Membuat array dengan panjang data 20
int n;			//  Membuat variable inputan n

void input()
	// Procedure Input
{while (true)
{
	{
		cout << "Memasukkan Jumlah Data pada Array : ";	// Membuat inputan julah element array
		cin >> n;										// Memanggil variable inputan n
		if (n <= 20)
		{	// Membuar kondisi n tidak lebih dari 20
				break;

		}
		else
		{
			cout << "\n Arrray yang anda masukkan maksimal 20 elemen. \n"; //enampilkan pesan jika data
		}
	}

}
	cout << endl;												// Membuat jarak per baris program
	cout << "===========================" << endl;					// Membuat tampilan data element Array
	cout << "Masukan Element Array" << endl;
	cout << "===========================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << " data ke-n" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
// prosedure insertionshort
void insertionshort()
{
	int temp;//buat variable daya temporer atau penyimpanan sementara
	int j; // membuat variable j sebagai panda

	for (int i = 1; i < n; i++) // membuat loping dengan i di mulai dari 1 hinggs n-1
	{
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << endl;
		cout << "\nPass" << i << ": ";
		for (int k = 0 ;k < n; k++)
		{
			cout << arr[k] << n; " "; 
		}

	}
}

void display()
{
	cout << endl;					// output baris kosong
	cout << "total element movement" << n - 1 << endl; // cout movement element
	cout << "\n==========================" << endl;// output ke layar
	cout << "element array yang telah tersusun" << endl; // output ke layar
	cout << "============================" << endl; // output ke layar

	for (int j = 0; j < n; j++)
	{						//loping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl; // output ke layar

	}
	cout << endl; //utput baris kosong
}


int main()
{
	input();	// memanggil input
	insertionshort();	// memanggil insertionshort
	display();	// memanggil display 
}