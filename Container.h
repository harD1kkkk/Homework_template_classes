#pragma once
#include <iostream>
#include <vector>
using namespace std;
template<class T>
class Container
{
private:
	vector <T> vec;
public:
	void addVector(T num) {
		vec.push_back(num);
	}

	void deleteVector(T num) {
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == num) {
				cout << "Deleted: " << num << endl;
				vec.erase(vec.begin() + i);
			}
		}
		cout << "Not found" << endl;
	}

	void search(T num) {
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == num) {
				cout << "Element found: " << vec[i] << endl;
				return;
			}
		}
		cout << "Not found" << endl;
	}

	void sort() {
		bool isSorted = false;
		for (int i = 0; i < vec.size(); i++) {
			isSorted = true;
			for (int j = i + 1; j < vec.size(); j++) {
				if (vec[i] > vec[j]) {
					auto temp = vec[i];
					vec[i] = vec[j];
					vec[j] = temp;
					isSorted = false;
				}
			}
			if (isSorted) {
				break;
			}
		}
	}


	void display() {
		if (vec.empty()) {
			cout << "Vector is empty." << endl;
		}
		else {
			for (int i = 0; i < vec.size(); i++) {
				cout << "Element: " << vec[i] << endl;
			}
		}
	}
};