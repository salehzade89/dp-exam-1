#include <iostream>
#include <string>

class TextInput
{
	std::string text;
	uint32_t id;
public:
	TextInput() = default;
	TextInput(const std::string& text) :text(text) {}
	const std::string & getText() const noexcept
	{
		return text;
	}
	void setText(std::string& text) noexcept
	{
		this->text = text;
	}
	void show() const noexcept
	{
		std::cout << "Text : " << text << '\n';
	}
};

class Button
{
	std::string text;
	uint32_t id;
public:
	Button() = default;
	Button(const std::string& text) :text(text) {}
	const std::string & getText() const noexcept
	{
		return text;
	}
	void setText(std::string& text) noexcept
	{
		this->text = text;
	}
	void show() const noexcept
	{
		std::cout << "Text : " << text << '\n';
	}
};

struct Factory
{
	virtual Button* createButton() const noexcept = 0;
	virtual TextInput* createTextInput() const noexcept = 0;
};

struct WindowsFactory :public Factory
{
	Button* createButton() const noexcept override
	{
		return new Button("struct WindowsFactory :public Factory");
	}
	TextInput * createTextInput()const noexcept override
	{
		return new TextInput("struct WindowsFactory :public Factory");
	}
};

struct LinuxFactory :public Factory
{
	Button* createButton() const noexcept override
	{
		return new Button("struct LinuxFactory :public Factory");
	}
	TextInput * createTextInput() const noexcept override
	{
		return new TextInput("struct LinuxFactory :public Factory");
	}
};

int main()
{
	LinuxFactory linuxFactory;

	Button * button = linuxFactory.createButton();

	button->show();

	delete button;

	system("pause");
	return 0;
}