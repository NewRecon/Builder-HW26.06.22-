#pragma once

class BuilderProgrammer : public Builder
{
private:
	Programmer* prog = new Programmer;

public:
	void setName(std::string name) override
	{
		this->prog->name = name;
	}
	void setPhone(std::string phone) override
	{
		this->prog->phone = phone;
	}
	void setOffice(std::string office) override
	{
		this->prog->office = office;
	}
	Programmer* get()
	{
		Programmer* buf = this->prog;

		this->prog = new Programmer;

		return buf;
	}
};

