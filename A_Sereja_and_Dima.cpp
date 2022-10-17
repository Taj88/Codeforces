#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	int s = 0, d = 0, f = 0;
	forn(i, n)
	{
		cin >> v[i];
	}
	while (v.size())
	{
		if (f == 0)
		{
			if (v.front() > v.back())
			{
				s += v.front();
				v.erase(v.begin());
			}
			else
			{
				s += v.back();
				v.pop_back();
				//v.erase(v.end()-1);
			}
			f = 1;
		}
		else
		{
			if (v.front() > v.back())
			{
				d += v.front();
				v.erase(v.begin());
			}
			else
			{
				d += v.back();
				v.pop_back();
			}
			f = 0;
		}
	}
	cout << s << " " << d << '\n';

	return 0;
}