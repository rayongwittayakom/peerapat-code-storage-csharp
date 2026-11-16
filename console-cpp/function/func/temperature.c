// Peerapat Siri M.1/3 No.18
#include <stdio.h>

float convert_temperature(float temp) {
	return (float)(temp * 9.0 / 5.0 + 32);
}

int main() {
	float temp;
	printf("Enter temperature in celsius: ");
	scanf_s("%f", &temp);
	float converted_temp = convert_temperature(temp);
	printf("%.2f C is %.2f F\n", temp, converted_temp);
	return 0;
}