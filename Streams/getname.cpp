#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
  string input;
  string firstname;
  string lastname;
  int age = 0;

  cout << "Enter your first name: ";
  getline (cin, firstname);
  cout << "Enter your last name: ";
  getline (cin, lastname);
  cout << "Enter your age: ";
  getline(cin, input);
  stringstream(input) >> age;

  cout << "Your first name is: " << fistname << endl;
  cout << "Your last name is: " << lastname << endl;
  cout << "Your age is: " << age << endl;

  ofstream output;
  output.open("output_file.txt");
  output << "First name: "<< '\t' << firstname << '\t';
  output << "Last name: " << '\t' << lastname << '\t';
  output << "Age: " << '\t' << age << endl;
  output.close();

  return 0;
}
  
