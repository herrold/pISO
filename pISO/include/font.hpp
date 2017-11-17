#ifndef FONT_HPP
#define FONT_HPP

#include "bitmap.hpp"

using bitmap_t = Bitmap;

extern const bitmap_t font[128];
extern const bitmap_t unprintable;
extern const bitmap_t selector;

bitmap_t render_text(const std::string &str);
void gen_pbm(const bitmap_t &map, const std::string &filename);

#endif