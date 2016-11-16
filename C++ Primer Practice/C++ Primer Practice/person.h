#pragma once
#include <string>
#include <iostream>

class Person
{
public:
	Person(){}
	Person(std::string name, std::string address)
		: name(name), address(address) {}
	void setAddress(std::string& address)
	{
		this->address = address;
	}
	std::string getAddress()
	{
		return this->address;
	}
	void setName(std::string& name)
	{
		this->name = name;
	}
	std::string& getName()
	{
		return this->name;
	}
	std::istream& read(std::istream& is, Person &per)
	{
		is >> per.name >> per.address;
		return is;
	}
	std::ostream& print(std::ostream& os, const Person &per)
	{
		os << per.name << ' ' << per.address;
		return os;
	}
private:
	std::string name;
	std::string address;
};