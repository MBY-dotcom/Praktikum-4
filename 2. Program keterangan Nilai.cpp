#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int nilai;
   cout<<"Masukkan Nilai Siswa : "; cin>>nilai;
 
  //Untuk nilai 0-50
  if((nilai>=0)&&(nilai<=50)){
    cout<<"Nilai Tidak Lulus"<<endl;
  }
 
  //Untuk nilai 51-60
  else if((nilai>=51)&&(nilai<=60)){
    cout<<"Nilai Siswa E"<<endl;
  }
 
 //Untuk nilai 61-70
  else if((nilai>=61)&&(nilai<=70)){
    cout<<"Nilai Siswa D"<<endl;
  }
 
  //Untuk nilai 71-80
  else if((nilai>=71)&&(nilai<=80)){
    cout<<"Nilai Siswa C"<<endl;
  }
 
  //Untuk nilai 81-90
  else if((nilai>=81)&&(nilai<=90)){
    cout<<"Nilai Siswa B"<<endl;
  }
 
  //Untuk nilai 90-100
  else if((nilai>=91)&&(nilai<=100)){
    cout<<"Nilai Siswa A"<<endl;
  }
  
  //Inputan salah
 else{
  cout<<"Inputan Anda Salah";
  }
  
  getch;
  return 0;
}
