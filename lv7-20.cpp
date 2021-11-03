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
	Xuatmang(arr,n);
	if (Kiemtra(arr,n)){
		cout<<"Mang doi xung";
	} else {
		cout<<"Mang khong doi xung";
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
	for (int i = 0; i < n/2; i++){
		if (arr[i] != arr[n-1-i])
			return false;
	}
	return true;
}