//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
setiap fungsi yang dipanggil didalam program harus didefinisikan
fungsi adalah blok program yang dirancang untuk melakskan tugas tertentu
return_type nama_fungsi( parameter )
{
	pernyataan // return expresi
}

parameter formal adalah paramater yang diberi nilai ,yang terdapat dalam daftar parameter fungsi
paramter aktual adalah parameter yang memberi nilai dan digunakan untuk memberi nilai pada parameter formal
		 			   			 nilai yang digunakan saat pemanggilan fungsi

formal itu prototipe fungsinya  double hasil ( int a, int b) { return (a * b) };
kalau aktual 
itu yang memanggil instruksi parameter formal z = hasil(x,y);


array / larik koleksi data dimana setiap elemen memakai nama dan type yang sama 
setiap elemen diakses dengan membedakan indeksnya [ variable berindeks]

deklarasi 
namaarray array[range_indeks] of tipe
namaarray[subbaris] [subkolom]
type namaarray[sub1][sub2][sub3]

string adalah var yang dipakai untuk menyimpan string
- suatu pernyataan mendefinisikan var string dengan panjam max sekian misal aku[10] ( sudah termasuk null)
setiap karakter menempati memori sebesar 1 byte dan karakter terakhir adalah null , simbol '\0' null

	   			isupper kapital huruf
	   			islower kecil huruf
	   			isdigit karakter digit 0 - 9
	   			ispunct tanda pungtuasi (#?!@)
	   			isascii karakter ascii
	   			isprint karakter yang ditampilkan termasuk spasi
	   			
	   			ltoa int to string
	   			Ltoa long int to string
	   			ultoa unisigned long int to string

pointer adalah suatu variable yang menujuk ke variable lain
tipe_data *nama_variable
*nama_variable adalah nama variable pointernya

int tes = 9; //var bukan pointer

	cout <<"Isi pointer dari var tes : \t \t" <<&tes; // cout alamat memory
	
	int *tespointer; //var pointer
	tespointer = &tes; //tespointer menunjuk ke tes
	
	cout <<endl <<"Isi pointer dari var tespointer : \t" <<tespointer;
	cout <<endl <<"Menampilkan nilai var tes dengan *tespointer" <<*tespointer; //menampilkan isi tes dengan pointer
