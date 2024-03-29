#pragma once

static inline
Color rgbToColor(const uint R, const uint G, const uint B)
{
	return (Color){R, G, B, 0xFF};
}

static inline
Color rgbaToColor(const uint R, const uint G, const uint B, const uint A)
{
	return (Color){R, G, B, A};
}

static inline
Color randColor(void)
{
	return (Color){rand()%255, rand()%255, rand()%255, 255};
}

const Color WHITE		= {0xFF, 0xFF, 0xFF, 0xFF};
const Color PINK		= {0xFF, 0xC0, 0xCB, 0xFF};
const Color CYAN		= {0x00, 0xFF, 0xFF, 0xFF};
const Color RED 		= {0xFF, 0x00, 0x00, 0xFF};
const Color YELLOW	= {0xFF, 0xFF, 0x00, 0xFF};
const Color GREEN 	= {0x00, 0xFF, 0x00, 0xFF};
const Color BLUE 		= {0x00, 0x00, 0xFF, 0xFF};
const Color MAGENTA	= {0xFF, 0x00, 0xFF, 0xFF};
const Color BLACK		= {0x00, 0x00, 0x00, 0xFF};

const Color GREY4		= {0x30, 0x30, 0x30, 0xFF};
const Color GREY3		= {0x5E, 0x5E, 0x5E, 0xFF};
const Color GREY2		= {0x91, 0x91, 0x91, 0xFF};
const Color GREY1		= {0xC6, 0xC6, 0xC6, 0xFF};
