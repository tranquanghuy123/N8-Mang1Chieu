#include <iostream>
using namespace std;
// Tổng số phần tử là 1000
#define MAX 1000
// Ham nhap
void NhapGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap gia tri phan tu trong mang: ";
		cin >> a[i];
	}
}
//Hàm xác định giá trị lớn nhất trong mảng
int max(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	cout << "max = " << max << endl;
	return max;
}
// Hàm xác định giá trị nhỏ nhất trong mảng
int min(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	cout << " min = " << min << endl;
	return min;
}
int main()
{
	int array[MAX];
	// Khai báo số lượng phần tử thực của mảng
	int n;
	cout << " Nhap so luong phan tu cua mang: ";
	cin >> n;
	NhapGiaTri(array, n);
	max(array, n);
	min(array, n);

	return 0;
}