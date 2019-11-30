#include <iostream>
#include <cmath>
using namespace std;
float hitung_volume_kubus (int sisi){
	int kubus=sisi*sisi*sisi;
	return kubus;
}
float hitung_volume_balok (int p, int l, int t){
	int balok=p*l*t;
	return balok;
}
float hitung_volume_kerucut (int r, int tinggi, float phi){
	int kerucut=0.3*phi*r*r*tinggi;
	return kerucut;
}
int main (){
	int sisi, volumekubus;
	cout<<"Menghitung Volume Kubus : \n";
	cout<<"Menghitung Panjang Sisi :"; cin>>sisi;
	volumekubus=hitung_volume_kubus (sisi);
	cout<<"Volume Kubus ="<<volumekubus<<endl;
	
	int p,l,t, volumebalok;
	cout<<"Menghitung Volume Balok \n";
	cout<<"Masukkan panjang :";cin>>p;
	cout<<"Masukkan lebar :";cin>>l;
	cout<<"Masukkan tinggi :";cin>>t;
	volumebalok=hitung_volume_balok (p,l,t);
	cout<<"Volume balok ="<<volumebalok<<endl;
	
	int r,tinggi;
	float phi, volumekerucut;
	cout<<" Menghitung Volume Kerucut \n";
	cout<<"Masukkan jari-jari :";cin>>r;
	cout<<"Masukkan Tinggi :";cin>>tinggi;
	phi=3.14;
	volumekerucut=hitung_volume_kerucut (r,t,phi);
	cout<<"Volume Kerucut ="<<volumekerucut<<endl;
}
