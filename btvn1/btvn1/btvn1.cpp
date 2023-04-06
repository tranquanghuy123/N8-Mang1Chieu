#include <iostream>
using namespace std;
// Giới hạn lại khoảng cách của mảng là 10
#define MAX 10

int main()
{

	int array[MAX];
	 //Đặt điều kiện để nhập 1 mảng số nguyên từ bàn phím
	// và in ra màn hình
	for (int i = 0; i < MAX; i++)
	{
		cout << "array[" << i << "]" << endl;
		cin >> array[i];
	}
	//xuất điều kiện ra màn hình
	for (int i = 0; i < MAX; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}