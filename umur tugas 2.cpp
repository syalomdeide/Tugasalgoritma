#include <iostream>
using namespace std;

int main(){
	
	int umur;
	
	cout<<"masukkan umur :";
	cin>>umur;
	
	if (umur>=0&&umur<=1){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori bayi \n";
	}else if(umur>1&&umur<=3){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori batita \n";
	}else if(umur>3&&umur<=5){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori balita";
	}else if(umur>5&&umur<=12){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori anak-anak";
	}else if(umur>12&&umur<=17){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori remaja";
	}else if(umur>17&&umur<=30){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori pemuda";
	}else if(umur>30&&umur<=60){
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori dewasa";
	}else{
		cout<<umur<<"tahun \n";
		cout<<"termasuk dalam kategori lansia";
	}
}
