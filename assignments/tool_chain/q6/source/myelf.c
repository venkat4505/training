#include"header.h"

int main(int argc,char *argv[])
{
	Elf32_Ehdr eheader;//elf header structure variable
	Elf32_shdr es;//section header structure variable
	int i;
	char *str;

	FILE *fp;//file pointer

	if(NULL == (fp = fopen(argv[1],"r"))) {
		perror("fopen FAILED");
		exit(0);
	}

	if (NULL == (fread(&eheader, 52, 1, fp))){//reading excutable file decoded info
		perror("fread FAILED");
		exit(0);
	}

	printf("--------------------------------------------------------------\n");
	printf("ELF HEADER :\n");
	
	printf("\tMAGIC NUMBER:\t");//magic number

	for (i = 0; i < 16; i++) {
		printf("%02x  ",eheader.e_ident[i]);
	}
	printf("\n");

	switch(eheader.e_type) {//object file type
	
		case 0:
			printf("\tOBJECT FILE TYPE : NO FILE TYPE\n");
			break;

		case 1:
			printf("\tOBJECT FILE TYPE : RELOCATABLE OBJECT FILE\n");
			break;

		case 2:
			printf("\tOBJECT FILE TYPE : EXECUTABLE FILE\n");
			break;

		case 3:
			printf("\tOBJECT FILE TYPE : SHARED OBJECT FILE\n");
			break;
	}

	switch(eheader.e_machine) {//architecture

		case 0:
			printf("\tARCHITECTURE : NO MACHINE\n");
			break;

		case 1:
			printf("\tARCHITECTURE : AT & T WE 32100\n");
			break;

		case 2:
			printf("\tARCHITECTURE : SPARC\n");
			break;

		case 3:
			printf("\tARCHITECTURE : INTEL 80386\n");
			break;
	}
		
	switch(eheader.e_version) {//objectable file version

		case 0:
			printf("\tOBJECT FILE VERSION : INVALID VERSION\n");
			break;

		case 1:
			printf("\tOBJECT FILE VERSION : CURRENT VERSION\n");
			break;
	}
	printf("\tENTRY POINT VIRTUAL ADDRESS:%20p\n",eheader.e_entry);//entry point
	printf("\tPROGRAM HEADER TABLE FILE OFFSET:%10p\n",eheader.e_phoff);
	printf("\tSECTION HEADER TABLE FILE OFFSET:%12p\n",eheader.e_shoff);
	printf("\tPROCESSOR SPECIFIC FLAGS:%15d\n",eheader.e_flags);
	printf("\tELF HEADER SIZE IN BYTES:%16d\n",eheader.e_ehsize);
	printf("\tPROGRAM HEADER TABLE ENTRY SIZE:%9d\n",eheader.e_phentsize);
	printf("\tPROGRAM HEADER TABLE ENTRY COUNT:%7d\n",eheader.e_phnum);
	printf("\tSECTION HEADER TABLE ENTRY SIZE:%9d\n",eheader.e_shentsize);
	printf("\tSECTION HEADER TABLE ENTRY COUNT:%8d\n",eheader.e_shnum);	
	printf("\tSECTION HEADER STRING TABLE INDEX:%7d\n",eheader.e_shstrndx);
	printf("--------------------------------------------------------------\n");	
	
//	fseek(fp, eheader.e_shoff, SEEK_SET);
	printf("SECTION HEADERS :\n");

	printf("[Nr]  \tName\t\t Type\t\tAddr\t\tOff\tSize\tES\tFlg\tLk\tInf\tAl\n");

	
	
//	fread( &es, eheader.e_shentsize, 1, fp);

//		printf("%-10d",es.sh_name);

	if(-1 == fseek(fp, ((eheader.e_shoff) + ((eheader.e_shstrndx) * (eheader.e_shentsize))), SEEK_SET);
	fread(&es, eheader.e_shentsize, 1, fp);

	if(NULL == (str = (char*)malloc(es.sh_size))) {
		perror("malloc FAILED");
		exit(0);
	}

	fseek(fp, es.sh_offset, SEEK_SET);
	fread(str,es.sh_size,1, fp);

//	fseek(fp, (eheader.e_shoff),SEEK_SET);   	
	for (i = 0; i < eheader.e_shnum; i++) {

//		fseek(fp, (eheader.e_shoff + (eheader.e_shentsize * i)),SEEK_SET);
		fread( &es, eheader.e_shentsize, 1, fp);

		printf("[%d]\t",i);  

		printf("%-20s", str + es.sh_name);

//		printf("%-10x\t",es.sh_type);
		switch(es.sh_type) {

			case 0:
				printf("NULL\t");
				break;
			
			case 1:
				printf("PROGBITS\t");
				break;

			case 2:
				printf("SYMTAB\t");
				break;

			case 3:
				printf("STRTAB\t");
				break;
			
			case 4:
				printf("RELA\t");
				break;

			case 5:
				printf("HASH\t");
				break;

			case 6:
				printf("DYNAMIC\t");
				break;
		
			case 7:
				printf("NOTE\t");
				break;

			case 8:
				printf("NO BITS\t");
				break;

			case 9:
				printf("REL \t");
				break;
			
			case 10:
				printf("SHLIB\t");
				break;

			case 11:
				printf("DYNSYM\t");
				break;
			
			case 12:
				printf("NULL\t");
				break;

			case 13:
				printf("\t");
				break;

			case 14:
				printf("INIT_ARRAY\t");
				break;

			case 15:
				printf("FINI_ARRAY\t");
				break;
			
			default:
				printf("INVALID\t");
				break;
		}		
		printf("%08x\t",es.sh_addr);
		printf("%06x\t",es.sh_offset);
		printf("%06x\t",es.sh_size);
		printf("%02d\t",es.sh_entsize);
		printf("%d\t",es.sh_flags);
		printf("%d\t",es.sh_link);
		printf("%d\t",es.sh_info);
		printf("%d\n",es.sh_addralign);
	}
	
	return 0;
}
