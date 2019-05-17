#define _XOPEN_SOURCE
#include <unistd.h>



int main() {
	printf("%s\n",crypt("k","xz"));
}
