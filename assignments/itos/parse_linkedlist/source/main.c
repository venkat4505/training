#include<stdio.h>

struct link {
	struct link *next;
	struct link *prev;
};


struct task {
	long state;
	int pid;
	int flags;
	int prio;
	unsigned char fpu_counter;
	struct link tasks;
	char rcu_read;
	int tgid;
	char comm[16];
	unsigned int rt_prio;
}task1;

struct task v;

int main()
{
	   task1.state = 12345;


	printf("%d\n",sizeof(struct task));
	printf("%p\n",&v);
	printf("%p\n",&v.tasks);

	unsigned int p = &v;
	unsigned int q = &v.tasks;
	unsigned int r = q - p;

	printf("%p\n",r);

	unsigned int ptr = &task1.tasks;
	printf("%p\n",ptr); 

	unsigned int ptr1 = ptr - r;

	printf("%p\n",ptr1);

	struct task *obj = ptr1;
	printf("%p\n",obj);

	printf("%d\n",obj -> state);
	return 0;
}
