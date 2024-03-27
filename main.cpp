#include <iostream>
#include <vector>

using namespace std;

class Data {
private:
    vector<int> numbers;
public:
    void Display_Menu() {
        cout << "Menu:\n"
             << "0. Quit\n"
             << "1. Input Numbers\n"
             << "2. Display Numbers\n"
             << "3. Search Numbers\n"
             << "4. Delete Numbers\n";
    }

    void Input_Numbers() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        numbers.push_back(num);
        cout << "Number added successfully.\n";
    }

    void Display_Numbers() {
        if (numbers.empty()) {
            cout << "The list is empty.\n";
            return;
        }
        cout << "Numbers:\n";
        for (int num : numbers) {
            cout << num << endl;
        }
    }

    void Search_Numbers() {
        if (numbers.empty()) {
            cout << "The list is empty.\n";
            return;
        }
        int num;
        cout << "Enter a number to search: ";
        cin >> num;
        for (int i = 0; i < numbers.size(); i++) {
            if (numbers[i] == num) {
                cout << num << " is found at index " << i << endl;
                return;
            }
        }
        cout << num << " is not found in the list.\n";
    }

    void Delete_Numbers() {
        if (numbers.empty()) {
            cout << "The list is already empty.\n";
            return;
        }
        numbers.clear();
        cout << "All numbers have been deleted.\n";
    }
};

int main() {
    Data data;
    int choice;
    do {
        data.Display_Menu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Exiting the program.\n";
                break;
            case 1:
                data.Input_Numbers();
                break;
            case 2:
                data.Display_Numbers();
                break;
            case 3:
                data.Search_Numbers();
                break;
            case 4:
                data.Delete_Numbers();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
    return 0;
}
