#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
int Location(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	cout<<"Vi tri so nho nhat la: "<<Location(arr,n);
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

int Location(int arr[], int n){
	int vt = 0, min = arr[0];
	for (int i = 0; i < n; i++){
		if (arr[i] < min){
			vt = i;
		}
	}
	return vt;
}
