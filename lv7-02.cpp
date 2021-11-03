#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtrasohoanhao( int n);
int Sohhdautien(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	cout<<"So dau tien: "<< Sohhdautien(arr,n);
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

bool Kiemtrasohoanhao( int n){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0) {
			sum += i;
		}	
	}
	if (sum == n){
		return true;
	} else {
		return false;
	}
}

int Sohhdautien(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if(Kiemtrasohoanhao(arr[i])) {
			return arr[i];
		}
	}
	return -1;
}