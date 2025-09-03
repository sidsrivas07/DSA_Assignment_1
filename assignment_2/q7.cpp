//Calculate inversions

#include <iostream>
using namespace std;

int main()
{
    int n, a[50], cnt = 0;
    cout << "Enter the number of elements in array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                cnt++;
        }
    }
    cout << "Inversions: " << cnt << "\n";
}