void A(int& A) 
{
	A += 1;
}

void A(int* B)//�Լ� �����ε�
{
	*B += 1;
}


int main() {
	int i = 0;
	A(i);
	int* j = &i;
	A(j);
	i;
	int b = 0;
	j;
	int x = 1;
	return 0;
}