//============================================================================
// Name        : Binary Search.cpp
// Author      : Luis Pujols
// Description : Binary Search algorithm implemented in C++
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

// Time Complexity Log(N) the array must be sorted in asc order
// the binary search will return the position of the founded value
int binary_search(vector<int>& listOfValues, int valueToSearch){

	int res = -1; //if the value was not found the res stays in -1 indicating it was not found

	// Bounds for the search lo = lower_bound hi = higher_bound
	int hi = listOfValues.size();
	int lo = 0;

	// While my bounds don't cross each other, i can keep searching for the answer
	// If they cross each other it means the value was not in the list of data.
	while(lo <= hi){
		// Find the mid of my range
		int mid = lo + (hi - lo) / 2;
		// Compare to see if i founded my value and retun its pos, if not move my bounds
		if(listOfValues[mid] == valueToSearch) return mid;
		// If the value is higher then what i'm looking for i move my higher bound to mid - 1
		else if(listOfValues[mid] > valueToSearch) hi = mid - 1;
		// If the value is lower then what i'm looking for i move my lower bound to mid + 1
		else if(listOfValues[mid] < valueToSearch) lo = mid + 1;
	}

	return res;
}

int main() {

	vector<int> listOfValues = {1, 5, 8, 10, 15, 16, 21, 59};
	cout << binary_search(listOfValues, 21) << endl;
	return 0;
}
