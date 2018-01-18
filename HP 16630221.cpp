#include <iostream>
#include <string>
using namespace std;

class Handphone{
	public:
		void harga(string price);
		string kualitas, ram, procesor;
		
};

int main (){
	Handphone samsung, iphone, xiaomi;
	
	samsung.kualitas = "Fitur terbaru ";
	iphone.kualitas = " Sangat Mewah ";
	xiaomi.kualitas   = " Murah dan Higt Performa ";
	
	cout << (samsung.kualitas);
	samsung.harga(" Standar ");
	
	iphone.harga(" Menengah Keatas ");
}

void Handphone::harga(string price){
	cout<<" Harganya "<<price<<" Sesuai Keuangan Anda \n";
}

