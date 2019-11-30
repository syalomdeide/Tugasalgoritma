#include <iostream>

using namespace std;

int main (){
	
	int p = 7;
	int l= 10;
	int t= 8;
	
	int volume = p*l*t;
	
	if(volume<100){
		cout<<"Balok kecil :"<<volume<<"cm3";
	}else if(volume>=100&&volume<=200){
		cout<<"Balok sedang :"<<volume<<"cm3";
	}else if(volume>200){
		cout<<"Balok Besar :"<<volume<<"cm3";
	}
}
