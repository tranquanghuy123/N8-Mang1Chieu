// nhap va xuat gia tri mang co 5 phan tu
#include <iostream>
using namespace std;

int nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << " Nhap phan tu" << i << endl;
		cin >> a[i];
 }
}
int main()
{
	int a[5];
	int n;
	cin >> n;
	nhapmang(a, n);
	}


