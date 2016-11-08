#include <iostream>
#include <set>

using namespace std;

int main(){
	
	string s;
	getline(cin,s);
	for(int i = 0 ; i < s.length(); ++i){
		bool found = false;
		for(int j = i - 1 ; j >=0 ; --j){
			if(s[i] == s[j]){
				found = true;
				break;
			}
		}
		if(!found){
			cout << s[i];
		}
	}

	cout << endl;


	return 0;
}

