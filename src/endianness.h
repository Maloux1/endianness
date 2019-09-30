#ifndef ENDIANNESS_H
#define ENDIANNESS_H

#include <stdint.h>

/*
	h:host
	to
	be:big endian
	le:little endian
	s:short
	l:long
	ll:long long
*/

uint16_t static swaps(uint16_t x);
uint32_t static swapl(uint32_t x);
uint64_t static swapll(uint64_t x);


#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	#define htobes(x) swaps(x)
	#define htobel(x) swapl(x)
	#define htobell(x) swapll(x)
	#define betohs(x) swaps(x)
	#define betohl(x) swapl(x)
	#define betohll(x) swapll(x)
	#define htoles(x) x
	#define htolel(x) x
	#define htolell(x) x
	#define letohs(x) x
	#define letohl(x) x
	#define letohll(x) x
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	#define htoles(x) swaps(x)
	#define htolel(x) swapl(x)
	#define htolell(x) swapll(x)
	#define letohs(x) swaps(x)
	#define letohl(x) swapl(x)
	#define letohll(x) swapll(x)
	#define htobes(x) x
	#define htobel(x) x
	#define htobell(x) x
	#define betohs(x) x
	#define betohl(x) x
	#define betohll(x) x
#else
	#error "wtf !"
#endif

#endif /* ENDIANNESS_H */
