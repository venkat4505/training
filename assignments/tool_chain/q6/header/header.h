#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
//#include<elf.h>

typedef uint16_t Elf32_Half;
typedef uint32_t Elf32_Word;
typedef uint32_t Elf32_Addr;
typedef uint32_t Elf32_Off;

#define EI_NIDENT (16)

typedef struct {
	unsigned char e_ident[EI_NIDENT];
	Elf32_Half  e_type;
	Elf32_Half  e_machine;
	Elf32_Word  e_version;
	Elf32_Addr  e_entry;
	Elf32_Off  e_phoff;
	Elf32_Off  e_shoff;		
	Elf32_Word   e_flags;
	Elf32_Half   e_ehsize;
	Elf32_Half   e_phentsize;
	Elf32_Half   e_phnum;
	Elf32_Half   e_shentsize;
	Elf32_Half   e_shnum;
	Elf32_Half   e_shstrndx;
}Elf32_Ehdr;

typedef struct {
	Elf32_Word  sh_name;//section name
	Elf32_Word  sh_type;//secton type
	Elf32_Word  sh_flags;//secton flags
	Elf32_Addr  sh_addr;//section virtual address at execution
	Elf32_Off   sh_offset;//section file offset
	Elf32_Word  sh_size;//section size in bytes
	Elf32_Word  sh_link;//link to another section
	Elf32_Word  sh_info;//additional section information
	Elf32_Word  sh_addralign;//section alignment
	Elf32_Word  sh_entsize;//entry size if section holds table
}Elf32_shdr;
