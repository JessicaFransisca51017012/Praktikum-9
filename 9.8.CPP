#include <iostream.h>
#include <conio.h>

void tukarAB(int a, int b)
   { int temp;
     temp = a;
     a=b;
     b=temp;
     cout<<" Dalam fungsi tukarAB \n";
     cout<<" Nilai a = " <<a<<" dan nilai b = "<<b<<endl;
   }

int main()
{
   int a,b;
   cout<<" Masukkan nilai a : ";cin>>a;
   cout<<" Masukkan nilai b : ";cin>>b;
   cout<<" \n Nilai a dan b sebelum masuk fungsi tukarAB : \n";
   cout<<" Nilai a = "<<a<<"dan b "<<b<<endl<<endl;

   tukarAB(a,b);
   cout<<" \n Nilai a dan b sebelum keluar fungsi tukarAB : \n";
   cout<<" Nilai a = "<<a<<"dan b "<<b<<endl<<endl;
   getch();
   return(0);
}
