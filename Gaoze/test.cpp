#include<iostream>
#include<algorithm>
using namespace std;

void Permutations(int* a, const int k, const int m)
{
	if (k == m)
	{
		for (int i = 0; i <= m; i++)cout << a[i]<<" ";
		cout << endl;
	}
	else
	{
		for (int i = k; i <= m; i++)
		{
			swap(a[k], a[i]);
			Permutations(a, k + 1, m);
			swap(a[k], a[i]);

		}
	}
}
int main()
{

	return 0;
}