#include<iostream>
#include<math.h>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Songuyento(int n);
bool Sohoanhao(int n);
void Ketqua(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	Ketqua(arr,n);
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

bool Songuyento(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0)
			return false;
	}
	return true;
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

void Ketqua(int arr[], int n){
	int count = 0, countt = 0;
	for (int i = 0; i < n; i++){
		if (Songuyento(arr[i])){
			count++;
		} else {
			if (Sohoanhao(arr[i])){
				countt++;
			}
		}
	}
	if (count == countt){
		cout<<endl<<"So luong so nguyen to la: "<<count<<" so luong so hoan hao la: "<<countt<<" la bang nhau";
	} else {
		cout<<endl<<"So luong so nguyen to la: "<<count<<" so luong so hoan hao la: "<<countt<<" la khong bang nhau";
	}
}
