class Address
{
	friend ostream& operator<<(ostream& os, const Address& a){
	os << "Address: " << endl;
	os << a.house_Number << endl << a.street_Name << endl << a.city << endl << a.country << endl;
	return os;
    }

	char* house_Number;
	char* street_Name ;
	char* city;
	char* country;

public:
	Address(char* house_Number, char* Street_Name, char * City,char* County);
	// an overloaded constructor
	Address(const Address&);
	//copy constructor
	const Address & operator=(const Address& other);
	//overloaded assignment operator
	~Address();
};
