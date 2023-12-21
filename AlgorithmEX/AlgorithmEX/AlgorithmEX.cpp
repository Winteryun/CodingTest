#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <fstream>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS
const int INF = 30000;
// 진행주 2-a 주몽
// 진행중 4-o (다시)부터
// 히든 = 2차원배열 스페셜 저지

int n;
int c1, c2;
void SelectionSort(int ary[],int n ); 
void InsertionSort(int ary[],int n);
void merge(int ary[], int l, int m, int r )
{
	int b[INF];
	int i = l;
	int j = m + 1; 
	int k = l;

	for (i = l; i < m; i++) b[i] = ary[i];
	for (j = m + 1; j <= r; j++) b[j] = ary[j];

	i = l;
	j = m + 1; 

	while (i <= m && j <= r)
	{
		if (b[i] <= b[j])
		{
			ary[k++] = b[j++];
			c1++;
			c2++;
		}
			
		else {
			ary[k++] = b[i++];
			c1++;
			c2++;
		}
			
		
	}

	if (i > m)
	{
		while (j <= r)
		{
			ary[k++] = b[j++];
			c2++;
		}
			
	}
	else
	{
		while (i <= m)
		{
			ary[k++] = b[i++];
			c2++;
		}
			
			
	}
	



}
void MergeSort(int ary[], int l , int r );
void QuickSort(int ary[], int l, int r);
void swap(int* x, int* y)
{
	int temp = *x; 
	*x = *y;
	*y = temp; 
}

int partition(int ary[], int l, int r)
{
	int x = ary[l]; // pivot
	int i = l + 1;
	int j = r; 

	while (1)
	{
		while (ary[i] <= x) i++;
		while (ary[j] > x) j--;
		if (i < j)
		{
			swap(&ary[l], &ary[j]); i++; j--;
		}
		else break;
	}
	swap(&ary[l], &ary[j]);
	return j; 
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int reint; 
	int ary[INF];
	int i = 0; 
	cin >> n; 
	int tmp = n; 
	ifstream file("onemillion.in"); // example.txt 파일을 연다. 없으면 생성. 
	if (file.is_open()) {
		while (tmp -- ) {
			file >> reint;
			ary[i] = reint; 
			i++; 
		}
		file.close(); // 열었떤 파일을 닫는다. 
	}
	else {
		cout << "Unable to open file";
		return 1;
	}
	c1 = 0;
	c2 = 0;
	// todo sort 
	MergeSort(ary, 0,n); 

	cout << c1 << " " << c2 << endl;
	return 0;
}

void SelectionSort(int ary[], int n )
{
	for (int i = 0; i < n; i++)
	{
		int midx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (ary[midx] > ary[j])
			{
				midx = j;
				 
			}
			c1++;
		}
		if (i != midx)
		{
			int tmp = ary[i];
			ary[i] = ary[midx];
			ary[midx] = tmp;
			c2 +=2;
		}
		
	}
}

void InsertionSort(int ary[], int n)
{
	for (int i = 1; i < n; i++) {
		int tmp = ary[i];
		int j; 
		for ( j = i - 1; j >= 0; j--) {
			if (ary[j] > tmp)
			{
				ary[j + 1] = ary[j];	
				c1++;
			}
			else break;
		}
		if (j + 1 != i)
		{
			ary[j + 1] = tmp;
			c2 += 2; 
		}
		

	}
}

void MergeSort(int ary[], int l, int r)
{
	int m; 
	if (l < r)
	{
		m = (l + r) / 2; 
		MergeSort(ary, l, m);
		MergeSort(ary, m + 1, r); 
		merge(ary, l, m, r); 
	}
}

void QuickSort(int ary[], int l , int r)
{
	int p;
	if (l < r)
	{
		p = partition(ary, l, r); 
		QuickSort(ary, 1, p - 1);
		QuickSort(ary, p + 1, r);
	}
}