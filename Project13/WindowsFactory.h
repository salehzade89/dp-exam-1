#ifndef WINDOWSFACTORY_H
#define WINDOWSFACTORY_H

#include "IFactory.h"
#include "WindowsButton.h"
#include "WindowsTextInput.h"

struct WindowsFactory :public IFactory
{
	IButton* createButton() const noexcept override;
	ITextInput * createTextInput()const noexcept override;
};
#endif // !WINDOWSFACTORY_H