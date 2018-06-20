#include "LinuxFactory.h"

IButton* LinuxFactory::createButton() const noexcept 
{
	return new LinuxButton("struct LinuxFactory :public Factory");
}
ITextInput * LinuxFactory::createTextInput() const noexcept 
{
	return new LinuxTextInput("struct LinuxFactory :public Factory");
}