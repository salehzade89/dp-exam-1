#ifndef LINUXTEXTINPUT_CPP
#define LINUXTEXTINPUT_CPP

#include <iostream>
#include <string>
#include "ITextInput.cpp"

class LinuxTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	LinuxTextInput() = default;
	LinuxTextInput(const std::string& text) :text(text) {}
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

#endif // !LINUXTEXTINPUT_CPP