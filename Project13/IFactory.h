#ifndef IFACTORY_H
#define IFACTORY_H

#include "ITextInput.h"
#include "IButton.h"

struct IFactory
{
	virtual IButton* createButton() const noexcept = 0;
	virtual ITextInput* createTextInput() const noexcept = 0;
};
#endif // !IFACTORY_H