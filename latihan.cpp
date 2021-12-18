#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//melakukan deklarasi variable
double tugas, kuis, uts, uas, nilaiRata;

// menentukan nilai akhir atau keseluruhannya
int setNilai(){
    return tugas + kuis + uts + uas;
}

//menentukan nilai rata - rata dari nilai akhir
double setRata(){
    nilaiRata = (tugas + kuis + uts + uas)/4;
    return nilaiRata;
}

//menentukan Grade atau nilai huruf yang diperoleh dari hasil nilai rata - rata
char getGrade(){
    if(nilaiRata >= 80){
        return 'A';
    }
    else if (nilaiRata >= 70)
    {
        return 'B';
    }
    else if (nilaiRata >= 55)
    {
        return 'C';
    }
    else if (nilaiRata >= 40)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

//menampilkan output dari hasil nilai akhir, rata - rata, dan grade.
void hasil(){
    cout << "-------------------------------" << endl;
    cout << "Nilai Akhir\t\t= " << setNilai() << endl;
    cout << "Nilai Rata - Rata\t= " << setRata() << endl;
    cout << "Nilai Huruf\t\t= " << getGrade() << endl;
}
int main(int argc, char const *argv[])
{
    char nama[100], ulang;
    int nim;
    do
    {
        system("cls");
        cout << "Masukan NIM\t= ";
        cin >> nim;
        cout << "Masukan Nama\t= ";
        cin.getline(nama, sizeof(nama));
        scanf("%[^\n]nama",nama);
        cout << "Masukan Tugas\t= ";
        cin >> tugas;
        cout << "Masukan Kuis\t= ";
        cin >> kuis;
        cout << "Masukan UTS\t= ";
        cin >> uts;
        cout << "Masukan UAS\t= ";
        cin >> uas;
        cout << "---------------------------" << endl;
        cout << "NIM\t: " << nim << endl;
        cout << "Nama\t: " << nama << endl;

        hasil();

        cout << "\nApakah anda ingin mengulang [y/t]? ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
