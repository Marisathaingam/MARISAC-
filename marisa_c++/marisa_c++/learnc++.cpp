#include <iostream>
#include <vector>
using namespace std;

int numbersFunction (vector<int> number, int target) {
    for (int i=0; i <= number.size(); i++ ) {
        if(number [i]== target) {
            return i;
        } else if (number [i] > target) {
            return i;
        }
    }

    return 0;
}
int main() {
    
    cout << numbersFunction({1,3,5,6,}, 5) << endl;
}

