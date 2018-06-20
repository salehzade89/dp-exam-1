#ifndef LINUXTEXTINPUT_H
#define LINUXTEXTINPUT_H

#include <iostream>
#include <string>
#include "ITextInput.h"

class LinuxTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	LinuxTextInput();
	LinuxTextInput(const std::string& text);
	const std::string & getText() const noexcept;
	void setText(std::string& text) noexcept;
	void show() const noexcept;
};

#endif // !LINUXTEXTINPUT_H