#include <iostream>
using namespace std;
#define MAX 1000
//Ham hoan vi
void HoanVi(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}


//Hàm đảo ngược
	void reverse(int a[], int n) 
	{
		for (int i = 0, j = n - 1; i < n; i++, j--)
		{
			HoanVi(a[i], a[j]);
		}
	}
// Ham xuat mang
	void XuatMang(int a[], int n)
	{
		for (int i = 0; i < n; i++)
			cout << a[i];
	}
int main()
{
	// Nhap mang
	int arr[MAX];
	int n, i;
	cout << " Nhap so phan tu trong mang: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Mang sau khi dao: ";
	reverse(arr, n);
	
	return 0;
}