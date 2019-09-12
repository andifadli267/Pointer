#include <iostream>
using namespace std;

class siswa{
	public:
		int noInduk;
		void showInduk(){
			cout<<"No Induk = "<<noInduk<<endl;
		}
};

int main(){
	siswa *budi = new siswa{1};
	budi->noInduk = 2;
	budi->showInduk();
	delete budi;
	return 0;
}
