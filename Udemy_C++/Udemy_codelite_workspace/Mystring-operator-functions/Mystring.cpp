#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()
	:str(NULL) {
	str = new char[1];
	*str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
	:str(NULL) {
	if(str == NULL) {
		if(s == NULL) {
			str = new char[1];
			*str = '\0';
		} else {
			str = new char[std::strlen(s)+1];
			std::strcpy(str,s);
		}
	}
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
	:str(NULL) {
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str, source.str);
}

//Move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str) {
        source.str = NULL;                                                      //set null to source str
        std::cout<<" Move constructor used" << std::endl;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment " << std::endl;
    
    if(this == &rhs)
        return *this;
        
    delete [] str;
    
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

//Move assignment 
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    
    //Check for self assignemnt
    if(this == &rhs)
        return *this;
    
    //Delete the str from current object
    delete [] str;
    
    //Steal its pointer
    str = rhs.str;
    
    //Nullify the right side pointer
    rhs.str = NULL;

    return *this;
}

//Destructor
Mystring::~Mystring() {
	delete [] str;
}

//Display Method
void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const { return std::strlen(str); }

//string getter
const char *Mystring::get_str() const { return str; }

//Equality
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str));
}

//Make lowercase
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    for( size_t i = 0; i < std::strlen(buff); ++i) 
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//Concactenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}