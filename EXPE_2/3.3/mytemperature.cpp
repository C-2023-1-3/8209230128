#include "mytemperature.h" 

// �����¶ȵ������¶ȵ�ת������
double celsius_to_fah(double cel) 
{
	return cel * 9 / 5 + 32;
}

// �����¶ȵ������¶ȵ�ת������
double fahrenheit_to_cels(double fah) 
{
	return (fah - 32) * 5 / 9;
}
