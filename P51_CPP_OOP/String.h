#pragma once
class String
{
	char* str;
	size_t size;

	size_t lenstr(const char* st);
	void copy(const char* str);

public:
	String();
	explicit String(size_t size);
	String(const char* str);
	~String();
	String(const String& st);
	String& operator=(const String& st);

	friend ostream& operator<<(ostream& out, const String& str);

	friend istream& operator>>(istream& in, String& str);

	int compare(const String& str); // 1 0 -1

	// + += [?] > < >= <= == !=
};

size_t String::lenstr(const char* st)
{
	size_t len = 0;
	while (st[len] != '\0')
		len++;
	return len;
}

void String::copy(const char* str)
{
	this->size = lenstr(str);
	this->str = new char[size + 1];
	for (size_t i = 0; i <= size; i++)
	{
		this->str[i] = str[i];
	}
}

String::String() :String(80)
{
}

String::String(size_t size)
{
	this->size = size;
	str = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		str[i] = ' ';
	}
	str[size] = '\0';
}

String::String(const char* str)
{
	copy(str);
}

String::~String()
{

}

String::String(const String & st)
{

}

String& String::operator=(const String & st)
{
	return *this;
}


ostream& operator<<(ostream& out, const String& str)
{
	out << str.str;
	return out;
}

istream& operator>>(istream& in, String& str)
{
	delete[] str.str;
	char buff[1024];
	in.getline(buff, 1024);
	str.copy(buff);
	return in;
}
