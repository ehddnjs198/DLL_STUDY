#include "pch.h"
#include "MyDLL.h"

Person::Person(std::string name, int age, std::string address) {
	this->age = age;
	this->name = name;
	this->address = address;
}

void Person::ShowInfo() {
	OutputDebugStringA(("이름: " + name + "\n").c_str());
	OutputDebugStringA(("나이: " + std::to_string(age) + "\n").c_str());
	OutputDebugStringA(("주소: " + address + "\n").c_str());
}