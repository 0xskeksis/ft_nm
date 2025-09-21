#ifndef SELF_H
# define SELF_H

#include <stdint.h>


#define EI_NIDENT (16)

typedef	uint16_t sELF32_Half;
typedef	uint32_t sELF32_Word;
typedef	uint32_t sELF32_Addr;
typedef	uint32_t sELF32_Off;

/*
 * @brief: sELF_EHeader
 *	e_type:			Object file type
 *	e_machine:		Architecture
 *	e_version:		Object file version
 *	e_entry:		entry point virtual address
 *	e_phoff:		Program header table file offset
 *	e_shoff:		Section header table offset
 *	e_flags:		Processor specific flags
 *	e_ehsize:		ELF header size in bytes
 *	e_phensize:		Section header table entry size
 *	e_phnum:		Program header table entry count
 *	e_shentsize:	Section header table entry size
 *	e_shnum:		Section header table entry count
 *	e_shstrndx:		Section header string table index
 */


typedef struct{
	sELF32_Half	e_type;
	sELF32_Half	e_machine;
	sELF32_Word	e_version;
	sELF32_Addr	e_entry;






} sELF32_EHeader;









#endif	/*sELF.h*/
