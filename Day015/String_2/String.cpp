#include <cstring>
#include <cassert>
#include "String.h"
#include <iostream>
//#pragma warning(disable:4996)


std::ostream& operator<<(std::ostream& out, const String& rhs) {
	return out << rhs.c_str();
}

/*String::String() {
	str_ = new char[1];
	assert(str_);
	str_[0] = '\0';
	len_ = 0;
}*/

String::String(const char* s, bool) {		// 성능개선을 위한 멤버함수전용 생성자
	
	this->ptr_ = new StringRep(s, true);
	/*this->str_ = const_cast<char*>(s);
	this->ptr_->len_ = strlen(s);*/
	this->ptr_->rc_ = 1;
}

String::String(const char* s) {
	this->ptr_ = new StringRep(s);
	this->ptr_->rc_ = 1;
}

String::String(const String& rhs) {
	
	this->ptr_ = rhs.ptr_;
	++this->ptr_->rc_;
}

String::~String() {
	--this->ptr_->rc_;
	if (this->ptr_->rc_ == 0)
		delete this->ptr_;
}

String& String::operator=(const String& rhs) {
	if (this != &rhs) {			  // self-assignment test!
		--this->ptr_->rc_;
		if (this->ptr_->rc_ == 0)
			delete this->ptr_;
		this->ptr_ = rhs.ptr_;
		++this->ptr_->rc_;
	}

		return *this;
	
}

String& String::operator=(const char* str) {
	if (str != c_str()) {			  // self-assignment test!
		--this->ptr_->rc_;
		if (this->ptr_->rc_ == 0)
			delete this->ptr_;

		this->ptr_ = new StringRep(str);
		this->ptr_->rc_ = 1;
	}
	return *this;
}

bool String::operator==(const String& rhs) const {
	return strcmp(this->ptr_->str_, rhs.ptr_->str_) == 0;
}

const String String::operator+(const String& rhs) const {
	char* buf = new char[this->ptr_->len_ + rhs.ptr_->len_ + 1];
	assert(buf);
	strcpy_s(buf, this->ptr_->len_ + 1, this->ptr_->str_);
	strcat_s(buf, this->ptr_->len_ + rhs.ptr_->len_ + 1, rhs.ptr_->str_);

	//String result(buf);
	String result(buf, true);
	//delete[] buf;

	return result;
}


char& String::operator[](int index) {
	return this->ptr_->str_[index];
}

const char& String::operator[](int index) const {
	return this->ptr_->str_[index];
}


const char* String::c_str() const {
	return this->ptr_->str_;
}
int String::size() const {
	return this->ptr_->len_;
}