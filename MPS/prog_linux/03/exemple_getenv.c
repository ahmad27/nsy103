	#include <stdio.h>
	#include <stdlib.h>

	int
main (int argc, char * argv [])
{
	int 	i;
	char *	variable;

	if (argc == 1) {
		fprintf (stderr, "Utilisation : %s variable...\n", argv [0]);
		return (1);
	}
	for (i = 1; i < argc; i ++) {
		variable = getenv (argv [i]);
		if (variable == NULL)
			fprintf (stdout, "%s : non definie\n", argv [i]);
		else
			fprintf (stdout, "%s : %s\n", argv [i], variable);
	}
	return (0);
}
