#include<iostream>
using namespace std;

int main(){
	int pilih;
	cout<<"Program C++"<<endl;
	cout<<"============================"<<endl;
	cout<<"1) Perulangan For"<<endl;
	cout<<"2) Perulangan While"<<endl;
	cout<<"3) Perulangan Do-while"<<endl;
	cout<<"4) Array 1D"<<endl;
	cout<<"5) Array Multidimensi"<<endl;
	cout<<"Masukkan pilihan anda : " <<endl;
	cin>>pilih;
	cout<<"============================="<<endl;
	
	switch (pilih){
		case 1 : {
			cout<<"Anda Memilih Perulangan For"<<endl;
			for(int i=1; i<=12; i++){
				cout<<i<<" ";
			}
			break;
		}
		case 2 : {
			cout<<"Anda Memilih Perulangan While"<<endl;
			int i=1;
			while(i<=12){
				cout<<i;
				i++;
			}
			break;
		}
		case 3 : {
			cout<<"Anda Memilih Perulangan Do-while"<<endl;
			int i=12;
			do{
				cout<<i<<endl;
				i++;
			}while(i<=11);
			cout<<"Nilai akhir dari i = "<<i;
			break;
		}
		case 4 : {
			cout<<"Anda Memilih Array 1D"<<endl;
			int i[8]={1,2,3,4,5,6,7,8};
			cout<<i[1];
			cout<<i[2];
			cout<<i[3];
			cout<<i[4];
			cout<<i[5];
			cout<<i[6];
			cout<<i[7];
			cout<<i[8];
			break;
		}
		case 5 : {
			cout<<"Anda Memilih Array Multidimensi"<<endl;
			int i[2][2];
			i[0][0]=11;
			i[0][0]=19;
			i[0][0]=27;
			i[0][0]=12;
			cout<<"Isi Variabel i : "<<endl;
			cout<<i[0][0]<<" "<<i[0][1]<<endl;
			cout<<i[1][0]<<" "<<i[1][1]<<endl;
			break;
		}
	}
}
