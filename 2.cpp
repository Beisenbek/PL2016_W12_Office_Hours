//erase
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v;

	int n;

	cin >> n;

	int x;
	for(int i = 0 ; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	cout << "before" <<endl;
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	vector<int>::iterator f = v.begin();
	vector<int>::iterator m = v.begin() + (v.size()+1)/2;
	
	if(n%2 ==0){
		m = v.begin() + v.size()/2;
	}

	v.erase(f,m);

	cout << "after";
		for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}


	return 0;
}

