#include <iostream>
#include <vector>
using namespace std;

// Time complexity O(N)
int linearSearch(const vector<int>& a, int value){

	// if the value is found return position in the vector else return -1
	for(int i = 0; i < a.size(); i++){
		if(a[i] == value) return i;
	}

	return -1;

}

int main() {
	// Uncomment the lines 23 - 42 to make the linear search work
	// with dynamic input.
	// if you decided to make the input dynamic comment lines 45 - 46
	// to aislate the results of the self driven example from the dynamic one.

	/*
	int N;
	cout << "Amount of Integers to add to the list: " << endl;
	cin >> N;
	vector<int> listOfValues;
	cout << "Insert " << N << " values separated by a space" << endl;
	for(int i = 0; i < N; i++){
		int temp;
		cin >> temp;
		listOfValues.push_back(temp);
	}

	cout << "Value to search: " << endl;
	int valueToSearch;
	cin >> valueToSearch;
	int positionOfValue = linearSearch(listOfValues, valueToSearch);
	if (positionOfValue > -1){
		cout << "The position of the value: " << valueToSearch << " is pos "
				<< positionOfValue << endl;
	}*/


	vector<int> listOfValues = {1, 5, 7, 2, 4, 10, 200, 350, 3};
	cout << linearSearch(listOfValues, 10) << endl;

	return 0;
}
