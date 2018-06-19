#ifndef LINUXFACTORY_CPP
#define LINUXFACTORY_CPP

#include "IFactory.cpp"
#include "LinuxButton.cpp"
#include "LinuxTextInput.cpp"

struct LinuxFactory :public IFactory
{
	IButton* createButton() const noexcept override
	{
		return new LinuxButton("struct LinuxFactory :public Factory");
	}
	ITextInput * createTextInput() const noexcept override
	{
		return new LinuxTextInput("struct LinuxFactory :public Factory");
	}
};


#endif // !LINUXFACTORY_CPP

