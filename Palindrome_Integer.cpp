#include <iostream>
using namespace std;

bool isPalindrome(int);

int main() 
{
    isPalindrome(121) ? cout << "True" << endl : cout << "False" << endl;
    isPalindrome(-121) ? cout << "True" << endl : cout << "False" << endl;
    isPalindrome(456) ? cout << "True" << endl : cout << "False" << endl;
    isPalindrome(0) ? cout << "True" << endl : cout << "False" << endl;

    return 0;
}

bool isPalindrome(int x) {
    if (x < 0) return false;
    else {
        int n = x;
        long rev = 0;
        while(x) {            
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        return (n == rev);
    }
}
