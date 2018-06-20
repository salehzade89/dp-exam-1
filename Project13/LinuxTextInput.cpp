#include "LinuxTextInput.h"

LinuxTextInput::LinuxTextInput() = default;
LinuxTextInput::LinuxTextInput(const std::string& text) :text(text) {}
const std::string & LinuxTextInput::getText() const noexcept
{
	return text;
}
void LinuxTextInput::setText(std::string& text) noexcept
{
	this->text = text;
}
void LinuxTextInput::show() const noexcept
{
	std::cout << "Text : " << text << '\n';
}