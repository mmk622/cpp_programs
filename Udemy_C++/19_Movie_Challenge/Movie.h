#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
private:
	std::string name;
	std::string rating;
	int watched;

public:
	//Constructor
	Movie(std::string name, std::string rating, int watched);
		
	//Copy constructor
	Movie(const Movie &source);
	
	//Destructor 
	~Movie();

	//Basic getters and setters for private attributes

	void set_name(std::string name) { this->name = name; }
	std::string get_name() const { return name; }
	
	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return rating; }
	
	void get_watched() const { return watched; }

	//increment watched
	void increment_watched() { ++watched; }

	void display() const;	
};




#endif //_MOVIE_H_
