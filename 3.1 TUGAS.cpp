#include<iostream>
using namespace std;
int main()

{
	float a,b,c;
	cout<< "Masukan Bilangan 1 : " ;
	cin>> a;
	cout<< "Masukan Bilangan 2 : " ;
	cin>> b;
	cout<< "Masukan Bilangan 3 : " ;
	cin>> c;
	
	if(a>b){
		if(a>c)
		cout << a << " adalah bilangan terbesar";
		else
		cout << c << " adalah bilangan terbesar";
	}
	else{
		if(b>c)
		cout << b << " adalah bilangan terbesar";
		else
		cout << c << " adalah bilangan terbesar";
	}
}
	
