// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see COPYING in the main folder

#ifndef _LOCK_H_
#define _LOCK_H_

#include <stdio.h>

FILE* lock_fopen(const char* filename,int *info);
int   lock_fclose(FILE *fp,const char* filename,int *info);

#endif /* _LOCK_H_ */
