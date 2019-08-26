#ifndef ENDIANNESS_H
#define ENDIANNESS_H

#include "config.h"

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
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	uint16_t htobes(uint16_t x);
	uint32_t htobel(uint32_t x);
	uint64_t htobell(uint64_t x);
	uint16_t betohs(uint16_t x);
	uint32_t betohl(uint32_t x);
	uint64_t betohll(uint64_t x);
	#define htoles(x) x
	#define htolel(x) x
	#define htolell(x) x
	#define letohs(x) x
	#define letohl(x) x
	#define letohll(x) x
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	uint16_t htoles(uint16_t x);
	uint32_t htolel(uint32_t x);
	uint64_t htolell(uint64_t x);
	uint16_t letohs(uint16_t x);
	uint32_t letohl(uint32_t x);
	uint64_t letohll(uint64_t x);
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