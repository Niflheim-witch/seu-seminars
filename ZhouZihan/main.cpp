#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

long F1a(long* a, long n, long x)
{
	long result = 0;
	for (long i = 0; i < n + 1; i++)
		result += a[i] * long(pow(x, i));
	return result;
}
long F1b(long* a, long n, long x)
{
	if (n == -1)
		return 0;
	else
		return a[n] * pow(x, n) + F1b(a, n - 1, x);
}
long F2a(long* a, long n, long x)
{
	long result = 0;
	for (long i = n; i >= 1; i--)
	{
		result = (a[i] + result)*x;
	}
	result += a[0];
	return result;
}
long F2b(long* a, long n, long x, long n_)
{
	if (n == -1)
		return 0;
	else
		return a[n_ - n] + x * F2b(a, n - 1, x, n_);
}
double F3(long* a, long n, double x)
{
	if (n == 0)
		return 1.0;
	else
		return pow(x, n) / n + F3(a, n - 1, x);
}

int main()
{
	clock_t start, end;
	start = clock();

	long n;
	long valuesofn[16] = { 1,5,10,15,20,25,30,35,40,45,50,60,70,80,90,100 };

	//
	cout << setw(4) << 'n' << setw(4) << "F1a" << setw(4) << "F1b" << setw(4) << "F2a" << setw(4) << "F2b" << setw(4) << endl;

	for (long idx = 0; idx < 16; idx++)
	{
		n = valuesofn[idx];
		//cout << "n = " << n << endl;
		long* a = new long[n + 1];
		clock_t start, end;

		srand(time(0));
		for (long i = 0; i < n + 1; i++)
			a[i] = rand() % 10;
		//cout << "The values of a[n]:\n";
		//for (long i = 0; i < n + 1; i++)
		//	cout << a[i] << ' ';
		//cout << endl;

		
		start = clock();
		cout << F1a(a, n, 2) << endl;
		end = clock();
		cout << "F1a time: " << end - start << endl;

		start = clock();
		cout << F1b(a, n, 2) << endl;
		end = clock();
		cout << "F1b time: " << end - start << endl;

		start = clock();
		cout << F2a(a, n, 2) << endl;
		end = clock();
		cout << "F2a time: " << end - start << endl;

		start = clock();
		cout << F2b(a, n, 2, n) << endl;
		end = clock();
		cout << "F2b time: " << end - start << endl;
		
		cout << F3(a, n, 1.1) << endl;
		cout << endl;
		

		/*
		cout << setw(4) << n;

		start = clock();
		for (int i = 0; i < 10000; i++)
			F1a(a, n, 2);
		end = clock();
		cout << setw(4) << end - start;

		start = clock();
		for (int i = 0; i < 10000; i++)
			F1b(a, n, 2);
		end = clock();
		cout << setw(4) << end - start;

		start = clock();
		for (int i = 0; i < 10000; i++)
			F2a(a, n, 2);
		end = clock();
		cout << setw(4) << end - start;

		start = clock();
		for (int i = 0; i < 10000; i++)
			F2b(a, n, 2, n);
		end = clock();
		cout << setw(4) << end - start << endl;
		*/
	}
	
	end = clock();
	cout << "Total Time: " << end - start << endl;

	return 0;
}