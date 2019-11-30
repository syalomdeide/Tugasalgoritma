#include <iostream>
using namespace std;
int main (){
	
	int item;	
	int uang;
	int harga_Baju = 150000;
	int harga_Celana= 350000;
	int harga_Hoodie = 250000;
	int harga_sepatu = 500000;
	int harga_Denim_jacket = 450000;

	cout<<"\n1.Baju \n"<<"2. Celana \n"<<"3. Hoodie \n"<<"4. Denim_jacket \n"<<"5.Sepatu \n";
	cin>>item;
	
	switch(item){
		case 1 :
			cout<<"Baju = "<<harga_Baju;
			cout<<"\n mendapatkan potongan harga 20000 \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-(harga_Baju-20000);
			break;	
		case 2 :
			cout<<"Celana = "<<harga_Celana;
			cout<<"\n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_Celana;
			break;	
		case 3 :
			cout<<"Hoodie = "<<harga_Hoodie;
			cout<<"\n mendapatkan diskon 50% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_Hoodie * 50/100;
			break;
		case 4 :
			cout<<"Denim_jacket = "<<harga_Denim_jacket;
			cout<<" \n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_Denim_jacket;
			break;
		case 5 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"\n mendapatkan diskon 30% + 20% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_sepatu * 30/100 - 30000;
			break;
		default :
			cout<<"pilihan item salah";
				
	}
}
