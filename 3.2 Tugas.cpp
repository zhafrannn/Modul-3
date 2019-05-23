#include<iostream>
using namespace std;
int main()

{
	float a,b,c,L,V,phi=3.14;
	int pil;
	cout<< "Program Perhitungan Luas Permukaan dan Volume\n";
	cout<< "Menu Program :\n";
	cout<< "1. Balok\n";
	cout<< "2. Tabung\n";
	cout<< "3. Bola\n";
	cout<< "_________________\n";
	cout<< "Pilihan Anda : " ;
	cin>> pil;
	cout<< "_________________\n";
	switch(pil)
	{
		case 1:
			cout<< "Masukan Panjang : ";
			cin>> a;
			cout<< "Masukan Lebar : ";
			cin>> b;
			cout<< "Masukan Tinggi : ";
			cin>> c;
			L=2*(a*b+b*c+a*c);
			V=a*b*c;
			cout<< "Luas Permukaan : " << L << endl;
			cout<< "Volume : " << V << endl;
			break;
			
		case 2:
			cout<< "Masukan Jari-Jari : ";
			cin>> a;
			cout<< "Masukan Tinggi : ";
			cin>> b;
			L=(2*phi*a*a)+(2*phi*a*b);
			V=2*phi*a*a*b;
			cout<< "Luas Permukaan : " << L << endl;
			cout<< "Volume : " << V << endl;
			break;
			
		case 3:
			cout<< "Masukan Jari-Jari : ";
			cin>> a;
			L=4*phi*a*a;
			V=4*phi*a*a*a/3;
			cout<< "Luas Permukaan : " << L << endl;
			cout<< "Volume : " << V << endl;
			break;
			
		default :
		cout<< "Maaf, anda salah input" ;
			
			
	}
}
