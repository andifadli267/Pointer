#include <iostream>
using namespace std;

void tambah(int *angka){
	*angka +=20;
}

int main(){
	int nilai = 10;
	cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
	tambah (&nilai); //Memasukkan alamat variabel nilai fungsi tambah
	cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
	return 0;
}
