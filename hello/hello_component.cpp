#include <pybind11/pybind11.h>

namespace py = pybind11;

char version[]="1.0";

char const* getVersion() {
	return version;
}

char const* greet() {
  return "hello, world";
}

double const addNumber(double d1, double d2){
	return d1 + d2;
}

namespace py = pybind11;


PYBIND11_MODULE(hello_component,greetings)
{
  greetings.doc() = "greeting_object 1.0";
  greetings.def("addNumber", &addNumber, "a function that add two double");
  greetings.def("greet", &greet, "a function saying hello");
  greetings.def("getVersion", &getVersion, "a function returning the version");
}
