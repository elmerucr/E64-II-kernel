#ifndef KERNEL_H
#define KERNEL_H

#include <stdint.h>
#include "kernel_constants.h"

void kinit();
void kmain();

// poke & peek functionality
void pokeb(uint32_t address, uint8_t  byte);
void pokew(uint32_t address, uint16_t word);
void pokel(uint32_t address, uint32_t lwrd);
uint8_t  peekb(uint32_t address);
uint16_t peekw(uint32_t address);
uint32_t peekl(uint32_t address);

uint8_t *memcpy(uint8_t *dest, const uint8_t *src, uint32_t count);
uint8_t *memset(uint8_t *dest, uint8_t val, uint32_t count);

#endif
