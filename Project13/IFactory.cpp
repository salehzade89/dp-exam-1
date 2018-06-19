#ifndef IFACTORY_CPP
#define IFACTORY_CPP

#include "ITextInput.cpp"
#include "IButton.cpp"

struct IFactory
{
	virtual IButton* createButton() const noexcept = 0;
	virtual ITextInput* createTextInput() const noexcept = 0;
};
#endif // !IFACTORY_CPP