#include <iostream>

using namespace std;

int main(){
	
	int TIU,TWK,TKP;
	
	cout<<"Masukkan Nilai TIU anda = ";
	cin>>TIU;
	cout<<"Masukkan Nilai TWK anda =";
	cin>>TWK;
	cout<<"Masukkan Nilai TKP anda =";
	cin>>TKP;
	if(TIU>=80&&TWK>=100&&TKP>=140){
		cout<<" \n ANDA LULUS TES CPNS";
		cout<<"Dengan Total Nilai= "<<TIU+TWK+TKP;
	}else{
		cout<<"ANDA TIDAK LULUS TES CPNS \n";
		cout<<"Total Nilai Anda ="<<TIU+TWK+TKP;
	}
}
