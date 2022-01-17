int MyPrintf_s(const char* const _Text)
{
	int Count = 0;

	while (0 != _Text[Count])
	{
		putchar(_Text[Count]);
		Count += 1;
	}

	return Count;
}
//git 변경점