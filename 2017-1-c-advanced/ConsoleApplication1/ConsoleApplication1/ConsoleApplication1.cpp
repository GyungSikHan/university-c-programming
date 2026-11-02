#include<iostream>
#include<vector>

using namespace std;
vector<int> ve(100000, 0);
vector<int> solution(int v, vector<vector<int>> edges)
{
	vector<int> answer;

	for (int i = 0; i < edges.size(); i++)
	{
		ve[edges[i][0]]++;
		ve[edges[i][1]]++;
	}

	int a = 10000;
	int b{};
	for (int i = 0; i < v; i++)
	{
		if (ve[i] != 1)
		{
			if (a > ve[i])
			{
				a = ve[i];
				b = i;
			}
		}
	}

	for (int i = 0; i < v; i++)
	{
		if (ve[i] == a)
			answer.push_back(1);
		else if (ve[i] == 1)
			answer.push_back(3);
		else
			answer.push_back(2);

	}


	return answer;
}

int main()
{
	vector<vector<int>> edges(6, vector<int>(2, 0));

	for (int i = 0; i < 6; i++)
	{
		cin >> edges[i][0] >> edges[i][1];
	}
	vector<int> a;
	a =	solution(7, edges);

	for (auto d : a)
		cout << d << endl;

}
//4 3
//3 1
//4 0
//4 2
//1 5
//1 6