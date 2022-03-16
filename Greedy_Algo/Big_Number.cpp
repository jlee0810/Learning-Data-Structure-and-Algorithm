/*Program provided with three value. First is the size of the dataset. The second number
 is how many times a number from the dataset is added. The last number is the maximum amount
 a number can show up. */

 #include <iostream>
 #include <vector> 
 using namespace std;

 int n, m, k;
 vector<int> arr; 

 int main() {
     cout << "How many numbers is in your dataset? ";
     cin >> n;
     cout << "How many times are you adding nubmers? ";
     cin >> m;
     cout << "What is the maximum number of time you can add the same number at the same index? ";
     cin >> k;


     cout << "Type in your dataset separating each number with a space or enter: ";
     for (int i = 0; i < n; i++) {
         int data;
         cin >> data;
         arr.push_back(data);
     }

     sort(arr.begin(), arr.end()); //Sorting the dataset into ascending order
     int first = arr[n - 1]; //Biggest number
     int second = arr[n - 2]; //Second Biggest Number

     int num_first = (m / (k + 1)) * k; //Find the number of patttern then multiply by k
     num_first += m % (k + 1); //Remainder of time we need to add biggest number 

     int answer = 0;
     answer += num_first * first;
     answer += (m - num_first) * second;

     cout << answer; 
     


 }