//dynamic initialization of mutex

#include"header.h"

typedef struct my_struct_tag {
	pthread_mutex_t mutex;          //protects access to value
	int value;                      //access protected by mutex
}my_struct_t;

//my_struct_t data = (PTHREAD_MUTEX_INITIALIZER, 0);

int main(int argc, char *argv[])
{
	int status;

	my_struct_t *data;

	data = malloc (sizeof(my_struct_t));
	if (data == NULL) 
		errno_abort("allocate structure\n");

	status = pthread_mutex_init(&data -> mutex, NULL);
	if(status != 0)
		 err_abort(status,"init mutex");

	status = pthread_mutex_lock(&data -> mutex);
	if(status != 0)
		err_abort(status,"locking mutex");

	data -> value = 2020;

	status = pthread_mutex_unlock(&data -> mutex);
	if (status != 0)
		err_abort (status,"locking mutex");

	status = pthread_mutex_destroy(&data -> mutex);
    if (status != 0)
    	err_abort (status,"destroy mutex");

	(void) free (data);

return status;
}
