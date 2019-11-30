#include <iostream>

using namespace std;

int main(){
	
	int n,hasil;
	
	cout<<"masukkan angka =";
	cin>>n;
	
	cout<<n<<"!= ";
	
	hasil=1;
	for(int bil=n;bil>=1;bil--){
		cout<<bil<<"*";
		hasil=hasil*bil;
		}
	cout<<"="<<hasil;
}
