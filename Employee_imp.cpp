#include "18l1068_Employee.h"
#include <cstring>
using namespace std;

const Employee & Employee :: operator =(const Employee& a) {
	emp_name = new char(*a.emp_name);
	noOfProjects = a.noOfProjects;
	add = new Address(*a.add);
	pro = new Project *[noOfProjects];
	for (int i = 0; i < noOfProjects; i++) {
		pro[i] = new Project(*a.pro[i]);
	}
	return *this;
}

Employee::Employee(char* name, const Address& a) {
	emp_name = new char[strlen(name) + 1];
	int i = 0;
	for (i = 0; i < strlen(name); i++){
		emp_name[i] = name[i];
	}
	emp_name[i] = '\0';
	add = new Address (a);
	pro = nullptr;
	noOfProjects = 0;
}

Employee :: Employee(const Employee& a){
	emp_name = new char[strlen(a.emp_name) + 1];
	int i = 0;
	for (i = 0; i < strlen(a.emp_name); i++) {
		emp_name[i] = a.emp_name[i];
	}
	emp_name[i] = '\0';
	add = a.add;
	pro = a.pro;
	noOfProjects = a.noOfProjects;
}

Employee :: ~Employee(){
	delete emp_name;
	delete add;
	delete[] pro;
	noOfProjects = -1;
}

void Employee :: addProject(Project const * a){
	noOfProjects = noOfProjects++;
	Project ** temp = new Project *[noOfProjects + 1];
	for (int i=0; i < noOfProjects; i++){
		temp[i] = this -> pro[i];
	}

	Project buff(*a);
	
	for (int i = 0; i < noOfProjects - 1; i++){
		delete pro[i];
	}
	delete pro;

	*temp[noOfProjects - 1] = buff;
	this -> pro = temp;
}

void Employee :: removeProject(Project const * a){s
	noOfProjects = noOfProjects - 1;
	Project ** temp = new Project *[noOfProjects];
	for (int i = 0; i < noOfProjects; i++) {
		temp[i] = this->pro[i];
	}

	Project buff(*a);

	for (int i = 0; i < noOfProjects - 1; i++) {
		delete pro[i];
	}
	delete pro;

	*temp[noOfProjects - 1] = buff;
	this->pro = temp;
}
