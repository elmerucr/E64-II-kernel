#include <stdint.h>
#include <stddef.h>
#include "definitions.h"

#ifndef KERNEL_H
#define KERNEL_H

void kinit();
void kmain();

// poke & peek functionality
void pokeb(uint32_t address, uint8_t  byte);
void pokew(uint32_t address, uint16_t word);
void pokel(uint32_t address, uint32_t lwrd);
uint8_t  peekb(uint32_t address);
uint16_t peekw(uint32_t address);
uint32_t peekl(uint32_t address);

uint8_t *memcpy(uint8_t *dest, const uint8_t *src, size_t count);
uint8_t *memset(uint8_t *dest, uint8_t val, size_t count);

void build_character_ram(uint8_t *source, uint16_t *dest);
int update_vector_table(uint8_t vector_no, void *exception_handler);
void set_interrupt_priority_level(uint16_t value);
void address_error_exception_handler();

#endif
