#include <iostream>
#include <set>

using namespace std;

int main(){
	
	string s;
	set<char> c;

	getline(cin,s);

	for(int i = 0 ; i < s.length(); ++i){
		if(c.find(s[i]) == c.end()){
			c.insert(s[i]);
			cout << s[i];
		}
	}

	cout << endl;


	return 0;
}

