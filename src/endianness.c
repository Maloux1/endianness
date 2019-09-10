#include "config.h"
#include "endianness.h"

#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	uint16_t htoles(uint16_t x){
		uint16_t y = 0;
		y |= (x & 0x00ff) << 8;
		y |= (x & 0xff00) >> 8;
		return y;
	}

	uint32_t htolel(uint32_t x){
		uint32_t y = 0;
		y |= (x & 0x000000ff) << 24;
		y |= (x & 0x0000ff00) << 8;
		y |= (x & 0x00ff0000) >> 8;
		y |= (x & 0xff000000) >> 24;
		return y;
	}

	uint64_t htolell(uint64_t x){
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

	uint16_t letohs(uint16_t x){
		uint16_t y = 0;
		y |= (x & 0x00ff) << 8;
		y |= (x & 0xff00) >> 8;
		return y;
	}

	uint32_t letohl(uint32_t x){
		uint32_t y = 0;
		y |= (x & 0x000000ff) << 24;
		y |= (x & 0x0000ff00) << 8;
		y |= (x & 0x00ff0000) >> 8;
		y |= (x & 0xff000000) >> 24;
		return y;
	}

	uint64_t letohll(uint64_t x){
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
#elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	uint16_t htobes(uint16_t x){
		uint16_t y = 0;
		y |= (x & 0x00ff) << 8;
		y |= (x & 0xff00) >> 8;
		return y;
	}

	uint32_t htobel(uint32_t x){
		uint32_t y = 0;
		y |= (x & 0x000000ff) << 24;
		y |= (x & 0x0000ff00) << 8;
		y |= (x & 0x00ff0000) >> 8;
		y |= (x & 0xff000000) >> 24;
		return y;
	}

	uint64_t htobell(uint64_t x){
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

	uint16_t betohs(uint16_t x){
		uint16_t y = 0;
		y |= (x & 0x00ff) << 8;
		y |= (x & 0xff00) >> 8;
		return y;
	}

	uint32_t betohl(uint32_t x){
		uint32_t y = 0;
		y |= (x & 0x000000ff) << 24;
		y |= (x & 0x0000ff00) << 8;
		y |= (x & 0x00ff0000) >> 8;
		y |= (x & 0xff000000) >> 24;
		return y;
	}

	uint64_t betohll(uint64_t x){
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
#else
	#error "wtf !"
#endif
