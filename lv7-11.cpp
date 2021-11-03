#include<iostream>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
bool Kiemtra(float arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	float arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	if (Kiemtra(arr,n)) {
		cout<<"Mang dang tang lien tuc.";
	} else {
		cout<<"Mang khong tang lien tuc.";
	}
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

bool Kiemtra(float arr[], int n){
	for (int i = 0; i < n-1; i++){
		if (arr[i] > arr[i+1]){
			return false;
		}	
	} return true;
}