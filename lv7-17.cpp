#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Sohoanhao(int n);
bool Kiemtra(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	if (Kiemtra(arr,n)){
		cout<<"Mang toan so hoan hao";
	} else {
		cout<<"Mang khong toan so hoan hao";
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

bool Sohoanhao(int n){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	if (sum == n)
		return true;
	return false;
}

bool Kiemtra(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (Sohoanhao(arr[i]) == false)
			return false;
	}
	return true;
}
