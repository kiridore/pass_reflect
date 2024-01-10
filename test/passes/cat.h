#pragma once
#include "factory.h"
#include "base_pass.h"
class Cat : public sub_class<Cat> {
public:
  Cat() : sub_class<Cat>() {

  }

  void makeNoise() {}
  static std::string_view static_class_name()
  {
	  return "Cat";
  }
  std::string_view class_name() const override
  {
	  return "Cat";
  }
};
