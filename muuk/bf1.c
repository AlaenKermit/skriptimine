#define _XOPEN_SOURCE
#include <unistd.h>
#include <string.h>
#include <stdio.h>


int main() {
	char salt[] = "xz";
	char passwd[] = "a";	
	char encrypted[] = "xzLJmmTlCjSVo";

	char c1;
	
	for (c1 = 'a' ; c1 < 'z' ; c1++ ) {
		passwd[0] = c1;
		if (!strcmp(encrypted,crypt(passwd,salt))) {
			printf("parool on: %s\n",passwd);
		}

		
	}
}
