#include <iostream>
#include <string>

using namespace std;
int main()
{
    int input_number;
    cin >> input_number;
    string number_string = to_string(input_number);
    cout << number_string.length();
}
