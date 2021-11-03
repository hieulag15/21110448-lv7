#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void DaoNguoc(int arr[], int n);
bool Kiemtra(int n);
int Sohoanhaocuoicung(int arr[], int n);
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
	cout<<"So hoan hao cuoi cung: "<<Sohoanhaocuoicung(arr,n);
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

bool Kiemtra(int n){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	if (sum == n){
		return true;
	} else {
		return false;
	}
}

int Sohoanhaocuoicung(int arr[], int n){
	for (int i = 0; i < n; i++) {
		if (Kiemtra(arr[i])) {
			return arr[i];
		}
	}
	return 0;
}