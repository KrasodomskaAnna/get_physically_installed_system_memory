#include <stdio.h>
#include <windows.h>

extern unsigned long long get_ram();

int main() {
	unsigned long long ramInKilo, ramInMega;

	GetPhysicallyInstalledSystemMemory(&ramInKilo);
	printf("\n w KB: %lld\n", ramInKilo);


	ramInMega = get_ram();
	printf("\n w KB: %lld\n", ramInMega);

	return 0;
}