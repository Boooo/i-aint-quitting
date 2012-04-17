// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see COPYING in the main folder

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "nullpo.h"

/*======================================
 * nullpo_info_core (Main)
 *--------------------------------------*/
static void
nullpo_info_core (const char *file, int line, const char *func, 
				  const char *fmt, va_list ap)
{
	if (file == NULL)
		file = "??";
	
	func = (func == NULL) ? "unknown": ((func[0] == '\0') ? "unknown": func);
	
	printf("--- nullpo info --------------------------------------------\n");
	printf("%s:%d: in func `%s'\n", file, line, func);
	if (fmt != NULL)
	{
		if (fmt[0] != '\0')
		{
			vprintf (fmt, ap);
			
			if (fmt[strlen(fmt)-1] != '\n')
				printf("\n");
		}
	}
	printf("--- end nullpo info ----------------------------------------\n");
}

/*======================================
 * nullpo_chk
 *--------------------------------------*/
int
nullpo_chk (const char *file, int line, const char *func,
			const void *target)
{
	if (target != NULL)
		return 0;
	
	nullpo_info_core (file, line, func, NULL, NULL);
	return 1;
}


/*======================================
 * nullpo_info
 *--------------------------------------*/
void
nullpo_info (const char *file, int line, const char *func)
{
	nullpo_info_core (file, line, func, NULL, NULL);
}
