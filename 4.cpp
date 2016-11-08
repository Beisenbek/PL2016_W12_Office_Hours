//erase
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v;

	int n;

	cout << "Please, enter size of array:" << endl;

	cin >> n;

	cout << endl;

	int x;

	cout << "Please, enter "<< n << " elements of array:" << endl;

	for(int i = 0 ; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}
	cout << endl;
	cout << "array state before erasing:" <<endl;
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}


	cout << endl;

	int k = *max_element(v.begin(),v.end());
	
	for(int i = 0; i < v.size(); ++i){
		if(v[i] == k){
			v.erase(v.begin()+i);
			i--;
		}
	}

	cout << "result array:" <<endl;
		for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	cout <<endl;

	return 0;
}

