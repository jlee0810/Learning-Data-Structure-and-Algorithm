/*This program calculates how many steps it 
requires for the number to reach 1 either by 
dividing by a specific digit or subtracting one
Implements greedy algorithm*/

#include <iostream>
using namespace std;

int n, k;
int answer;

int main () {
    cout << "Enter the number you want to count: \n";
    cin >> n;
    cout << "Enter the number you want to divide by: \n";
    cin >> k;

    while (true) {
        //Adds the amount of substraction of one that needs to take place 
        int untilDiv = (n / k) * k;
        answer += n - untilDiv;

        //When n is smaller than k stop the loop 
        n = untilDiv;
        if (n < k)
            break;
        
        //Divide the number by k
        n /= k;
        answer += 1;
    }
    //Find how many times we have to subtract 1 by to get the remainder to 1
    answer += n - 1;

    cout << "It takes " << answer << "steps!";
} 
