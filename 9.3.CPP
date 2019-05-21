#include <conio.h>
#include <iostream.h>
int persegi (int);
int main()
{
   int number, result,hasil;
   cout<<"Masukkan angka yang akan diakarkan = "; cin>>number;
   result = persegi (number);
   cout<<number<<" Hasilnya adalah " <<hasil<<endl;
   getch ();
   return 0;
}

int persegi(int number)
{
return number * number;
}