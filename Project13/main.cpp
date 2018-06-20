#include <iostream>
#include <string>
#include "LinuxFactory.h"
#include "WindowsFactory.h"

int main()
{

	LinuxFactory linuxFactory;
	IButton * button = linuxFactory.createButton();
	button->show();
	delete button;

	system("pause");
	return 0;
}