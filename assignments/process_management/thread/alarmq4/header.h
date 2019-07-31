/*
if (status != 0) {
	err_abort(status,"message");
}
else {
	return status;	
}
*/

#ifndef __header_h
#define __header_h

#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <error.h>

#define err_abort(code, text) do {\
	fprintf (stderr, "%s at \"%s\":%d: %s\n", \
		text, __FILE__, __LINE__,strerror(code)); \
	abort (); \
	}while (0)

#define errno_abort(text) do { \
	fprintf (stderr,"%s at \"%s\":%d: %s\n", \
		text,__FILE__,__LINE__,strerror(errno)); \
	abort (); \
	} while (0)

#endif
