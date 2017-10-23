#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	if (argc < 3) {
		return 0;
	}
	for (i = 1; i < argc - 1; i++) {
		if(argv[i][0] == '-' && argv[i][1] == '-') {
			int j, chlen = strlen(argv[i])-2;
			char *ch = (char *)malloc(sizeof(char)*chlen);
			for(j = 0; j < chlen; j++) {
				ch[j] = argv[i][j+2];
			}
			if (argv[i+1][0] == '-' && argv[i+1][1] == '-'){
				continue;
			}
			printf("%s:%s\n", ch, argv[i+1]);
			free(ch);
		}
	}
	return 0;
}