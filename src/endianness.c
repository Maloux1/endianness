#include "config.h"
#include "endianness.h"

uint16_t static swaps(uint16_t x){
	uint16_t y = 0;
	y |= (x & 0x00ff) << 8;
	y |= (x & 0xff00) >> 8;
	return y;
}

uint32_t static swapl(uint32_t x){
	uint32_t y = 0;
	y |= (x & 0x000000ff) << 24;
	y |= (x & 0x0000ff00) << 8;
	y |= (x & 0x00ff0000) >> 8;
	y |= (x & 0xff000000) >> 24;
	return y;
}

uint64_t static swapll(uint64_t x){
	uint64_t y = 0;
	y |= (x & 0x00000000000000ff) << 56;
	y |= (x & 0x000000000000ff00) << 40;
	y |= (x & 0x0000000000ff0000) << 24;
	y |= (x & 0x00000000ff000000) << 8;
	y |= (x & 0x000000ff00000000) >> 8;
	y |= (x & 0x0000ff0000000000) >> 24;
	y |= (x & 0x00ff000000000000) >> 40;
	y |= (x & 0xff00000000000000) >> 56;
	return y;
}
