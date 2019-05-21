#include <conio.h>
#include <math.h>
#include <iostream.h>

int hitung(int x, int y)   //x day y = parameter input
{
  int ls;
  ls = x * y;
  return(ls);
}

void main()
{
   int pilih;
   int panjang,lebar,alas,tinggi,sisi;
   float luas;
   do
    {
      clrscr();
      cout<<" Pilihlah ------> "<<endl;
      cout<<"   1. Luas Persegi Panjang \n";
      cout<<"   2. Luas segitiga \n";
      cout<<"   3. Luas bujur sangkar \n";
      cout<<"   4. Selesai~~ \n";
      cout<<" Masukkan Pilihan Anda : ";cin>>pilih;

      switch (pilih)
      {
         case 1 : cout<<" Masukkan Nilai Panjang : "; cin>>panjang;
                  cout<<" Masukkan Nilai Lebar : "; cin>>lebar;
                  luas=hitung(panjang,lebar);
                  break;
         case 2 : cout<<" Masukkan Nilai Alas : "; cin>>alas;
                  cout<<" Masukkan Nilai Tinggi : "; cin>>tinggi;
                  luas=hitung(alas,tinggi)*0.5;
                  break;
         case 3 : cout<<" Masukkan Nilai Sisi : "; cin>>sisi;
                  luas=hitung(sisi,sisi);
                  break;
         case 4 : cout<<" Terima Kasihh~~~~~~ ";
      }
      if (pilih != 4)
      cout<<" Luasnya adalah : " <<luas;

    getch();
    } while (pilih != 4);
  }