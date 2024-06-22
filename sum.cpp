/* Sum of two numbers */
#include <iostream>
using namespace std;

class sum {
public:
    int n1, n2;

    void add() {
        cout << "The sum is: " << n1+n2 << endl;
    }
};

int main() {
    sum s1;
    cout << "Enter any two numbers:" << endl;
    cin >> s1.n1 >> s1.n2;
    s1.add(); 
    return 0;
}
