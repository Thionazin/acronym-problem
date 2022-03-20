#include <bits/stdc++.h>

using namespace::std;

int main() {
	string acronym;
	cin >> acronym;
	int n;
	cin >> n;
	vector<string> companies;
	string temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		companies.push_back(temp);
	}
	for(int i = 0; i < acronym.size(); i++) {
		for(int j = 0; j < companies.size(); j++) {
			if(companies[j][0] == acronym[i]) {
				cout << companies[j] << " ";
				companies.erase(companies.begin()+j);
				break;
			}
		}
	}
}
