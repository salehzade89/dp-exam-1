#ifndef WINDOWSBUTTON_CPP
#define WINDOWSBUTTON_CPP

#include <iostream>
#include <string>
#include "IButton.cpp"

class WindowsButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	WindowsButton() = default;
	WindowsButton(const std::string& text) :text(text) {}
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

#endif // !WINDOWSBUTTON_CPP