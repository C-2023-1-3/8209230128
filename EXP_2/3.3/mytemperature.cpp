#include "mytemperature.h" 

// 摄氏温度到华氏温度的转换函数
double celsius_to_fah(double cel) 
{
	return cel * 9 / 5 + 32;
}

// 华氏温度到摄氏温度的转换函数
double fahrenheit_to_cels(double fah) 
{
	return (fah - 32) * 5 / 9;
}
