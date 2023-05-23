#include<iostream>
using namespace std;

int& lowest(int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] > 0) {
			return arr[i];
		}
	}
	
	return arr[0];
}

int main() {
	int arra[] = {-1, 2, 5, 1, 3};
	int out;
	
	out = arra[1];
	cout << out << endl;

	lowest(arra, sizeof(arra)) = 0;

	out = arra[1];
	cout << out << endl;

	return 0;
}