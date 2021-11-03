#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int n);
void Lietke(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Lietke(arr,n);
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

bool Kiemtra(int n){
	while (n >= 10){
		n /= 10;
	}
	if (n % 2 == 0)
		return true;
	return false;
}

void Lietke(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (Kiemtra(arr[i])){
			cout<<arr[i]<<" ";
		}
	}
}