#ifndef WINDOWSTEXTINPUT_H
#define WINDOWSTEXTINPUT_H

#include <iostream>
#include <string>
#include "ITextInput.h"

class WindowsTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	WindowsTextInput();
	WindowsTextInput(const std::string& text);
	const std::string & getText() const noexcept;
	void setText(std::string& text) noexcept;
	void show() const noexcept;
};

#endif // !WINDOWSTEXTINPUT_H