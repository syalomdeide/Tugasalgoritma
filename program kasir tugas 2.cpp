#include <iostream>
using namespace std;

int main (){
	int barang;
	int uang;
	int jumlah_barang;
	int harga_sabun_cuci = 15000;
	int harga_oreo = 5000;
	int harga_susu_ultra_milk = 5000;
	int harga_roti = 10000;
	int harga_thaitea = 8000;
	
	cout<<"Daftar barang \n"<<"1.Sabun_cuci = "<<harga_sabun_cuci;
	cout<<"\n 2.Oreo = "<<harga_oreo;
	cout<<"\n 3.susu_ultra_milk = "<<harga_susu_ultra_milk;
	cout<<"\n 4.roti = "<<harga_roti;
	cout<<"\n 5. thaitea = "<<harga_thaitea<<"\n";
	cin>>barang;
	
	switch(barang){
		case 1 :
			cout<<"Sabun_cuci = "<<harga_sabun_cuci;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_sabun_cuci * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_sabun_cuci * jumlah_barang);
			break;
		case 2 :
			cout<<"oreo = "<<harga_oreo;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_oreo * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_oreo * jumlah_barang);
			break;
		case 3 :
			cout<<"Susu_ultra_milk = "<<harga_susu_ultra_milk;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_susu_ultra_milk * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_susu_ultra_milk * jumlah_barang);
			break;
		case 4 :
			cout<<"Roti = "<<harga_roti;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_roti * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_roti * jumlah_barang);
			break;
		case 5 :
			cout<<"thaitea = "<<harga_thaitea;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_thaitea * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_thaitea * jumlah_barang);
			break;
		default :
			cout<<"stok habis";
	}
}
