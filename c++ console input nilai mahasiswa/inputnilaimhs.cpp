#include <iostream.h>

#include <conio.h>

#include <iomanip.h>

#include <stdio.h>

main(){

    char matkul[20];char dosen[20];char kodematkul[5];char kelas[8];char smt[6];char tahun[10];

    int sks,total,npm,quis,tugas,uts,uas,nilai;

    int a=0;

    int b=0;

    int c=0;

    int d=0;

    int e=0;



    char nama[20]; char huruf;

cout<<"DAFTAR NILAI MAHASISWA\n";

cout<<"================================================================================================\n";

cout<<"Mata Kuliah   :                                      Dosen      :                              \n";

cout<<"Kode MK       :                                      Semester   :                              \n";

cout<<"SKS           :                                      Tahun      :     /                        \n";

cout<<"Kelas         :                                      Total      :    Peserta                   \n";

cout<<endl;



cout<<"+----+----------+------------------------+-------+-------+-------+-------+-------+-------+-----+\n";

cout<<"| No | NPM      | Nama                   | Quis  | Tugas |  UTS  |  UAS  | Nilai | Huruf | Ket |\n";

cout<<"+----+----------+------------------------+-------+-------+-------+-------+-------+-------+-----+\n";

cout<<"|    |          |                        |       |       |       |       |       |       |     |\n";

cout<<"+----+----------+------------------------+-------+-------+-------+-------+-------+-------+-----+\n";



cout<<endl;

gotoxy(17,3);gets(matkul);

gotoxy(17,4);cin>>kodematkul;

gotoxy(17,5);cin>>sks;

gotoxy(17,6);gets(kelas);

gotoxy(67,3);gets(dosen);

gotoxy(67,4);cin>>smt;

gotoxy(67,5);gets(tahun);

gotoxy(67,6);cin>>total;

    for(int i=1;i<=total;i++)

{



 gotoxy(1,10+i);cout<<"|    |          |                        |       |       |       |       |       |       |     |\n";

 gotoxy(1,11+i);cout<<"+----+----------+------------------------+-------+-------+-------+-------+-------+-------+-----+\n";





gotoxy(3,10+i);cout<<setw(2)<<i;

gotoxy(8,10+i);cin>>npm;

gotoxy(19,10+i);gets(nama);

gotoxy(44,10+i);cin>>quis;

gotoxy(44,10+i);cout<<setw(4)<<quis;

gotoxy(52,10+i);cin>>tugas;

gotoxy(52,10+i);cout<<setw(4)<<tugas;

gotoxy(60,10+i);cin>>uts;

gotoxy(60,10+i);cout<<setw(4)<<uts;

gotoxy(68,10+i);cin>>uas;

gotoxy(68,10+i);cout<<setw(4)<<uas;



nilai=quis*0.20+tugas*0.35+uts*0.20+uas*0.25;

gotoxy(76,10+i);cout<<setw(3)<<nilai;

cout <<endl;

cout <<endl;

cout <<endl;

cout<<"+-----------+-------+----------+                                                                \n";

cout<<"|  Interval | Huruf |  Jumlah  |                                                                \n";

cout<<"+-----------+-------+----------+                                                                \n";

cout<<"| 90 sd 100 |   A   |  z Orang |                                                                \n";

cout<<"| 75 sd 89  |   B   |  z Orang |                                                                \n";

cout<<"| 60 sd 74  |   C   |  z Orang |                                                                \n";

cout<<"| 45 sd 59  |   D   |  z Orang |                                                                \n";

cout<<"|  0 sd 44  |   E   |  z Orang |                                                                \n";

cout<<"+-----------+-------+----------+\n";





if(nilai>=90){

 gotoxy(86,10+i);cout<<"A";

   a++;



             }

else if(nilai>=75){

 gotoxy(86,10+i);cout<<"B";

   b++;

             }

else if(nilai>=60){

 gotoxy(86,10+i);cout<<"C";

   c++;

             }

else if(nilai>=45){

 gotoxy(86,10+i);cout<<"D";

   d++;

             }

else{

 gotoxy(86,10+i);cout<<"E";

   e++;

             }

            gotoxy(24,16+i);cout<<a;

            gotoxy(24,17+i);cout<<b;

            gotoxy(24,18+i);cout<<c;

            gotoxy(24,19+i);cout<<d;

            gotoxy(24,20+i);cout<<e;









     }

getch();

}