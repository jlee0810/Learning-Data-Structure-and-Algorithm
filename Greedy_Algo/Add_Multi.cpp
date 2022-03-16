/* A string S is given with numbers from 0 to 9. From left to right, you either add or
multiply every number to find the biggest number possible. Order of operations doesn't appply
for this problem.*/
#include <iostream> 


using namespace std; 
string str; 

int main() {
    cout << "Enter your number: ";
    cin >> str;

    int max_result = str[0] - '0'; 
    
    for (int i = 1; i < str.length(); i++) {
        int num = str[i] - '0';
        if (num <= 1 || max_result <= 1) 
            max_result += num;
        else
            max_result *= num;
    }

    cout << max_result;
}