#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string city;

  // Step 1. Ask the user for their name and their city.
  cout << "What is your name? ";
  cin >> name;

  cout << "Where are you from? ";
  cin >> city;

  // Step 2. Print the greeting back to the user.
  cout << "Hello " + name + " from " + city + "!" << endl;
}
