#ifndef IBUTTON_CPP
#define IBUTTON_CPP

#include <string>

struct IButton
{
	virtual const std::string & getText() const noexcept = 0;
	virtual void setText(std::string& text) noexcept = 0;
	virtual void show() const noexcept = 0;
};

#endif // !IBUTTON_CPP