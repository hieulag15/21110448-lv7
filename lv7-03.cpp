#include<iostream>
#include<math.h>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void DaoNguoc(int arr[], int n);
bool Kiemtra(int n);
int Songuyentocuoicung(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl;
	DaoNguoc(arr,n);
	Xuatmang(arr,n);
	cout<<endl;
	cout<<"so nguyen to cuoi cung: "<<Songuyentocuoicung(arr,n);
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

void DaoNguoc(int arr[], int n)
{
    int temp;
    int j = n-1;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
	}
}

bool Kiemtra(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0){
			return false;
		}
	} return true;
}

int Songuyentocuoicung(int arr[], int n){
	for (int i = 0; i < n; i++) {
		if (Kiemtra(arr[i])){
			return arr[i];
		}
	}
	return -1;
}