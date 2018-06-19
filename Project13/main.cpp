#include <iostream>
#include <string>

struct ITextInput
{
	virtual const std::string & getText() const noexcept = 0;
	virtual void setText(std::string& text) noexcept = 0;
	virtual void show() const noexcept = 0;
};

struct IButton
{
	virtual const std::string & getText() const noexcept = 0;
	virtual void setText(std::string& text) noexcept = 0;
	virtual void show() const noexcept = 0;
};

class WindowsTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	WindowsTextInput() = default;
	WindowsTextInput(const std::string& text) :text(text) {}
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

class WindowsButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	WindowsButton() = default;
	WindowsButton(const std::string& text) :text(text) {}
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

class LinuxTextInput : public ITextInput
{
	std::string text;
	uint32_t id;
public:
	LinuxTextInput() = default;
	LinuxTextInput(const std::string& text) :text(text) {}
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

class LinuxButton :public IButton
{
	std::string text;
	uint32_t id;
public:
	LinuxButton() = default;
	LinuxButton(const std::string& text) :text(text) {}
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
	virtual IButton* createButton() const noexcept = 0;
	virtual ITextInput* createTextInput() const noexcept = 0;
};

struct WindowsFactory :public Factory
{
	IButton* createButton() const noexcept override
	{
		return new WindowsButton("struct WindowsFactory :public Factory");
	}
	ITextInput * createTextInput()const noexcept override
	{
		return new WindowsTextInput("struct WindowsFactory :public Factory");
	}
};

struct LinuxFactory :public Factory
{
	IButton* createButton() const noexcept override
	{
		return new LinuxButton("struct LinuxFactory :public Factory");
	}
	ITextInput * createTextInput() const noexcept override
	{
		return new LinuxTextInput("struct LinuxFactory :public Factory");
	}
};

int main()
{
	LinuxFactory linuxFactory;

	IButton * button = linuxFactory.createButton();

	button->show();

	delete button;

	system("pause");
	return 0;
}