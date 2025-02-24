#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> scores(n);
    
    for (int i = 0; i < n; i++) 
        cin >> scores[i];

    int threshold = scores[k - 1];

    for (int score : scores) {
        if (score > 0 && score >= threshold)
            count++;
    }

    cout << count << "\n";
    return 0;
}