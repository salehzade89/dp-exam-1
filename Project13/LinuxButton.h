#ifndef LINUXBUTTON_H
#define LINUXBUTTON_H

#include <string>
#include "IButton.h"

class LinuxButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	LinuxButton();
	LinuxButton(const std::string& text);
	const std::string & getText() const noexcept;
	void setText(std::string& text) noexcept;
	void show() const noexcept;
};
#endif // !IBUTTON_H