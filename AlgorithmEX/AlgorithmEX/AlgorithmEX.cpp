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
	
	
}

