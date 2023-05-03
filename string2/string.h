#ifndef STRING_H
#define STRING_H
#include <iostream>
#include "stringRep.h"

class String {
friend std::ostream& operator <<(std::ostream& out, const String& rhs);
private:
	StringRep *rep_;
	int len;
public:
	// String *operator&() { return this;}
	//const String *operator&() const { return this;}
	String(const char *s);
	String(const String& rhs);
	String();
	~String();
	
	String& operator=(const String& rhs);
	//String& operator=(const char *s);
	bool operator==(const String& rhs) const;
	const String operator+(const String& rhs) const;
	
	const char *c_str() const;
	int size() const;
	
	
};

#endif
