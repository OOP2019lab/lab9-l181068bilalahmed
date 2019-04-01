#include <iostream>
#include "18l1068_Address.h"

using namespace std;

Address :: Address(char* house_number, char* Street_Name, char * City,char* Country){
	int i = 0;
	house_Number = new char[strlen(house_number) + 1];
	for (i = 0; i < strlen(house_number); i++) {
		house_Number[i] = house_number[i];
	}
	house_Number[i] = '\0';

	street_Name = new char[strlen(Street_Name) + 1];
	for (i = 0; i < strlen(Street_Name); i++) {
		street_Name[i] = Street_Name[i];
	}
	street_Name[i] = '\0';

	city = new char[strlen(City) + 1];
	for (i = 0; i < strlen(City); i++) {
		city[i] = City[i];
	}
	city[i] = '\0';

	country = new char[strlen(Country) + 1];
	for (i = 0; i < strlen(Country); i++) {
		country[i] = Country[i];
	}
	country[i] = '\0';
}

Address :: Address (const Address& a){
	int i = 0;
	house_Number = new char[strlen(a.house_Number) + 1];
	for (i = 0; i < strlen(a.house_Number); i++) {
		house_Number[i] = a.house_Number[i];
	}
	house_Number[i] = '\0';

	street_Name = new char[strlen(a.street_Name) + 1];
	for (i = 0; i < strlen(street_Name); i++) {
		street_Name[i] = a.street_Name[i];
	}
	street_Name[i] = '\0';

	city = new char[strlen(a.city) + 1];
	for (i = 0; i < strlen(a.city); i++) {
		city[i] = a.city[i];
	}
	city[i] = '\0';

	country = new char[strlen(a.country) + 1];
	for (i = 0; i < strlen(a.country); i++) {
		country[i] = a.country[i];
	}
	country[i] = '\0';
}

Address :: ~Address(){
	delete house_Number;
	delete street_Name;
	delete city;
	delete country;
}

const Address& Address :: operator =(const Address& a){
	int i = 0;
	house_Number = new char[strlen(a.house_Number) + 1];
	for (i = 0; i < strlen(a.house_Number); i++) {
		house_Number[i] = a.house_Number[i];
	}
	house_Number[i] = '\0';

	street_Name = new char[strlen(a.street_Name) + 1];
	for (i = 0; i < strlen(street_Name); i++) {
		street_Name[i] = a.street_Name[i];
	}
	street_Name[i] = '\0';

	city = new char[strlen(a.city) + 1];
	for (i = 0; i < strlen(a.city); i++) {
		city[i] = a.city[i];
	}
	city[i] = '\0';

	country = new char[strlen(a.country) + 1];
	for (i = 0; i < strlen(a.country); i++) {
		country[i] = a.country[i];
	}
	country[i] = '\0';
	return *this;
}

