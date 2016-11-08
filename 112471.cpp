#include <iostream>
#include <set>

using namespace std;

int main(){
	
	string s;
	cin >> s;

	bool used[10];

	for(int i = 0; i <=9; ++i){
		used[i] = false;
	}
	

	for(int i = 0 ; i < s.length(); ++i){
		int x = (int)s[i] - 48;
		if(x >= 0 && x <= 9){
			if(used[x] == false){
				used[x] = true;
			}
		}
	}

	bool cnt = false;

	for(int i = 0; i <= 9; ++i){
		if(used[i] == true){
			cout << i;
			cnt = true;
		}
	}

	if(cnt == false){
		cout << "NO";
	}

	return 0;
}

