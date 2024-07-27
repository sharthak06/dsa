// defining the constructor within the class
#include <iostream>
#include <string>
using namespace std;
struct Student {
	string name;
	int age;
	string gender;
	string address;
	string phoneNo;
	int marks[3];

	void get_data(){
		cout << "Enter name";
		cin.ignore();
		getline(cin)
	}


};


