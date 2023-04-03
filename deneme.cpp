#include <iostream>
using namespace std;

int main()
{
	cout<<"Hello world"<<endl; //Berat tarafından eklendi
	cout << "Merhaba Dunya!"; //ömer tarafından eklendi
	//1 - 100 arasında rastgele 6 sayı
	int sayi = 1;
	while (sayi < 7)
	{
		cout << "Sayilar: " << rand() % 100<< " " << endl;
		sayi=sayi+1;

}


}
