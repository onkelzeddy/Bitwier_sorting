

#pragma once
class unit 
{
public:
	unit(int tmp);
	~unit();
	void setContent(int tmp);
	int getContent();
	void setNext(unit* tmp);
	unit* getNext();


private:
	int cont; 
	unit* next; 
	
};


unit::unit(int tmp_ = -1) {
	cont = tmp_;
	next = nullptr; 
}

unit::~unit() {}

void unit::setContent(int tmp) {
	cont = tmp;
}

int unit::getContent() {
	return cont;
}

void unit::setNext(unit* tmp) {
	next = tmp;
}

unit* unit:: getNext() {
	return next;
}




