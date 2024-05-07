#include <iostream>
using namespace std;

class mahasiswa
{
public:
	int nim;
	void showNim()
	{
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 }; //Pointer objek mahasiswa
	mhs->showNim();
	mhs->showNim();
	delete mhs;
	return 0;
}