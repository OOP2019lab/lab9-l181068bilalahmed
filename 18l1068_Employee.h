#include "18l1068_Address.h"
#include "18l1068_Project.h"

using namespace std;

class Employee
{
	char* emp_name; 
	Address* add;
	Project ** pro;
	int noOfProjects;
public:
	Employee(char* name, const Address&);
	//overloaded constructor
	Employee(const Employee&);
	//copy constructor
	friend ostream& operator<<(ostream& os, const Employee& a){
		os << "Employee Details: " << endl;
		os << a.emp_name << endl << *a.add << endl << a.pro << endl
		for (int i = 0; i < e.no_of_projects; i++) {
			o << *e.P[i];
		}
		return os;
	}
	//overloaded insertion operator
	const Employee & operator=(const Employee& other);
	//overloaded assignment operator

	void addProject(Project const * );
	void removeProject(Project const * ); 

	~Employee();

}; 