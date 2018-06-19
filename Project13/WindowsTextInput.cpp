#ifndef WINDOWSTEXTINPUT_CPP
#define WINDOWSTEXTINPUT_CPP

#include <iostream>
#include <string>
#include "ITextInput.cpp"

class WindowsTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	WindowsTextInput() = default;
	WindowsTextInput(const std::string& text) :text(text) {}
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


#endif // !WINDOWSTEXTINPUT_CPP