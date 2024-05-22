#include <stdio.h>
#include <conio.h>
#include <windows.h>


void gotoxy();
void belanja();
void daftar_member();
void history_belanja();

char beli_lagi, kartu_member;
int i=1, pilih_barang,banyak_barang,jumlah_barang = 0;
int harga_awal=0, harga=0,total_harga=0,item1,item2,item3,item4;
int diskon =0, total_diskon=0, jumlah_item2=0, jumlah_item3=0, jumlah_item=0,nominal_uang,kembalian=0;







int main(){
	system("color 70");
	int pilih_menu;
	
	gotoxy(40,2);printf("===================================");
	gotoxy(40,3);printf(" 	PROGRAM KELOMPOK V");
	gotoxy(40,4);printf("-----------------------------------");
	gotoxy(40,5);printf("   MENGHITUNG DISKON SEBUAH TOKO");
	gotoxy(40,6);printf("===================================");
	gotoxy(40,7);printf(" \tNAMA KELOMPOK V");
	gotoxy(40,8);printf("-----------------------------------");
	gotoxy(40,9);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	gotoxy(40,10);printf(" 1. DWI FEBRI RIYANTO (220401141) ");	
	gotoxy(40,11);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	gotoxy(40,12);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	gotoxy(40,13);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	gotoxy(40,14);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	gotoxy(40,15);printf(" 1. DWI FEBRI RIYANTO (220401141) ");
	getch();
	do{
	system("cls");
	gotoxy(40,3);printf("======================================");
	gotoxy(40,4);printf(" SELAMAT DATANG DI TOKO RURRY FASHION ");
	gotoxy(40,5);printf("======================================\n");
	gotoxy(40,6);printf("1. Belanja");
	gotoxy(40,7);printf("2. Daftar Member");
	gotoxy(40,8);printf("3. History Belanja");
	gotoxy(40,9);printf("4. Keluar");	
	gotoxy(40,10);printf("----------------------------------------\n");
	gotoxy(40,11);printf("Pilih\t: ");scanf("%d", &pilih_menu);fflush(stdin);
	
	switch(pilih_menu){
		case 1:
			belanja();
			break;
		case 2:
			daftar_member();
			break;
		case 3:
			history_belanja();
			break;
		default:
			return 0;
	}

	}while(pilih_menu < 4 || pilih_menu > 4);
	
	return 0;
}

void belanja(){
	system("cls");
	
	printf("=================================================================================\n");
	printf("||                      SELAMAT DATANG DI RURRY FASHION                        ||\n");
	printf("=================================================================================\n\n");
	printf("+---+---------------------------------------------------------------------------+\n");
	printf("|No | Nama Barang	\t	| Jenis Barang		| Harga		|\n");
	printf("+---+---------------------------------------------------------------------------+\n");
	printf("| 1 | Kemeja merk Nevadu \t\t| Pakaian Dewasa \t| Rp. 80.000\t|\n");
	printf("| 2 | Kemeja merk Succi \t\t| Pakaian Dewasa \t| Rp. 195.000\t|\n");
	printf("| 3 | Kaos merk Mencreth \t\t| Pakaian Dewasa \t| Rp. 70.000\t|\n");
	printf("| 4 | Kaos merk Suprii \t\t\t| Pakaian Dewasa \t| Rp. 110.000\t|\n");
	printf("| 5 | Kaos anak merk H&H kids\t\t| Pakaian anak-anak \t| Rp. 150.000\t|\n");
	printf("| 6 | Kaos anak merk Popscin\t\t| Pakaian anak-anak \t| Rp. 150.000\t|\n");
	printf("| 7 | Baju Bayi merk Jumping Mr bean\t| Pakaian Bayi \t\t| Rp. 80.000\t|\n");
	printf("| 8 | Sepatu merk Filad \t\t| sepatu \t\t| Rp. 100.000\t|\n");
	printf("| 9 | Sepatu merk vens \t\t\t| sepatu \t\t| Rp. 150.000\t|\n");
	printf("|10 | Sepatu merk New Belek \t\t| sepatu \t\t| Rp. 189.000\t|\n");
	printf("|11 | Sepatu merk niko \t\t\t| sepatu \t\t| Rp. 290.000\t|\n");
	printf("+---+---------------------------------------------------------------------------+\n");
	
	printf("Pilih barang yang di inginkan\n");
	belanjalagi:
	do{
		printf("-----------------------------------\n");
		printf("Barang ke - %d \t: ", i);scanf("%d", &pilih_barang);
		printf("Jumlah barang \t: ");scanf("%d", &banyak_barang);fflush(stdin);
		if(pilih_barang == 1){
			item1 = 1;
			harga_awal = 80000;
			harga = 80000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		} else if(pilih_barang == 2){
			item1 = 1;
			harga_awal = 195000;
			harga = 195000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 3){
			item1 = 1;
			harga_awal = 70000;
			harga = 70000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 4){
			item1 = 1;
			harga_awal = 110000;
			harga = 110000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 5){
			item2 = 2;
			harga_awal = 150000;
			jumlah_item2 +=  banyak_barang; 
			harga = 150000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 6){
			item2 = 2;
			jumlah_item2 += banyak_barang;
			harga_awal = 150000;
			harga = 150000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 7){
			item3 = 3;
			jumlah_item3 += banyak_barang;
			harga_awal = 80000;
			harga = 80000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 8){
			item4 = 4;
			harga_awal = 100000;
			harga = 100000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 9){
			item4 = 4;
			harga_awal = 150000;
			harga = 150000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 10){
			item4 = 4;
			harga_awal = 189000;
			harga = 189000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		}else if(pilih_barang == 11){
			item4 = 4;
			harga_awal = 290000;
			harga = 290000 * banyak_barang;
			total_harga += harga;
			jumlah_barang += banyak_barang;
			printf("harga barang\t: Rp.%d\n",harga_awal);
			printf("Total Harga \t: Rp.%d\n", harga);
			printf("-----------------------------------\n");
		} else {
			goto belanjalagi;
		}
		printf("Apakah Anda Ingin Belaja Lagi (y/t) : ");scanf("%c",&beli_lagi); fflush(stdin);
		printf("\n");
		i++;
	}while(beli_lagi == 'y'|| beli_lagi == 'Y');
	jumlah_item = jumlah_item2 + jumlah_item3;
	printf("apakah anda memiliki kartu member (y/n) : ");scanf("%c",&kartu_member);fflush(stdin);
	printf("\n");
	if(kartu_member == 'y' || kartu_member == 'Y'){
		//soal 1
		diskon = total_harga * 5/100;
		total_diskon = total_harga - diskon;
		if(jumlah_barang && jumlah_item > 4 ){
		if(total_harga > 500000){
			if(item1 == 1 && item2 == 2 && item3 == 3 && item4 == 4){
				diskon = total_harga * 55/100;
				total_diskon = total_harga - diskon;
				printf("diskon dengan kartu member sebesar 5 persen\n");
				printf("diskon belanja all item sebesar 20 persen\n");
				printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 55 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);	
			} else {
				diskon = total_harga * 35/100;
				total_diskon = total_harga - diskon;
				printf("diskon dengan kartu member sebesar 5 persen\n");
				printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 35 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
			}
			
		} else {
			diskon =  total_harga * 15/100;
			total_diskon =  total_harga - diskon;
			printf("diskon dengan kartu member sebesar 5 persen\n");
			printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
			printf("Total Diskon yang anda dapatkan adalah 15 persen\n");
			printf("harga setelah diskon adalah Rp.%d\n", total_diskon); 
		}
		//soal 2
		} else if(total_harga > 500000){
			if(item1 == 1 && item2 == 2 && item3 == 3 && item4 == 4){
				
				diskon = total_harga * 45/100;
				total_diskon = total_harga - diskon;
				printf("diskon dengan kartu member sebesar 5 persen\n");
				printf("diskon belanja all item sebesar 20 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 45 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
				
			}else {
				diskon = total_harga * 25/100;
				total_diskon = total_harga - diskon;
				printf("Diskon dengan kartu member sebesar 5 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 25 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
			}
	//soal 3
		} else if(total_harga < 200000 && item4 == 4){
			diskon = total_harga * 10/100;
			total_diskon = total_harga - diskon;
			printf("diskon dengan kartu member sebesar 5 persen\n");
			printf("Diskon pembelajaan sepatu kurang dari Rp.200.000 sebesar 5 persen\n");
			printf("Total Diskon yang anda dapatkan adalah 10 persen\n");
			printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
		
		} else {
			printf("anda mendapatkan diskon dengan kartu member sebesar 5 persen\n");
			printf("Total Anda mendapatkan Diskon 5 persen\n");
			printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
		} 
	
	}else{
		 
		if(jumlah_barang && jumlah_item > 4 ){
		if(total_harga > 500000){
			if(item1 == 1 && item2 == 2 && item3 == 3 && item4 == 4){
				diskon = total_harga * 50/100;
				total_diskon = total_harga - diskon;
				printf("diskon belanja all item sebesar 20 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 50 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);	
			} else {
				diskon = total_harga * 30/100;
				total_diskon = total_harga - diskon;
				printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 30 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
			}
			
		} else {
			diskon =  total_harga * 10/100;
			total_diskon =  total_harga - diskon;
			printf("diskon belanja item > 4 baju bayi dan baju anak sebesar 10 persen\n");
			printf("Total Diskon yang anda dapatkan adalah 10 persen\n");
			printf("harga setelah diskon adalah Rp.%d\n", total_diskon); 
		}
		//soal 2
		} else if(total_harga > 500000){
			if(item1 == 1 && item2 == 2 && item3 == 3 && item4 == 4){
				
				diskon = total_harga * 40/100;
				total_diskon = total_harga - diskon;
				printf("diskon belanja all item sebesar 20 persen\n");
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 40 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
				
			}else {
				diskon = total_harga * 20/100;
				total_diskon = total_harga - diskon;
				printf("Diskon Belanja diatas Rp.500.000 sebesar 20 persen\n");
				printf("Total Diskon yang anda dapatkan adalah 20 persen\n");
				printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
			}
	//soal 3
		} else if(total_harga < 200000 && item4 == 4){
			diskon = total_harga * 5/100;
			total_diskon = total_harga - diskon;
			printf("Diskon pembelajaan sepatu kurang dari Rp.200.000 sebesar 5 persen\n");
			printf("Total Diskon yang anda dapatkan adalah 5 persen\n");
			printf("harga setelah diskon adalah Rp.%d\n", total_diskon);
		
		} else {
			diskon = 0 ;
			total_diskon = total_harga;
			printf("anda Tidak mendapatkan diskon \n");
			printf("Total Anda mendapatkan Diskon 0 persen\n");
			printf("Total harga adalah Rp.%d\n", total_harga);
		}
		
	}
	printf("........................................\n");
	printf("Nominal Uang Anda : ");scanf("%d",&nominal_uang);
	if(nominal_uang > total_diskon){
		kembalian = nominal_uang - total_diskon;
	}else if(nominal_uang == total_diskon){
		kembalian = nominal_uang - total_diskon;
	} else if(nominal_uang < total_diskon){
		kembalian = nominal_uang - total_diskon;
	} else {
		
	}
	
	printf("+---------------------------------------------------------------+\n");
	printf("                  PEMBAYARAN RURRY FASHION                       \n");
	printf("+---------------------------------------------------------------+\n");
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             SUBTOTAL BARANG              \t|     %d\t\t|\n",jumlah_barang);
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             SUBTOTAL HARGA               \t| Rp. %d\t|\n",total_harga);
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             JUMLAH DISKON                \t| Rp. %d\t|\n",diskon);
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             TOTAL BELANJA                \t| Rp. %d\t|\n",total_diskon);
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             TUNAI                        \t| Rp. %d\t|\n",nominal_uang);
	printf("+---+-----------------------------------------------------------+\n");
	printf("|   |             KEMBALIAN                    \t| Rp. %d\t|\n",kembalian);
	printf("+---+-----------------------------------------------------------+\n");
	printf("+---------------------------------------------------------------+\n");
	printf("                  TERIMA KASIH SUDAH BERBELANJA                  \n");
	printf("                        DI RURRY FASHION                         \n");
	printf("+---------------------------------------------------------------+\n");

	
getch();
}

void daftar_member(){
	system("cls");
	char nama[50];
	char ktp[50];
	char id[50];
	char alamat[50];

	int i, x,pilih;
	char y;
	i = 1;
	x = 0;
	ulang:
	printf("=========================\n");
	printf("DATA MEMBER RURRY FASHION\n");
	printf("=========================\n\n");
	printf("1.Tambah Member\n");
	printf("2.Lihat Member\n");
	printf("3.Selesai\n");
	printf("Pilihan anda : ");
	scanf("%d", &pilih);
	fflush(stdin);
	system("cls");
	
	if(pilih == 1) {
	
	do {
		printf("============================\n");
		printf("DAFTAR MEMBER RURRY FASHION\n");
		printf("============================\n\n");
		printf("Data Member ke- %i\n", i);
		printf("Nama Member : ");
		scanf("%[^\n]s", &nama[i]);fflush(stdin);
		printf("NO KTP : ");
		scanf("%s", &ktp[i]);fflush(stdin);
		printf("NO ID Kartu : ");
		scanf("%[^\n]s",&id[i]);fflush(stdin);
		printf("Alamat : ");
		scanf("%[^\n]s",&alamat[i]);fflush(stdin);
		i++;
		x = i;
		printf("apakah anda ingin nambah data (y/n) : ");
		scanf ("%c", &y);fflush(stdin);
		printf("\n");
		
	} while (y == 'y' || y == 'Y');
	system ("pause");
	system("cls");
	goto ulang;

	
	} else if (pilih == 2) {
		for(i=1; i<x; i++) {
			printf("data Member ke-%i \n", i);
			printf("-----------------------\n");
			printf("Nama member %s\n",&nama[i]);
			printf("No KTP %s\n", &ktp[i]);
			printf("ID Kartu %s\n",&id[i]);
			printf("Alamat %s\n\n", &alamat[i]);
		}
		system("pause");
		system("cls");
		goto ulang;
		
	} else {
	}

};
void history_belanja(){
	system("cls");
	
	gotoxy(30,3);printf("+-------------------------------------------------------------------+\n");
	gotoxy(30,4);printf("                  PEMBAYARAN RURRY FASHION                       \n");
	gotoxy(30,5);printf("+-------------------------------------------------------------------+\n");
	gotoxy(30,6);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,7);printf("|   |             SUBTOTAL BARANG              \t|    %d\t\t|\n",jumlah_barang);
	gotoxy(30,8);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,9);printf("|   |             SUBTOTAL HARGA               \t| Rp.%d\t|\n",total_harga);
	gotoxy(30,10);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,11);printf("|   |             JUMLAH DISKON                \t| Rp.%d\t|\n",diskon);
	gotoxy(30,12);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,13);printf("|   |             TOTAL BELANJA                \t| Rp.%d\t|\n",total_diskon);
	gotoxy(30,14);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,15);printf("|   |             TUNAI                        \t| Rp.%d\t|\n",nominal_uang);
	gotoxy(30,16);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,17);printf("|   |             KEMBALIAN                    \t| Rp.%d\t|\n",kembalian);
	gotoxy(30,18);printf("+---+---------------------------------------------------------------+\n");
	gotoxy(30,19);printf("+-------------------------------------------------------------------+\n");
	gotoxy(30,20);printf("                  TERIMA KASIH SUDAH BERBELANJA                  \n");
	gotoxy(30,21);printf("                        DI RURRY FASHION                         \n");
	gotoxy(30,22);printf("+-------------------------------------------------------------------+\n");
	getch();	
};



void gotoxy(int x, int y){
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
};
