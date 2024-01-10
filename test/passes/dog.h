#pragma once
#include "factory.h"
#include "base_pass.h"

class Dog : public sub_class<Dog> {
public:
	Dog() : sub_class<Dog>()
	{

	}
public:
  void makeNoise() {}
  static std::string_view static_class_name()
  {
	  return "Dog";
  }
  std::string_view class_name() const override
  {
	  return "Dog";
  }
};