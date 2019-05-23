#include<iostream>
using namespace std;
int main()

{
	float a,b,p;
	int pil;
	cout<< "Program Menghitung keidealan tubuh";
	cout<< "Menu Program :\n";
	cout<< "1. Laki-laki\n";
	cout<< "2. Perempuan\n";
	cout<< "______________\n";
	cout<< "Pilihan Anda : ";
	cin>> pil;
	cout<< "______________\n";
	switch(pil)
	{
		case 1:
			cout<< "Masukan Berat Badan : ";
			cin>> a;
			cout<< "Masukan Tinggi Badan : ";
			cin>> b;
			p= (b-100) - (b-100)*(0.1);
			if (p>=a-3 && p<=a+3)
				cout<< "Berat Badan ideal";
			else
				cout<< "Berat Badan tidak ideal";
				break;
			
			
		case 2:
			cout<< "Masukan Berat Badan : ";
			cin>> a;
			cout<< "Masukan Tinggi Badan : ";
			cin>> b;
			p=(b-100)-(b-100)*(0.1);
			if (p>=a-2 && p<=a+2)
				cout<< "Berat Badan ideal";
			else
				cout<< "Berat Badan tidak ideal";
			break;
		
		default : 
		cout<< "Maaf, anda salah input";
			
			
	}
}
