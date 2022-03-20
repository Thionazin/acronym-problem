#include <bits/stdc++.h>

using namespace::std;

void fast() {
	std::ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fast();
	string acronym;
	cin >> acronym;
	int n;
	cin >> n;
	unordered_map<char, queue<string>> companies;
	string temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		companies[temp[0]].push(temp);
	}
	for(int i = 0; i < acronym.size(); i++) {
		temp = companies[acronym[i]].front();
		companies[acronym[i]].pop();
		cout << temp << " ";
	}
}
