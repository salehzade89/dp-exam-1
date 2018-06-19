#include <iostream>
#include <string>
#include "LinuxFactory.cpp"
#include "WindowsFactory.cpp"

int main()
{
	LinuxFactory linuxFactory;

	IButton * button = linuxFactory.createButton();

	button->show();

	delete button;

	system("pause");
	return 0;
}