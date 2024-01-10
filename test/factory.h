#pragma once

#include "global.h"
#include "type_util.h"
#include "base_pass.h"

template <class T>
struct sub_class : public Animal
{
	friend T;

	static bool trigger()
	{
		// static_assert(std::is_final_v<T>, "sub class should have final specified");
		std::cout << type_name<T>() << std::endl;
		return true;
	}
	static bool registered;

private:
	sub_class() : Animal()
	{
		(void)registered;
	}
};

template <class T>
bool sub_class<T>::registered = sub_class<T>::trigger();