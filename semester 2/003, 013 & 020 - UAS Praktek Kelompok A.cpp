
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <windows.h>
#include <iomanip>
#define CLS system("cls");
#define PAUSE {printf("\n"); system("pause");}
using namespace std;

void gotoxy(int x,int y)
{
	COORD yogi = { x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),yogi);
	
}

// membandingkan dua buah string (ignore case)
  struct list {
        char nip[10];
        char nama[15];
        char alamat[30];
        struct list *next;
    };

int compare(char *str1, char *str2) {
    int len = strlen(str1);
    int beda = 0;

    for (int i=0; i<len; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') str1[i] += 32;
        if (str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;
        if (str1[i] != str2[i]) beda++;
        if (str2[i] == 'beda') {
            beda++;
                return beda;
        }
    }

    if (strlen(str2) < len) {
        beda += strlen(str2) - len;
    }

    return beda;
}

int main()
{
  
	menu:
    struct list *awal, *akhir, *p, *Psbl, *baru;

    awal = akhir = NULL;

    int pilihan = 0, posisi, posisi_sekarang,posisi_data;
    char cari[64], konfirmasi;
    do {
        switch (pilihan) {
            case 1: // tambah data kedalam list
                baru = (struct list *) malloc(sizeof(struct list)); // alokasikan list baru di memori
                if (baru == NULL) {
                    CLS;
                    printf("\nMemori tidak cukup.");
                    PAUSE;
                    break;
                }
                cout<<"\n\tMasukan Data _" <<endl;
                printf("\n\t\tNIP   : "); scanf("%s", baru->nip); getchar();
                printf("\t\tNama  : "); scanf("%[^\n]", baru->nama);
                printf("\t\tAlamat : "); scanf(" %30[^\n]", &baru->alamat);
                if (awal == NULL) {
                    baru->next = NULL;
                    awal = baru;
                    akhir = baru;
                } else {
                    printf("\nTambahkan Data di (Default = akhir) : \n");
                    printf("1. Awal\n2. Tengah\n3. Akhir\n\nPilihan Anda : ");
                    scanf("%d", &posisi);
                    switch(posisi) {
                        case 1:
                            // tambah data di awal list
                            baru->next = awal;
                            awal = baru;
                            PAUSE;
                            break;

                        case 2:
                            printf("Masukan posisi data : "); scanf("%d", &posisi_data);
                            p = awal;
                            Psbl = NULL;
                            posisi_sekarang = 1;
                            while (p != NULL && posisi_sekarang < posisi_data) {
                                //Psbl = p;
                                p = p->next;
                                posisi_sekarang++;
                            }
                            if (p != NULL) {
                                // tambahkan data di tengah (posisi_data)
                                Psbl = p;
                                baru->next = p->next;
                                Psbl->next = baru;
                            }
                            break;

                        case 3:
                        default:
                            // tambah data di akhir list
                            akhir->next = baru;
                            akhir = baru;
                            baru->next = NULL;
                            PAUSE;
                            break;
                    }
                }

                break;

            case 2:
                CLS;
                p = awal;
                cout <<endl <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl <<"\t|\tProgram Struct Pegawai Implementation Linked List" <<setw(9) <<"|";
		cout <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl;
		cout<<"\t| Choose The Action :" <<setw(45) <<"|"<<endl ;
		cout <<"\t|" <<setw(65) <<"|" <<endl;
                printf("\n\t\t------------------------------------------\n");
                if (p == NULL) {
                    printf("\n\t\t List Kosong\n");
                    printf("\n\t\t------------------------------------------\n");
                    break;
                } else {
                    while (p != NULL) {
                        printf("\n\t\tNIP   : %s", p->nip);
                        printf("\n\t\tNama  : %s", p->nama);
                        printf("\n\t\tAlamat : %s", p->alamat);
                        printf("\n\t\t------------------------------------------\n");
                        p = p->next;
                    }
                }

                printf("\n");
                gotoxy(20,18);
                cout<<" write except above for exit: ";
                	gotoxy(55,20);
	cout<<"Recompile and Redesign";
		gotoxy(55,21);
	cout<<"Yogi | Gusty | Yeheskiel";
                printf("\t\tMasukan NIP/Nama dari data yang ingin dihapus: ");
               scanf("%s", cari);
                CLS;
                Psbl = NULL;
                p = awal;
                while (p != NULL) {
                    if (compare(p->nip, cari) == 0 || compare(p->nama, cari) == 0) {
                        printf("\n\n------------------------------------------\n");

                        printf("\nNIP   : %s", p->nip);
                        printf("\nNama  : %s", p->nama);
                        printf("\nAlamat : %s", p->alamat);
                        printf("\n------------------------------------------\n");

                        printf("\nIngin menghapus data di atas (y/n) : ");
                        scanf("%s", &konfirmasi);
                        if (konfirmasi == 'y' || konfirmasi == 'Y') {
                            if (awal->next == NULL) {
                                awal = NULL;
                                akhir = awal;
                            } else if (p == awal) {
                                // hapus di awal
                                Psbl = awal;
                                awal = Psbl->next;
                            } else if (p == akhir) {
                                // hapus di akhir
                                Psbl->next = NULL;
                                akhir = Psbl;
                            }
                            else {
                                // hapus di tengah
                                Psbl->next = p->next;
                            }

                            printf("\nData berhasil dihapus.\n\n");
                        } else {
                            printf("\nData tidak jadi dihapus.\n\n");
                        }

                        break;
                    }
                    Psbl = p;

                    p = p->next;
                }

                if (p == NULL) {
                    printf("\n\nNIP/Nama tidak ditemukan !\n\n");
                }
                PAUSE;
                break;

            case 3:
                CLS;
                cout<<"write except bottom for exit: ";
                printf("\nMasukan NIP/Nama yang di cari : ");
                	gotoxy(55,20);
	cout<<"Recompile and Redesign";
		gotoxy(55,21);
	cout<<"Yogi | Gusty | Yeheskiel";
	gotoxy(32,1);
                scanf("%s", cari);

                p = awal;
                while (p != NULL) {
                    if (compare(p->nip, cari) == 0 || compare(p->nama, cari) == 0) {
                        printf("\n\n------------------------------------------\n");
                        printf("\nNIP   : %s", p->nip);
                        printf("\nNama  : %s", p->nama);
                        printf("\nAlamat : %s", p->alamat);
                        printf("\n------------------------------------------\n");

                        PAUSE;
                        break;
                    }
                    p = p->next;
                }
                if (p == NULL) {
                    printf("\nData tidak ditemukan ! \n\n");
                    PAUSE;
                }
                break;

            case 4: // tampilkan list
                CLS;

                p = awal;
                printf("\n------------------------------------------\n");
                if (p == NULL) {
                    printf("\n List Kosong\n");
                    printf("\n------------------------------------------\n");
                } else {
                    while (p != NULL) {
                        printf("\nNIP   : %s", p->nip);
                        printf("\nNama  : %s", p->nama);
                        printf("\nAlamat : %s", p->alamat);
                        printf("\n------------------------------------------\n");
                        p = p->next;
                    }
                }
                printf("\n");
                PAUSE;
                break;

            case 0: break;

            default:
                printf("\nPilihan salah !\n");
                break;
        }

        CLS;
        
        system("Color 0A");
		cout <<endl <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl <<"\t|\tProgram Struct Pegawai Implementation Linked List" <<setw(9) <<"|";
		cout <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl;
		cout<<"\t| Choose The Action :" <<setw(45) <<"|"<<endl ;
		cout <<"\t|" <<setw(65) <<"|" <<endl;
		cout <<"\t|\t\t 1. Tambah Data Rekaman" <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 2. Lihat List Rekaman " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 3. Cari Data Rekaman  " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 4  Hapus Data Rekaman " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 0. Exit               " <<setw(27) <<"|" <<endl;
		
			cout <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<setw(75) <<"|    Choose : ";
		cout <<setw(85) <<"___________________";
		gotoxy(55,20);
	cout<<"Recompile and Redesign";
		gotoxy(55,21);
	cout<<"Yogi | Gusty | Yeheskiel";
		gotoxy(70,13);
        scanf("%d", &pilihan);
        
    } while (pilihan > 0);
    return 0;
}
