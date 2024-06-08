#include<stdio.h>
#include<string.h>

// function to return the number of unique
// characters in str[]
int count_unique_char(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;

	// reading each character of str[]
	for (i = 0; i < strlen(str); ++i) {
		// set the position corresponding 
		// to the ASCII value of str[i] in hash[] to 1
		hash[str[i]] = 1;
	}

	// counting number of unique characters
	// repeated elements are only counted once
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}

	return c;

}

int main() {
	char str[300];
	scanf("%s",&str);
    if(count_unique_char(str) % 2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}