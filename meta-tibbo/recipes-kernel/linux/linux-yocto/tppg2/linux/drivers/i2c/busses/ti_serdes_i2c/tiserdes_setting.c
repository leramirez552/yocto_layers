#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/cdev.h>
#include <asm/types.h>
#include <linux/i2c.h>

extern struct i2c_client *i2cClient45;
extern struct i2c_client *i2cClient44;

void tw8809_720p_init(void)
{
	i2c_smbus_write_byte_data(i2cClient45, 0xFF, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x02, 0x4A);
	i2c_smbus_write_byte_data(i2cClient45, 0x03, 0xFC);
	i2c_smbus_write_byte_data(i2cClient45, 0x04, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x06, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x07, 0x08);
	i2c_smbus_write_byte_data(i2cClient45, 0x08, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1F, 0x06);
	i2c_smbus_write_byte_data(i2cClient45, 0x40, 0x42);
	i2c_smbus_write_byte_data(i2cClient45, 0x41, 0x11);
	i2c_smbus_write_byte_data(i2cClient45, 0x42, 0x5A);
	i2c_smbus_write_byte_data(i2cClient45, 0x43, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x44, 0xA0);
	i2c_smbus_write_byte_data(i2cClient45, 0x45, 0x90);
	i2c_smbus_write_byte_data(i2cClient45, 0x46, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x47, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x48, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x50, 0x10);
	i2c_smbus_write_byte_data(i2cClient45, 0x51, 0x08);
	i2c_smbus_write_byte_data(i2cClient45, 0x52, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0x53, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0x54, 0x10);
	i2c_smbus_write_byte_data(i2cClient45, 0x56, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x57, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x5F, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x67, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x68, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x69, 0x25);
	i2c_smbus_write_byte_data(i2cClient45, 0x6A, 0x99);
	i2c_smbus_write_byte_data(i2cClient45, 0x6B, 0xD0);
	i2c_smbus_write_byte_data(i2cClient45, 0x6C, 0x15);
	i2c_smbus_write_byte_data(i2cClient45, 0x6D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xA0, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xA1, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xA2, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0xA3, 0xFF);
	i2c_smbus_write_byte_data(i2cClient45, 0xA4, 0xC0);
	i2c_smbus_write_byte_data(i2cClient45, 0xF6, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF7, 0x16);
	i2c_smbus_write_byte_data(i2cClient45, 0xF8, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0xF9, 0x76);
	i2c_smbus_write_byte_data(i2cClient45, 0xFA, 0x2D);
	i2c_smbus_write_byte_data(i2cClient45, 0xFB, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0xFC, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0xFD, 0x22);

	i2c_smbus_write_byte_data(i2cClient45, 0xFF, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x01, 0x83);
	i2c_smbus_write_byte_data(i2cClient45, 0x02, 0x48);
	i2c_smbus_write_byte_data(i2cClient45, 0x04, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x05, 0x0F);
	i2c_smbus_write_byte_data(i2cClient45, 0x06, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x07, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0x08, 0x14);
	i2c_smbus_write_byte_data(i2cClient45, 0x09, 0xF0);
	i2c_smbus_write_byte_data(i2cClient45, 0x0A, 0x09);
	i2c_smbus_write_byte_data(i2cClient45, 0x0B, 0xD0);
	i2c_smbus_write_byte_data(i2cClient45, 0x0C, 0xDC);
	i2c_smbus_write_byte_data(i2cClient45, 0x0D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x10, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x11, 0x5C);
	i2c_smbus_write_byte_data(i2cClient45, 0x12, 0x11);
	i2c_smbus_write_byte_data(i2cClient45, 0x13, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x14, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x15, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x17, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0x18, 0x44);
	i2c_smbus_write_byte_data(i2cClient45, 0x1A, 0x10);
	i2c_smbus_write_byte_data(i2cClient45, 0x1B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1C, 0x17);
	i2c_smbus_write_byte_data(i2cClient45, 0x1D, 0x03);
	i2c_smbus_write_byte_data(i2cClient45, 0x20, 0x50);
	i2c_smbus_write_byte_data(i2cClient45, 0x21, 0x22);
	i2c_smbus_write_byte_data(i2cClient45, 0x22, 0xF0);
	i2c_smbus_write_byte_data(i2cClient45, 0x23, 0xD8);
	i2c_smbus_write_byte_data(i2cClient45, 0x24, 0xBC);
	i2c_smbus_write_byte_data(i2cClient45, 0x25, 0xB8);
	i2c_smbus_write_byte_data(i2cClient45, 0x26, 0x44);
	i2c_smbus_write_byte_data(i2cClient45, 0x27, 0x38);
	i2c_smbus_write_byte_data(i2cClient45, 0x28, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x29, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2A, 0x78);
	i2c_smbus_write_byte_data(i2cClient45, 0x2B, 0x44);
	i2c_smbus_write_byte_data(i2cClient45, 0x2C, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0x2D, 0x14);
	i2c_smbus_write_byte_data(i2cClient45, 0x2E, 0xA5);
	i2c_smbus_write_byte_data(i2cClient45, 0x2F, 0xE0);
	i2c_smbus_write_byte_data(i2cClient45, 0x30, 0x50);
	i2c_smbus_write_byte_data(i2cClient45, 0x31, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x32, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x33, 0x05);
	i2c_smbus_write_byte_data(i2cClient45, 0x34, 0x1A);
	i2c_smbus_write_byte_data(i2cClient45, 0x35, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x40, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x41, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x42, 0x00);

	i2c_smbus_write_byte_data(i2cClient45, 0xFF, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0x01, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0x02, 0x94);
	i2c_smbus_write_byte_data(i2cClient45, 0x03, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x04, 0x14);
	i2c_smbus_write_byte_data(i2cClient45, 0x05, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x06, 0x20);
	i2c_smbus_write_byte_data(i2cClient45, 0x07, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x08, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x09, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0x0A, 0x06);
	i2c_smbus_write_byte_data(i2cClient45, 0x0B, 0x47);
	i2c_smbus_write_byte_data(i2cClient45, 0x0C, 0x08);
	i2c_smbus_write_byte_data(i2cClient45, 0x0D, 0x81);
	i2c_smbus_write_byte_data(i2cClient45, 0x0E, 0x50);
	i2c_smbus_write_byte_data(i2cClient45, 0x0F, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x10, 0x60);
	i2c_smbus_write_byte_data(i2cClient45, 0x11, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x12, 0x05);
	i2c_smbus_write_byte_data(i2cClient45, 0x13, 0x14);
	i2c_smbus_write_byte_data(i2cClient45, 0x14, 0x3C);
	i2c_smbus_write_byte_data(i2cClient45, 0x15, 0xA0);
	i2c_smbus_write_byte_data(i2cClient45, 0x16, 0xD0);
	i2c_smbus_write_byte_data(i2cClient45, 0x17, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0x18, 0xC6);
	i2c_smbus_write_byte_data(i2cClient45, 0x19, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0x1A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1C, 0x60);
	i2c_smbus_write_byte_data(i2cClient45, 0x1D, 0x1D);
	i2c_smbus_write_byte_data(i2cClient45, 0x1E, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1F, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x20, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x21, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x80, 0x20);
	i2c_smbus_write_byte_data(i2cClient45, 0x81, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x82, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x83, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x84, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x85, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x86, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x87, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x88, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x89, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x8A, 0x80);
	i2c_smbus_write_byte_data(i2cClient45, 0x8B, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0x8C, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xB0, 0x30);
	i2c_smbus_write_byte_data(i2cClient45, 0xB1, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0xB2, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0xB6, 0x67);
	i2c_smbus_write_byte_data(i2cClient45, 0xB7, 0x94);
	i2c_smbus_write_byte_data(i2cClient45, 0xBF, 0x0D);
	i2c_smbus_write_byte_data(i2cClient45, 0xE0, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xE1, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xE2, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xE3, 0x72);
	i2c_smbus_write_byte_data(i2cClient45, 0xE4, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF0, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF1, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF2, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF3, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF4, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF5, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0xF8, 0x02);
	i2c_smbus_write_byte_data(i2cClient45, 0xF9, 0x79);

	i2c_smbus_write_byte_data(i2cClient45, 0xFF, 0x03);
	i2c_smbus_write_byte_data(i2cClient45, 0x00, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x01, 0x06);
	i2c_smbus_write_byte_data(i2cClient45, 0x02, 0x06);
	i2c_smbus_write_byte_data(i2cClient45, 0x03, 0x5F);
	i2c_smbus_write_byte_data(i2cClient45, 0x04, 0x0C);
	i2c_smbus_write_byte_data(i2cClient45, 0x05, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x06, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x07, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x08, 0x10);
	i2c_smbus_write_byte_data(i2cClient45, 0x09, 0xFF);
	i2c_smbus_write_byte_data(i2cClient45, 0x0A, 0x90);
	i2c_smbus_write_byte_data(i2cClient45, 0x0B, 0xC6);
	i2c_smbus_write_byte_data(i2cClient45, 0x0C, 0x6F);
	i2c_smbus_write_byte_data(i2cClient45, 0x0D, 0xFF);
	i2c_smbus_write_byte_data(i2cClient45, 0x0E, 0xFF);
	i2c_smbus_write_byte_data(i2cClient45, 0x10, 0xC0);
	i2c_smbus_write_byte_data(i2cClient45, 0x11, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x12, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x13, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x14, 0x12);
	i2c_smbus_write_byte_data(i2cClient45, 0x15, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x16, 0x17);
	i2c_smbus_write_byte_data(i2cClient45, 0x17, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x18, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x19, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1C, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1E, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x1F, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x20, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0x21, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x22, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x23, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x24, 0x1E);
	i2c_smbus_write_byte_data(i2cClient45, 0x25, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x26, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x27, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x28, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x29, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2C, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2E, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x2F, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x30, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0x31, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x32, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x33, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x34, 0x3C);
	i2c_smbus_write_byte_data(i2cClient45, 0x35, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x36, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x37, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x38, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x39, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3C, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3E, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x3F, 0x50);
	i2c_smbus_write_byte_data(i2cClient45, 0x40, 0x40);
	i2c_smbus_write_byte_data(i2cClient45, 0x41, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x42, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x43, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x44, 0x5A);
	i2c_smbus_write_byte_data(i2cClient45, 0x45, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x46, 0x28);
	i2c_smbus_write_byte_data(i2cClient45, 0x47, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x48, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x49, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4A, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4B, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4C, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4D, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4E, 0x00);
	i2c_smbus_write_byte_data(i2cClient45, 0x4F, 0x78);
	i2c_smbus_write_byte_data(i2cClient45, 0x50, 0x09);
	i2c_smbus_write_byte_data(i2cClient45, 0x51, 0x1B);
	i2c_smbus_write_byte_data(i2cClient45, 0x52, 0x01);
	i2c_smbus_write_byte_data(i2cClient45, 0x53, 0xD0);
	i2c_smbus_write_byte_data(i2cClient45, 0x54, 0xF4);

	i2c_smbus_write_byte_data(i2cClient45, 0xFF, 0x00);
}


void TW8824_720p_init(void)
{
	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x02, 0x42);
	i2c_smbus_write_byte_data(i2cClient44, 0x03, 0xFF);
	i2c_smbus_write_byte_data(i2cClient44, 0x06, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x07, 0x8A);
	i2c_smbus_write_byte_data(i2cClient44, 0x08, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x09, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1F, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x40, 0x03);
	i2c_smbus_write_byte_data(i2cClient44, 0x41, 0xD1);
	i2c_smbus_write_byte_data(i2cClient44, 0x42, 0x50);
	i2c_smbus_write_byte_data(i2cClient44, 0x43, 0x14);
	i2c_smbus_write_byte_data(i2cClient44, 0x44, 0xA0);
	i2c_smbus_write_byte_data(i2cClient44, 0x45, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x46, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x47, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x48, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x4B, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x50, 0x0C);
	i2c_smbus_write_byte_data(i2cClient44, 0x51, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x52, 0x02);
	i2c_smbus_write_byte_data(i2cClient44, 0x53, 0x02);
	i2c_smbus_write_byte_data(i2cClient44, 0x54, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x56, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x57, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x5F, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x66, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x67, 0x22);
	i2c_smbus_write_byte_data(i2cClient44, 0x68, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x69, 0x25);
	i2c_smbus_write_byte_data(i2cClient44, 0x6A, 0x02);
	i2c_smbus_write_byte_data(i2cClient44, 0x6B, 0xD0);
	i2c_smbus_write_byte_data(i2cClient44, 0x6C, 0x83);
	i2c_smbus_write_byte_data(i2cClient44, 0x6D, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x6E, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x6F, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x78, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x79, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x7A, 0x50);
	i2c_smbus_write_byte_data(i2cClient44, 0x80, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x88, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x90, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x98, 0x0E);
	i2c_smbus_write_byte_data(i2cClient44, 0xD6, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xD7, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xD8, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0xDB, 0x55);
	i2c_smbus_write_byte_data(i2cClient44, 0xDC, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xDD, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0xDE, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xDF, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0xF6, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0xF7, 0x16);
	i2c_smbus_write_byte_data(i2cClient44, 0xF8, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0xF9, 0x76);
	i2c_smbus_write_byte_data(i2cClient44, 0xFA, 0x2D);
	i2c_smbus_write_byte_data(i2cClient44, 0xFB, 0x40);
	i2c_smbus_write_byte_data(i2cClient44, 0xFC, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0xFD, 0x21);
	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x00);

	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x02, 0x40);
	i2c_smbus_write_byte_data(i2cClient44, 0x04, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x05, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x06, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x07, 0x12);
	i2c_smbus_write_byte_data(i2cClient44, 0x08, 0x12);
	i2c_smbus_write_byte_data(i2cClient44, 0x09, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x0A, 0x0A);
	i2c_smbus_write_byte_data(i2cClient44, 0x0B, 0xD0);
	i2c_smbus_write_byte_data(i2cClient44, 0x0C, 0xCC);
	i2c_smbus_write_byte_data(i2cClient44, 0x0D, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x10, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x11, 0x5C);
	i2c_smbus_write_byte_data(i2cClient44, 0x12, 0x11);
	i2c_smbus_write_byte_data(i2cClient44, 0x13, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x14, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x15, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x17, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x18, 0x44);
	i2c_smbus_write_byte_data(i2cClient44, 0x1A, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x1C, 0x27);
	i2c_smbus_write_byte_data(i2cClient44, 0x1D, 0x7F);
	i2c_smbus_write_byte_data(i2cClient44, 0x20, 0x50);
	i2c_smbus_write_byte_data(i2cClient44, 0x21, 0x22);
	i2c_smbus_write_byte_data(i2cClient44, 0x22, 0xF0);
	i2c_smbus_write_byte_data(i2cClient44, 0x23, 0xD8);
	i2c_smbus_write_byte_data(i2cClient44, 0x24, 0xBC);
	i2c_smbus_write_byte_data(i2cClient44, 0x25, 0xB8);
	i2c_smbus_write_byte_data(i2cClient44, 0x26, 0x44);
	i2c_smbus_write_byte_data(i2cClient44, 0x27, 0x38);
	i2c_smbus_write_byte_data(i2cClient44, 0x28, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x29, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x2A, 0x78);
	i2c_smbus_write_byte_data(i2cClient44, 0x2B, 0x44);
	i2c_smbus_write_byte_data(i2cClient44, 0x2C, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x2D, 0x14);
	i2c_smbus_write_byte_data(i2cClient44, 0x2E, 0xA5);
	i2c_smbus_write_byte_data(i2cClient44, 0x2F, 0xE0);
	i2c_smbus_write_byte_data(i2cClient44, 0x33, 0x05);
	i2c_smbus_write_byte_data(i2cClient44, 0x34, 0x1A);
	i2c_smbus_write_byte_data(i2cClient44, 0x35, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x36, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x37, 0x06);
	i2c_smbus_write_byte_data(i2cClient44, 0x38, 0xD9);
	i2c_smbus_write_byte_data(i2cClient44, 0x39, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x3A, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x3B, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x3C, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x3D, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xE1, 0x05);
	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x01);

	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x02);
	i2c_smbus_write_byte_data(i2cClient44, 0x01, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x02, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x03, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x04, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x05, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x06, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x07, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x08, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x09, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x0A, 0x04);
	i2c_smbus_write_byte_data(i2cClient44, 0x0B, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x0C, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x0D, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x0E, 0x50);
	i2c_smbus_write_byte_data(i2cClient44, 0x0F, 0x0A);
	i2c_smbus_write_byte_data(i2cClient44, 0x10, 0xB4);
	i2c_smbus_write_byte_data(i2cClient44, 0x11, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x12, 0x05);
	i2c_smbus_write_byte_data(i2cClient44, 0x13, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x14, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x15, 0x22);
	i2c_smbus_write_byte_data(i2cClient44, 0x16, 0xD0);
	i2c_smbus_write_byte_data(i2cClient44, 0x17, 0x02);
	i2c_smbus_write_byte_data(i2cClient44, 0x18, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x19, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1A, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1B, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1C, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1D, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1E, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x1F, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x20, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x21, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x40, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x41, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x42, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x43, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x44, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x45, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x46, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x47, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x48, 0x01);
	i2c_smbus_write_byte_data(i2cClient44, 0x49, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x4A, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x4B, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x4C, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0x4D, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x4E, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x4F, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x50, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x51, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0x80, 0x20);
	i2c_smbus_write_byte_data(i2cClient44, 0x81, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x82, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x83, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x84, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x85, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x86, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x87, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x88, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x89, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x8A, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0x8B, 0x30);
	i2c_smbus_write_byte_data(i2cClient44, 0x8C, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xB0, 0x10);
	i2c_smbus_write_byte_data(i2cClient44, 0xB1, 0x40);
	i2c_smbus_write_byte_data(i2cClient44, 0xB2, 0x40);
	i2c_smbus_write_byte_data(i2cClient44, 0xB6, 0x67);
	i2c_smbus_write_byte_data(i2cClient44, 0xB7, 0x94);
	i2c_smbus_write_byte_data(i2cClient44, 0xBE, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xBF, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xE0, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xE1, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xE3, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xE4, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xF0, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xF1, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xF2, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xF8, 0x00);
	i2c_smbus_write_byte_data(i2cClient44, 0xF9, 0x80);
	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x02);

	i2c_smbus_write_byte_data(i2cClient44, 0xFF, 0x00);
}
