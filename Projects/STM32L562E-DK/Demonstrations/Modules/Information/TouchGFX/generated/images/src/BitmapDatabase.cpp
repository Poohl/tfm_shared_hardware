// 4.12.2 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0x684345cd
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

extern const unsigned char _backbutton[]; // BITMAP_BACKBUTTON_ID = 0, Size: 84x86 pixels
extern const unsigned char _backbuttonpressed[]; // BITMAP_BACKBUTTONPRESSED_ID = 1, Size: 84x86 pixels
extern const unsigned char _infopage[]; // BITMAP_INFOPAGE_ID = 2, Size: 240x240 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _backbutton, 0, 84, 86, 0, 0, 0, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 0, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _backbuttonpressed, 0, 84, 86, 38, 39, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 47, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _infopage, 0, 240, 240, 0, 0, 240, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 240, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
