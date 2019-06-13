#ifndef ENDIANNESS_H
#define ENDIANNESS_H

#include <stdint.h>

/*
	h:host
	to
	le:litte endian
	s:short
	l:long
	ll:long long
*/
uint16_t htoles(uint16_t x);
uint32_t htolel(uint32_t x);
uint64_t htolell(uint64_t x);
uint16_t letohs(uint16_t x);
uint32_t letohl(uint32_t x);
uint64_t letohll(uint64_t x);

/*
	h:host
	to
	be:big endian
	s:short
	l:long
	ll:long long
*/
uint16_t htobes(uint16_t x);
uint32_t htobel(uint32_t x);
uint64_t htobell(uint64_t x);
uint16_t betohs(uint16_t x);
uint32_t betohl(uint32_t x);
uint64_t betohll(uint64_t x);

#endif /* ENDIANNESS_H */