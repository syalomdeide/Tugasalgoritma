#include <iostream>

using namespace std;

int main(){
	
	int array[5]={4,6,7,5,7};
	int jumlah = 0;
	int kali = 1;

	for(int i=0;i<5;i++){
		
		jumlah=jumlah+array[i];
		kali = kali*array[i];
	}
	
	cout<<"hasil penjumlah ="<<jumlah;
	cout<<"\nhasil perkalian ="<<kali;
}
