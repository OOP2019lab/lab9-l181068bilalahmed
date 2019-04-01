#include <iostream>
using namespace std;

class Project
{
	char* name;
	int budget;
	int duration; //estimate duration of project in weeks

public: 
	Project(char* name, int budget, int duration);
	// an overloaded constructor
	Project(const Project&);
	//copy constructor
	friend ostream& operator<<(ostream& os, const Project& a){
		os << "Project Details: " << endl;
		os << a.name << endl << a.budget << endl << a.duration << endl;
	}
	//overloaded insertion operator
	const Project & operator=(const Project& other);
	//overloaded assignment operator
	void setBudget(int); 
	~Project();
}; 
