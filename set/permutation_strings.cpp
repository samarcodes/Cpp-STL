#include<iostream>
#include<set>
#include<string>

using namespace std;

//backtracking (backtracking uses recursion)
void permute(char str[], int k, set<string> &s)
{
	int i;
	if (str[k] == '\0')
	{
		//printf("%s ", res);
		string t(str);
		s.insert(t);
	}
	else
	{
		for (i = k; str[i] != '\0'; i++)
		{
			swap(str[k], str[i]);
			permute(str, k + 1, s);
			swap(str[k], str[i]);
		}
	}
}

//it contains error
/*void perm1(char s[], int l, int h)
{
	int i;
	if (l == h)
	{
		printf("%s ", s);
	}
	else
	{
		for (i = l; i <= h; i++)
		{
			swap(&s[l], &s[i]);
			perm1(s, l + 1, h);
			swap(&s[l], &s[i]);
		}
	}
}*/

int main()
{
	char str[100] = "ABA";
	set<string> s;

	permute(str, 0, s);

	for (auto x : s) {
		cout << x << endl;
	}

	return 0;
}

