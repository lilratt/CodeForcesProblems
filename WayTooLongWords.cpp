#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string word;
        cin >> word;
        if (word.length() > 10){
            cout << word[0] << word.length() - 2 << word.back() << "\n";
        }
        else{
            cout << word << "\n";
        }
    }
    return 0;
}