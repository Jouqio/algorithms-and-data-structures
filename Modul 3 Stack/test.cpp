// ============================================================
//  MODUL 3.1 – PROGRAM STACK (TUMPUKAN) MENGGUNAKAN ARRAY
//  Mata Kuliah : Algoritma dan Struktur Data
//  Program Studi: Teknik Informatika – STITEK Bontang
//  Nama         : Syauqi Nuzul Abdi
//  NIM          : 202512042
// ============================================================

// Preprosesor
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Deklarasi stack dengan struct dan array
struct STACK
{
    int data[5];
    int top;
};

// Deklarasi variabel tumpukan dari struct
STACK tumpukan;

// Deklarasi fungsi operasi stack
void inisialisasi();
    int IsEmpty();
    int IsFull();

void push(int data);

void pop();

// Fungsi main program
main()
{
    system("cls");
    int pilih, input, i;
    inisialisasi();
    do{
        cout<<"=========================="<<endl;
        cout<<"Stack/Tumpukan"<<endl;
        cout<<"=========================="<<endl;
        cout<<"1. Push data"<<endl;
        cout<<"2. Pop Data"<<endl;
        cout<<"3. Print Data"<<endl;
        cout<<"4. Clear Data"<<endl;
        cout<<"5. Data Top"<<endl;
        cout<<"=========================="<<endl;
        cout<<endl;
        cout<<"Pilih : ";cin>>pilih;
        switch(pilih)
        {
            case 1:
            {
                if(IsFull()==1)
                {
                    cout<<"Tumpukan telah penuh!";
                }
                else
                {
                    cout<<"Silakan input Data yang akan di push: ";cin>>input;
                    push(input);
                }
                cout<<endl;
                getch();
                break;
            }
            case 2:
            {
                if(IsEmpty()==1)
                {
                    cout<<"Tumpukan kosong!";
                }
                else
                {
                    cout<<"Data yang akan di Pop = "<<tumpukan.data[tumpukan.top]<<endl;
                    pop();
                }
                cout<<endl;
                getch();
                break;
            }
            case 3:
            {
                if(IsEmpty()==1)
                {
                    cout<<"Tumpukan Kosong!"<<endl;
                }
                else
                {
                    cout<<"Data : "<<endl;
                    for(i=0; i<=tumpukan.top; i++)
                    {
                        cout<<tumpukan.data[i]<<" ";
                    }
                }
                cout<<endl;
                getch();
                break;
            }
            case 4:
            {
                inisialisasi();
                cout<<"Tumpukan Kosong!"<<endl;
                cout<<endl;
                getch();
                break;
            }
            case 5:
            {
                cout<<"Posisi Top saat ini : "<< tumpukan.data[tumpukan.top] <<endl;
                cout<<endl;
                getch();
                break;
            }
            default:
            {
                cout<<"Tidak ada dalam pilihan. silakan inputkan inputan 1-4"<<endl;
            }
        }
    } while (pilih>=1 && pilih <=5);
    getch();
}

// Fungsi inisialisasi stack = kosong
void inisialisasi()
{
    tumpukan.top=-1;
}

// Fungsi mengecheck apakah stack kosong
int IsEmpty()
{
    if(tumpukan.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Fungsi mengecheck apakah stack penuh
int IsFull()
{
    if (tumpukan.top==5-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Fungsi untuk menyisipkan data ke stack
void push(int data)
{
    tumpukan.top++;
    tumpukan.data[tumpukan.top]=data;
}

// Fungsi untuk mengeluarkan data dari stack
void pop()
{
    tumpukan.top=tumpukan.top-1;
    if(tumpukan.top<0)
    {
        tumpukan.top=-1;
    }
}