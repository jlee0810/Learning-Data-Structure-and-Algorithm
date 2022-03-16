/* There are n travelers in a village. The traveler guild is measuring fear susceptibility.
Travelers with high fear susceptibility are prone to fear and lacks level headed judgments.
Therefore the leader of the guild Joonwon decides that a traveler with X fear susceptibility 
requires to be in a group with more than X members. Joonwon is wondering how many groups he
will be able to make. Find the max number of groups possible. */

#include <iostream>
#include <vector>
using namespace std;

int n;
vector <int> arr;

int main() {
    cout << "Enter your number of travelers: ";
    cin >> n; 

    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    int answer = 0;
    int current;

    for (int i = 0; i < n; i++) {
        current += 1;
        if (current >= arr[i]) {
            answer += 1;
            current = 0;
        }
    }
    cout << answer << "\n";

}