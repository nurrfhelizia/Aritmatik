# sertakan  <iostream> _ _
# sertakan  < tali >
menggunakan  namespace  std ;

ke dalam  utama (){

	// deklarasi variabel

	int pilih[ 100 ],jumlah[ 100 ],sub_total[ 100 ],harga[ 100 ];
	menu rangkaian[ 100 ];
	int total_bayar;
	ke dalam saya= 0 ;
	bool selesai= salah ;


	cout<< " ********DAFTAR MENU MAKANAN & MINUMAN BAKSO SUKSES************ " <<endl;
    cout<< " 1. Bakso Biasa Rp.12000 " <<endl;
    cout<< " 2. Bakso Jumbo Rp.15000 " <<endl;
    cout<< " 3. Teh (Es/panas) Rp.2000 " <<endl;
    cout<< " 4. Jeruk (Es/panas) Rp.3000 " <<endl;
    cout<< " 5. indomie (goreng/rebus) Rp.7000 " <<endl;
    cout<< " ------------------------------- ---- " <<endl;

	cout<< " Tekan 0 jika selesai melakukan pemesanan " <<endl<<endl;

    sementara (selesai== salah ){

    	cout<< " Pilih Menu : " ;
    	cin>>pilih[i];

    	if (pilih[i]<= 5 ){

    		jika (pilih[i]== 0 ){
    			selesai= benar ;
			} lain {
				beralih (pilih[i]){
		    		kasus  1 : menu[i]= " Bakso Biasa      " ; harga[i]= 12000 ; istirahat ;
		    		kasus  2 : menu[i]= " Bakso Jumbo      " ; harga[i]= 15000 ; istirahat ;
		    		kasus  3 : menu[i]= " Teh (es/panas)   " ; harga[i]= 2000 ; istirahat ;
		    		kasus  4 : menu[i]= " Jeruk (es/panas) " ; harga[i]= 3000 ; istirahat ;
		    		kasus  5 : menu[i]= " indomie (goreng/rebus) " ;
harga[i]= 7000 ; istirahat ;
		    		bawaan : menu[i]= " " ;harga[i]= 0 ;
				}

				cout<< " Jumlah Porsi " <<menu[i]<< " : " ;
		    	cin>>jumlah[i];
		    	cout<<endl;

		    	sub_total[i]=jumlah[i]*harga[i];

		    	total_bayar+=sub_total[i];
	    		saya++;
			}
		} lain {
			cout<< " Menu yang dipilih tidak sesuai " <<endl;
			cout<<endl;
		}

	}

	cout<<endl;
	cout<< "                  FAKTUR PEMBELIAN BAKSO SUKSES " <<endl;
	cout<< " ------------------------------- -------------------------- " <<endl;
	cout<< " No Nama Menu Harga Jumlah Sub Total " <<endl;
	cout<< " ------------------------------- -------------------------- " <<endl;
	untuk ( int a= 0 ;a<i;a++){
		  cout<<a+ 1 << " 	" <<menu[a]<< " 	" <<harga[a]<< " 		" <<jumlah[a]<< " 		" <<sub_total[a]<<endl;
	}

	cout<< " ------------------------------- -------------------------- " <<endl;
	cout<< " Jumlah Bayar = Rp. " <<total_bayar<<endl;


}
