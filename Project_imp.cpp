#include "18l1068_Project.h"

const Project & Project :: operator=(const Project& a) {
	int size = strlen(a.name);
	for (int i = 0; i < size; i++) {
		name[i] = a.name[i];
	}
	budget = a.budget;
	duration = a.duration;
}

Project::Project(char* Name, int Budget, int Duration) {
	name = new char[strlen(Name) + 1];
	int i = 0;
	for (i = 0; i < strlen(Name); i++){
		name[i] = Name[i];
	}
	name[i] = '\0';
	budget = Budget;
	duration = Duration;	
}

Project :: Project(const Project& a){
	name = new char(*a.name);
	budget = a.budget;
	duration = a.duration;
}

Project :: ~Project(){
	delete name;
	budget = -1;
	duration = -1;
}

void Project :: setBudget(int a){
	cout << "Old budget was: " << budget;
	budget = a;
	cout << "New budget is: " << budget;
}
