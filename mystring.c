#include <stdio.h>

int mystrlen(char *s) {
	int i = 0;
	while (*(s + i)) {
		i++;
	}
	return i;
}
char * mystrcpy(char *s1, char *s2) {
	int i = 0;
	while (*(s2 + i)) {
		*(s1 + i) = *(s2 + i);
		i++;
	}
	return s1;
}

char * mystrncat(char *s1, char *s2, int size) {
	int i = 0;
	int len = mystrlen(s1);
	while (i < size) {
		*(s1 + i + len + 1) = *(s2 + i);
		i++;
	}
	*(s1 + i + len + 1) = 0;
	return s1;
}

char * mystrchr(char *s, char c) {
	int i = 0;
	int len = mystrlen(s);
	while (i < len + 1) {
		if (*(s + i) == c) {
			return (s + i);
		}
		i++;
	}
	return NULL;
}

int mystrcmp (char *s1, char *s2) {
	int a = mystrlen(s1);
	int b = mystrlen(s2);
	int i;
	for (i = 0; i < a; i++) {
		if (*(s1+i) < *(s2+i)) {
			return -1;
		}
		else {
			if (*(s1+i) > *(s2+i)) {
				return 1;
			}
		}
	}
	if (a > b) {
		return 1;
	}
	else {
		if (a < b) {
			return -1;
		}
		else {
			return 0;
		}
	}
}

