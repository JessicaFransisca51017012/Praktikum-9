/* Nama File : modul 5-2.cpp
   Deskripsi : Menghitung pangkat dari suatu bilangan */

#include <iostream.h>
#include <conio.h>

int bil,pangkat;   // variabel global bersama bil dan pangkat
int perpangkatan();   //prototipe fungsi perpangkatan

int main()
   {   cout<<" Masukkan Bilangan yang akan dipangkatkan : "; cin>>bil;
       cout<<" Masukkan Pangkat dari Bilangan Tersebut : "; cin>>pangkat;
       cout<<" Hasilnya adalah : "<<perpangkatan();
       return(0);
   }

int perpangkatan()
{
   int i, hasil=1;                      //variabel lokal untuk perpangkatan
   if (pangkat < 0)
       hasil=0;                        //diasumsikan bila pangkat < 0 adalah 0
   else      //pangkat>0
     {for (i=0; i<pangkat; i++)       //jika pngkat = 0, maka for
          hasil*=bil;                 //tidak dilakukan
                                      //ulangi sampai nilai i = pangkat
     }
   return(hasil);
}

