// zavd_87.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T>
class Container
{
private:
    vector<T> vec;

public:
    void addVector(T num) {
        vec.push_back(num);
    }

    void deleteVector(T num) {
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == num) {
                vec.erase(vec.begin() + i);
            }
        }
    }

    void search(T num) {
        bool found = false;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == num) {
                cout << "Element found : " << vec[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Not found" << endl;
        }
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
        for (int i = 0; i < vec.size(); i++) {
            cout << "Element: " << vec[i] << endl;
        }
    }
};

int main()
{
    int choice;
    cout << "Choose the data type (1 - int, 2 - string): ";
    cin >> choice;

    if (choice == 1) {
        Container<int> intContainer;
        int num;

        while (true) {
            cout << "1 - Add, 2 - Delete, 3 - Search, 4 - Sort, 5 - Display, 6 - Exit: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Enter an integer to add: ";
                cin >> num;
                intContainer.addVector(num);
                cout << endl;
                break;
            case 2:
                cout << "Enter an integer to delete: ";
                cin >> num;
                intContainer.deleteVector(num);
                cout << endl;
                break;
            case 3:
                cout << "Enter an integer to search: ";
                cin >> num;
                intContainer.search(num);
                cout << endl;
                break;
            case 4:
                cout << "Before sorting" << endl;
                intContainer.display();
                cout << endl;

                cout << "After sorting" << endl;
                intContainer.sort();
                intContainer.display();
                cout << endl;
                break;
            case 5:
                intContainer.display();
                cout << endl;
                break;
            case 6:
                cout << "Exiting...." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }


    else if (choice == 2) {
        Container<string> stringContainer;
        string str;

        while (true) {
            cout << "1 - Add, 2 - Delete, 3 - Search, 4 - Sort, 5 - Display, 6 - Exit: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Enter a string to add: ";
                cin >> str;
                stringContainer.addVector(str);
                cout << endl;
                break;
            case 2:
                cout << "Enter a string to delete: ";
                cin >> str;
                stringContainer.deleteVector(str);
                cout << endl;
                break;
            case 3:
                cout << "Enter a string to search: ";
                cin >> str;
                stringContainer.search(str);
                cout << endl;
                break;
            case 4:
                cout << "Before sorting" << endl;
                stringContainer.display();
                cout << endl;

                cout << "After sorting" << endl;
                stringContainer.sort();
                stringContainer.display();
                cout << endl;
                break;
            case 5:
                stringContainer.display();
                cout << endl;
                break;
            case 6:
                cout << "Exiting...." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }
    else {
        cout << "Invalid choice." << endl;
    }
}