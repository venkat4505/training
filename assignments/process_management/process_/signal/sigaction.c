//handling of signals using sigaction

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void signal_handler(int signum, siginfo_t *a, void *k)
{
	printf("signal num -> %d\n",a -> si_signo);
	printf("segmentation fault occured at %08x\n", a -> si_addr);
	printf("code -> %d\n",a -> si_code);
	printf("cjwjjhw -> %p\n", a ->  si_addr_lsb);

	exit(1);
}

int main()
{
	struct sigaction ptr;//instance of structure sigaction

	ptr.sa_sigaction = &signal_handler;//addrs of fn. signal_handler is asignd to fn.Pointer sa_sigaction which is in strctrestruct sigaction
	
	ptr.sa_flags = SA_SIGINFO;
	
	sigaction(SIGSEGV,&ptr,NULL);

	int *p = NULL;

	p = 1024;
	*p = 32;
	return 0;
}

