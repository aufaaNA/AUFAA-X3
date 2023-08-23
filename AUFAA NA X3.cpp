#include  <stdlib.h>
#include  <iosrtream>
using namespace std;

int  Indeks_NilaiMin (int array[],  int  indeksAwal, int n)
(
     int  nilaimin =  array [indeksAwal];
     int  indeksMin =  indeksawal;
     
     for(int  i =  indeksMin  = 1;  i  <  n;  i++)
           if9array[i]  <  nilaiMin)
           (
                 indeksMin  =  i;
                 nilaiMin  =  array [i] ;
           )
     )
     return  indeksMin;
)

void  Selection_Sort (intb  array[],  int  n)
(
      int  buffer,  indeks;
      for(int i = 0;  i  <  n;  i++)
      (
      indeks  =  Indeks_NilaiMin(array,  i,  n);
      buffer =  array[i];
      array[i]; =  array[indeks];
      array[indeks]   =  buffer;
      )
)

int  main()
(
     int i,  n;
     cout << "Masukan jumlah elemen yg diurutkan:  ";
     cin >>  n;
     int  A[n];
     for (i = 0;  i  <  n;  i++)
     (
        cout<< "Masukan bilangan ke-" <<  i+l  <,  "  :  ";
          cin  >> A[i];
     )
     Selection_Sort(A,  n);
     cout<<  "Hasil  pengurutan  pilihan  :  ";
     for(i  =  0;  i <  N: i++)
     (
           cout  <<  "  "  <<  A[i];
     )
     cout <<  endl;
     system  ("pause");
     return 0;
)
      
      
