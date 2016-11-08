#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<int> a;
	string s;
	cin >> s;

	for(int i = 0 ; i < s.length(); ++i){
		int x = (int)s[i] - 48;
		if(x >= 0 && x <= 9){
			a.insert(x);
		}
	}

	if(!s.empty()){
		set<int>::iterator it;

		for(it = a.begin();it!=a.end();++it){
			cout << *it;
		}
	}else{
		cout << "NO";
	}

	return 0;
}

