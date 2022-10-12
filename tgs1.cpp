#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
	//if else
	int nilai;
	string nama;
	string grade;
	
	cout<<"Masukan Nilai : ";
	cin>>nilai;
	
	if (nilai >=90) {
		grade="A";
	} else if (nilai >=70)   {
		grade="B";
	} else if (nilai >=50) {
		grade="C";
	} else if (nilai >=40) {
		grade="D";
	} else {
		grade="E";
	}
	cout<<"nilai "<<nilai<<" dengan grade "<<grade;
	cout<<endl;
	
	//penggunaan for dan array1D
	int array1D[3];
	for(int i=0;i<3;i++){
  		cout<<"Masukkan Nilai Siswa Urutan Ke-"<<i+1<<" : ";
  		cin>>array1D[i];
 	}
 
 	cout<<endl;
 
 	for(int x=0;x<3;x++){
  		cout<<"Nilai Siswa Urutan Ke-"<<x+1<<" : "<<array1D[x]<<endl;
 	}

	//penggunaan while
	int x=1;
	cout<<endl;
	while (x<=5)
	{
	    cout<<"Angka "<<x<<endl;
	    x++;	
	}
	//array2D
	int A[2][2];
	cout<<endl;
	for (int x=0;x<2;x++){
		for (int y=0;y<2;y++){
			  cout<<"A["<<x<<"]["<<y<<"] = ";
			  cin>>A[x][y];
		}
		cout << endl;
	}
	
	for (int x=0;x<2;x++){
		for (int y=0;y<2;y++){
			 cout<<A[x][y]<<" ";
		}
		cout << endl;
	}
getch ();
}
