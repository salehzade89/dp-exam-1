#ifndef WINDOWSBUTTON_H
#define WINDOWSBUTTON_H

#include "IButton.h"
#include <string>

class WindowsButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	WindowsButton();
	WindowsButton(const std::string& text);
	const std::string & getText() const noexcept;
	void setText(std::string& text) noexcept;
	void show() const noexcept;
};

#endif // !WINDOWSBUTTON_H