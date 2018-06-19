#ifndef LINUXBUTTON_CPP
#define LINUXBUTTON_CPP

#include <iostream>
#include <string>
#include "IButton.cpp"

class LinuxButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	LinuxButton() = default;
	LinuxButton(const std::string& text) :text(text) {}
	const std::string & getText() const noexcept
	{
		return text;
	}
	void setText(std::string& text) noexcept
	{
		this->text = text;
	}
	void show() const noexcept
	{
		std::cout << "Text : " << text << '\n';
	}
};

#endif // !IBUTTON_CPP