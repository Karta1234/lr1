#include <iostream>
#include <vector>

#include <lib/lr1.h>
using namespace std;

int main() {
    vector<int> arr;
    int len;
    cin >> len;
    while (cin.fail() || len < 0)
    {
        cin.clear();
        cin.ignore();
        
        cout << "invalid count";
        cin >> len;
    }
    int i = 0;
    cout << "input number" << endl;
    while (i < len) 
    {
        int number;
        cin >> number;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();

            cout << "invalid number";
            cin >> number;
        }
        arr.push_back(number);
        i++;
    }
    int count = 0;
    i = 0;
    while (i < len - 1) {
        cout << arr[i];
        if ((arr[i] % 2 == 0) && (arr[i + 1] % 2 == 1))
        {
            count++;
        }
        i++;
    }
    cout << "Quantity of pairs in which the first element is even and the second is odd: " << count << endl;
    return 0;
}