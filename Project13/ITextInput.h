#ifndef ITEXTINPUT_H
#define ITEXTINPUT_H

#include <string>

struct ITextInput
{
	virtual const std::string & getText() const noexcept = 0;
	virtual void setText(std::string& text) noexcept = 0;
	virtual void show() const noexcept = 0;
};

#endif // !ITEXTINPUT_H
