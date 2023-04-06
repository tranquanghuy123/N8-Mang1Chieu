#include <iostream>
using namespace std;
// Tổng số phần tử là 1000
#define MAX 1000

int main()
{
	//Khai báo mảng gồm 1000 phần tử
	int array[MAX];
	// Khai báo số phần tử thật sự muốn nhập vào
	int n;
	cout << " Nhap so phan tu trong mang: ";
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cout << " Nhap gia tri trong phan tu: ";
		cin >> array[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	cout << " Tong cac gia tri trong phan tu: " << sum << endl;

	return 0;
}