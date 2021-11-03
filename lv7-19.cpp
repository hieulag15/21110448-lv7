#include<iostream>
#include<math.h>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Sochinhphuong(int n);
bool Kiemtra(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	if (Kiemtra(arr,n)){
		cout<<"Mang toan so chinh phuong";
	} else {
		cout<<"Mang khong toan so chinh phuong";
	}
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

bool Sochinhphuong(int n){
	if (n < 2) return false;
	int sqr = sqrt(n);
	if (sqr * sqr == n)
		return true;
	return false;
}

bool Kiemtra(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (Sochinhphuong(arr[i]) == false)
			return false;
	}
	return true;
}
