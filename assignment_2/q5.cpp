//Using diagnol matrix

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int diag[50];
    cout << "Enter diagonal elements:\n";
    for (int i = 0; i < n; i++)
        cin >> diag[i];
    cout << "Stored diagonal:\n";
    for (int i = 0; i < n; i++)
        cout << diag[i] << " ";
    cout << "\n";
    
    return 0;
}