#pragma once
class Array
{
private:
	int x_;
	int y_;
	char* A_;
	char B_[3];
public:
	void Creat(int _x, int _y, const char* _Text);
	void Print();
public:
	Array();
	~Array();
	Array(const Array& _Other) = delete;
	Array(Array&& _Other) noexcept = delete;
	Array& operator=(const Array& _Other) = delete;
	Array& operator=(Array&& _Other) noexcept = delete;

};

