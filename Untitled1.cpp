#include <iostream>
#include <string.h>
using namespace std;
struct LINHKIEN {
    char ten[31];
    char quycach[20];
    char loai;
    int dongia;
};
void nhap(LINHKIEN A[], int &n);
void nhap1linhkien(LINHKIEN &x);
void xuat(LINHKIEN A[], int n);
void xuat1linhkien(LINHKIEN x);
void sapxeptheoten(LINHKIEN A[], int n);
void sapxeptheoloai(LINHKIEN A[], int n);
void sapxeptheoloaiten(LINHKIEN A[], int n);
void kiemtra(LINHKIEN A[], int n);
int main()
{
	
	LINHKIEN A[100];
	int n;
	nhap(A, n);
    //sapxeptheoten(A, n);
    //sapxeptheoloai(A, n);
    sapxeptheoloaiten(A,  n);

	xuat(A, n);
	kiemtra(A, n);
	return 0;
	
}
void kiemtra(LINHKIEN A[], int n){
	int dem =0;
	for(int i = 0; i < n; i++){
		if(A[i].loai == 'A' || A[i].loai =='a'){
			dem = dem+1;
		}
	}
	if(dem > 9){
	cout << "True";
	}else{
		cout << "False";
	}
}
void sapxeptheoloaiten(LINHKIEN A[], int n){
	for(int i =0; i < n - 1; i++){
		for(int j =i+1; j <n; j++){
			if((A[i].loai > A[j].loai) || (A[i].loai == A[j].loai && (strcmp(A[i].ten, A[j].ten)>0 )))
		    {
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
void sapxeptheoten(LINHKIEN A[], int n){
	for(int i =0; i < n - 1; i++){
		for(int j =i+1; j <n; j++){
			if(strcmp(A[i].ten, A[j].ten)>0){
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
void sapxeptheoloai(LINHKIEN A[], int n){
	for(int i =0; i < n - 1; i++){
		for(int j =i+1; j <n; j++){
			if(A[i].loai >  A[j].loai){
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
void nhap(LINHKIEN A[], int &n){
	cout << "Nhap vao so luong linh kien: "; cin >> n;
	for(int i=0; i<n; i++){
		cout << "Nhap thong tin linh kien thu " << i+1;
		nhap1linhkien(A[i]);
	}
}
void xuat(LINHKIEN A[], int n){
	for(int i = 0; i< n; i++){
		//cout << "Linh kien thu " << i+1 << ":";
		xuat1linhkien(A[i]);
	}
}
void nhap1linhkien(LINHKIEN &x){
	fflush(stdin);
	cout << "\nNhap ten: ";
	cin.getline(x.ten, 31);
	cout << "Nhap quy cach: "; 
	cin.getline(x.quycach, 11);
	cout << "Nhap loai: ";
	cin >> x.loai;
	cout << "Nhap gia: ";
	cin >> x.dongia;
}
void xuat1linhkien(LINHKIEN x){
cout <<"\nTen: "<<x.ten << endl;
cout <<"Quy cach: " << x.quycach << endl;
cout << "Loai: " << x.loai <<endl;
cout <<"Don gia: " << x.dongia << endl;

}

