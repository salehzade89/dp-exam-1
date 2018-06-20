#include <iostream>
#include <string>
#include "IButton.h"
#include "WindowsButton.h"

WindowsButton::WindowsButton() = default;
WindowsButton::WindowsButton(const std::string& text) :text(text) {}
const std::string & WindowsButton::getText() const noexcept
{
	return text;
}
void WindowsButton::setText(std::string& text) noexcept
{
	this->text = text;
}
void WindowsButton::show() const noexcept
{
	std::cout << "Text : " << text << '\n';
}