#include "main.h"

// Implementation details (usually in a .cpp file)
MyClass::MyClass(int initialValue) : m_data(initialValue) {}
void MyClass::setValue(int newValue) { m_data = newValue; }
int MyClass::getValue() const { return m_data; }