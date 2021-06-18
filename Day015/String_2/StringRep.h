#pragma once
class StringRep{
friend class String;
public:

private:
	char* str_;
	int len_;
	int rc_;
	
	void init_str(const char* str);   // helper func

	StringRep(const char* str = 0);  // NULL°ª ´ë½Å 0
	StringRep(const char* str, bool);
};

