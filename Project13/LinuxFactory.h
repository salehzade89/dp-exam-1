#ifndef LINUXFACTORY_H
#define LINUXFACTORY_H

#include "IFactory.h"
#include "LinuxButton.h"
#include "LinuxTextInput.h"

struct LinuxFactory :public IFactory
{
	IButton* createButton() const noexcept override;
	ITextInput * createTextInput() const noexcept override;
};

#endif // !LINUXFACTORY_H