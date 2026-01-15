#include <iostream>
#include <string>

using namespace std;




int ma1in() {

	double nilai[10];
	double total = 0.0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Masukkan nilai ke-" << (i + 1) << ": ";
		cin >> nilai[i];
		total += nilai[i];
	}
	double rataRata = total / 10.0;
	cout << "Rata-rata nilai: " << rataRata << endl;
	system("pause");
	return 0;
}
