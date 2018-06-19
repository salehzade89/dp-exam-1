#ifndef WINDOWSFACTORY_CPP
#define WINDOWSFACTORY_CPP

#include "IFactory.cpp"
#include "WindowsButton.cpp"
#include "WindowsTextInput.cpp"

struct WindowsFactory :public IFactory
{
	IButton* createButton() const noexcept override
	{
		return new WindowsButton("struct WindowsFactory :public Factory");
	}
	ITextInput * createTextInput()const noexcept override
	{
		return new WindowsTextInput("struct WindowsFactory :public Factory");
	}
};
#endif // !WINDOWSFACTORY_CPP

