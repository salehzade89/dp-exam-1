#include <iostream>
#include "LinuxButton.h"

LinuxButton::LinuxButton() = default;
LinuxButton::LinuxButton(const std::string& text) :text(text) {}

const std::string & LinuxButton::getText() const noexcept
{
	return text;
}
void LinuxButton::setText(std::string& text) noexcept
{
	this->text = text;
}
void LinuxButton::show() const noexcept
{
	std::cout << "Text : " << text << '\n';
}