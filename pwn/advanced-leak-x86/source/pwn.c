#include <stdio.h>
#include <unistd.h>
#include <string.h>

void init(){
    setvbuf(stdout, NULL, _IOLBF, 0);
}

void welcome(){
	char *words = "Welcome to Sniperoj!\nDancing in shackles, Right?";
	puts(words);
}

void vuln(){
	char buffer[16] = {0};
	read(0, buffer, 0x80);
}

int main(){
    init();
    welcome();
    vuln();
	return 0;
}
