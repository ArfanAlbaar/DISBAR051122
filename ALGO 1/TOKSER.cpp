#include<iostream>
using namespace std;

int main()
{
	int pil; // Untuk memilih barang
	float total = 0, disc = 0, hitung, hasil;
	char ask; // Untuk memilih lanjut atau tidak
	
	// Menampilkan barang yang dijual
	menu:
	cout<<
	"TOKO SEDERHANA \n"<<
	"1. Processor Rp. 10 \n"<<
	"2. Motherboard Rp. 20 \n"<<
	"3. VGA Rp. 30 \n";
	
	// Input pilihan barang
	cout<<"Masukkan Angka Pilihan = "; cin>>pil;
	
	if(pil == 1)
	{
		total = total + 10;
	} else if(pil == 2)
	{
		total = total + 20;
	} else if(pil == 3)
	{
		total = total + 30;
	} else {
		system("cls");
		cout<<
		"============================== \n"<<
		"|| ANGKA SALAH, PILIH ULANG || \n"<<
		"============================== \n\n";
		goto menu;
	}

	// Menampilkan total barang di beli
	cout<<"Total Beli = Rp. "<<total<<endl;
	
	// Apakah butuh barang lagi atau tidak
	tanya:
	cout<<"Apakah ingin beli lagi (Y/N)? "; cin>>ask;
	ask = toupper(ask);
	if(ask == 'Y')
	{
		system("cls");
		goto menu;
	} else if (ask != 'N')
	{
		cout<<"Masukkan Y/N"<<endl;
		goto tanya;
	}
	
	// Menentukan diskon yang didapat
	if(total > 300)
	{
		disc = 0.5; // 50%
	} else if(total > 200)
	{
		disc = 0.2; // 20%
	} else if(total > 100){

		disc = 0.1; // 10%
	}
	
	hitung = total * disc; // Hitung diskon
	hasil = total - hitung; // Hitung total setelah dikurang diskon
	
	cout<<
	"\n===================================== \n"<<
	"===========NOTA PEMBAYARAN=========== \n"<<
	"===================================== \n";
	
	cout<<"Total Beli = Rp. "<<total<<endl;
	cout<<"Total Discount = Rp. "<<hitung<<endl;
	cout<<"Jumlah Pembayaran = Rp. "<<hasil<<endl;
	
	cout<<"=====================================";
	return 0;
}
