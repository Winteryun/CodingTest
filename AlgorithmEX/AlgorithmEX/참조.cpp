// �ִ밪 ����
const int INF = 987654321;

// �ʱ�ȭ
/*
fill(comp, comp + 11, 0);
fill(visited, visited + 11, 0);

*/

//combi ����
/*
void solve(int start,vector<int>v)
{

	if (v.size() == 7)
	{
		int sum = 0;
		for (int i : v)
		{
			sum += a[i];
		}
		if (sum == 100) ret = v;

		return;
	}

	for (int i = start+1 ; i < 9; i++)
	{
		v.push_back(i);
		solve(i, v);
		v.pop_back();
	}

}

*/

//����Ž��

/*
int go(int idx, int sum){
	if(idx == n){
		//cout << "SUM " << sum << "\n";
		return check(sum);
	}
	return go(idx + 1, sum + v[idx]) + go(idx + 1, sum);
}
[��ó] [�˰��� ����] 3����. ����Ž��, ��Ʈ��ŷ|�ۼ��� ū��

*/

//��Ʈ��ŷ
/*
void go(int idx, int sum){
	if(ret == 10) return;
	if(idx == n){
		ret = max(ret, sum % mod);
		cnt++;
		return;
	}
	go(idx + 1, sum + v[idx]);
	go(idx + 1, sum);
}
[��ó] [�˰��� ����] 3����. ����Ž��, ��Ʈ��ŷ|�ۼ��� ū��


*/

// ��Ʈ����ŷ
	/*
	for (int i = 0; i < (1 << 4); i++)
	{
		string ret = "";
		for (int j = 0; j < 4; j++)
		{
			if (i & (1 << j))
			{
				ret += (a[j] + " ");
			}
		}
		cout << ret << endl;
	}


	*/

	/*

	idx��° ��Ʈ����

	S &= ~(1 << idx)

	idx��° ��Ʈ XOR ����

	S ^= (1 << idx)

	������ �����ִ� ��Ʈ ã��

	idx = (S & -S)

	ũ�Ⱑ n�� ������ ��� ��Ʈ�� �ѱ�

	 (1 << n) - 1

	idx��° ��Ʈ�� �ѱ�

	 S |= (1 << idx)

	idx��° ��Ʈ�� ���� �ִ��� Ȯ���ϱ�

	if(S & (1 << idx))
	[��ó] [�˰��� ����] 4����. ��Ʈ����ŷ|�ۼ��� ū��

	idx��° ��Ʈ����

	S &= ~(1 << idx)
	[��ó] [�˰��� ����] 4����. ��Ʈ����ŷ|�ۼ��� ū��

	*/

// int a; ~ a= -(n+1) �� �����ϴ�

// string ���� �Լ�
/*
reverse(tmp.begin(), tmp.end());

---find �Լ� -------

/*rich ���� ���� �Ǵ�
if (str.find("rich") != string::npos) {
	cout << "ã�� ���ڰ� �����մϴ�";

	int index = str.find("rich");   //�ش� ������ ���� �ε��� ��ȯ
}

---- substr -----------

 str.substr(i,2) i��°���� 2���� ���ڸ� ���
*/
//string - split �Լ�����
/*
vector<string> split(string str, string delimiter){
	vector<string> ret;
	long long pos = 0;
	string token;
	while((pos = str.find(delimiter)) != string::npos){
		token = str.substr(0, pos);
		ret.push_back(token);
		str.erase(0, pos + delimiter.length());
	}
	ret.push_back(str);
	return ret;
}
*/
//getline
/*
string _str
char ary[100]
getline(cin,_str);
getline( ary,100) ; 
*/

//Tree Ư¡
/*
 ������ ������ ���� ���� -1 ; 
 dfs 1���� ������ �Ǿ����
*/

//cout ����� ����
/*
cout.setf(ios_base::showbase);
	cout.setf(ios_base::fixed, ios_base::basefield);
	cout.precision(15);
	cin >> a >> b;

	========================================================
		double a, b;
	cin >> a >> b;

	cout.precision(12);
	cout << fixed;
	cout << a / b;
*/

//string�� ���� bigint ����
/*
cin >> a >> b;

	while (a.size() || b.size() || sum)
	{
		if (a.size())
		{
			sum += a.back() - '0';
			a.pop_back();
		}
		if (b.size())
		{
			sum += b.back() - '0';
			b.pop_back();
		}
		ret += (sum % 10) + '0';
		sum /= 10;

		cout << ret << "\n";
	}
	reverse(ret.begin(), ret.end());
	cout << ret << "\n";

*/

//selection, insertion, merge, quick sort ����
/*
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
	ifstream file("onemillion.in"); // example.txt ������ ����. ������ ����.
	if (file.is_open()) {
		while (tmp -- ) {
			file >> reint;
			ary[i] = reint;
			i++;
		}
		file.close(); // ������ ������ �ݴ´�.
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
}*/