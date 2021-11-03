#include<iostream>
#include<math.h>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int n);
float Avg(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	cout<<"trung binh cong: "<<Avg(arr,n);
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
	if (n < 2 )	return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) {
			return false;
		}
	} return true;
}


float Avg(int arr[], int n) {
	int count = 0;
	float sum = 0;
	for (int i = 0; i < n; i++) {
		if(Kiemtra(arr[i])) {
			sum += arr[i];
			count++;
		}
	}
	float avg = sum / count;
	return avg;
}