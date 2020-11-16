//Lab_6.2.2
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Random(int* a, int n, int Low, int High, int i)
{
		a[i] = rand() % (High - Low + 1) + Low;
		if (i < n - 1)
			Random(a, n, Low, High, i+1);
}

void Print(int* a, int n, int i)
{
		cout << setw(3) << a[i] << " ";
		if (i < n - 1)
			Print(a, n, i + 1);
		else
			cout << endl;

}

int Sum(int* a,  int n, int i)
{
	if (i < n)
	{
		return((i % 2 != 0) ? a[i] : 0) + Sum(a, n, i + 1);
	}
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int Low;
	int High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;
	Random(a, n, Low, High,0);
	Print(a, n, 0);
	cout << "S = " << Sum(a, n,0) << endl;
	return 0;
}