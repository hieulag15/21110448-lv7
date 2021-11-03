#include<iostream>
#include<math.h>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int n);
int Sum(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	cout<<"Tong cac so chinh phuong la: "<<Sum(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i =0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

bool Kiemtra(int n){
	if (n < 2) return false;
	int sqr = sqrt(n);
	if (sqr * sqr == n)
		return true;
	return false;
}

int Sum(int arr[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if (Kiemtra(arr[i])){
			sum += arr[i];
		}
	}
	return sum;
}