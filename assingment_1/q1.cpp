#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, value, i;
    
    while (true) {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: 
                cout << "Enter number of elements: ";
                cin >> n;
                cout << "Enter elements: ";
                for (i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;
                
            case 2: 
                cout << "Array elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
                
            case 3: 
                cout << "Enter position to insert (0 to " << n << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;
                if (pos < 0 || pos > n) {
                    cout << "Invalid position!\n";
                } else {
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    cout << "Element inserted.\n";
                }
                break;
                
            case 4: 
                cout << "Enter position to delete (0 to " << n - 1 << "): ";
                cin >> pos;
                if (pos < 0 || pos >= n) {
                    cout << "Invalid position!\n";
                } else {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted.\n";
                }
                break;
                
            case 5: // LINEAR SEARCH
                cout << "Enter value to search: ";
                cin >> value;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i << endl;
                        break;
                    }
                }
                if (i == n) {
                    cout << "Element not found.\n";
                }
                break;
                
            case 6: // EXIT
                cout << "Exiting program.\n";
                return 0;
                
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}

