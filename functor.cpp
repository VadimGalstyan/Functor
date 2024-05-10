#include <iostream>

class Animal
{

public:
Animal(const std::string& name) : m_name(name)
	{
	}
~Animal()
{
}

void operator()()
{
	std::cout<<m_name<<std::endl;
}

private:
std::string m_name;

};

int main()
{
    Animal bear("bear");

    bear();


return 0;
}

