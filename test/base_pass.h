#pragma once

using namespace std;
struct Animal;

struct Animal
{
public:
	Animal() { }
	virtual void makeNoise() = 0;
	virtual std::string_view class_name() const
	{
		return "";
	}
protected:

public:
};

