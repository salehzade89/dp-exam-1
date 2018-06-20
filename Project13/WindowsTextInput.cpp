#include "WindowsTextInput.h"

WindowsTextInput::WindowsTextInput() = default;
WindowsTextInput::WindowsTextInput(const std::string& text) :text(text) {}
const std::string & WindowsTextInput::getText() const noexcept
{
	return text;
}
void WindowsTextInput::setText(std::string& text) noexcept
{
	this->text = text;
}
void WindowsTextInput::show() const noexcept
{
	std::cout << "Text : " << text << '\n';
}