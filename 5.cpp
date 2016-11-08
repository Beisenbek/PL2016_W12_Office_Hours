#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<int> s;

	int x;

	cin >> x;

	int k;

	for(int i = 0 ; i < x; ++i){
		cin >> k;
		s.insert(k);
	}


	return 0;
}

