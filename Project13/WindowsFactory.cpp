#include "WindowsFactory.h"

IButton* WindowsFactory::createButton() const noexcept 
{
	return new WindowsButton("struct WindowsFactory :public Factory");
}
ITextInput * WindowsFactory::createTextInput()const noexcept 
{
	return new WindowsTextInput("struct WindowsFactory :public Factory");
}