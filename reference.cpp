#include <iostream>
using namespace std;

int main (){
	int a=5; //Memberikan nilai 5 pada variabel a
	int *b; //Mendeklarasikan variabel b sebagai pointer
	b = &a; //Mengkopikan alamat variabel a kedalam variabel pointer b
	cout<<"Nilai variabel a adalah "<<a<<endl;
	cout<<"Alamat variabel a adalah "<<&a<<endl;
	cout<<"Isi dari variabel b adalah "<<b<<endl;
	cout<<"Nilai yang tertampung dalam variabel b adalah "<<b<<endl;
	return 0;
}
