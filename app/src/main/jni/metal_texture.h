/*
 *	RollerCoaster2005
 *	Copyright (C) 2005 Plusplus (plusplus AT free.fr)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _METAL_TEXTURE_HEADER
#define _METAL_TEXTURE_HEADER

static const int metal_texture_width = 32;
static const int metal_texture_height = 32;

static const GLubyte metal_texture_data[32 * 32 * 3] =
{
 170, 170, 170, 95, 95, 95, 92, 92, 92, 96, 96, 96, 122, 122, 122, 177, 177, 177, 181, 181, 181, 177, 177, 177,
 173, 173, 173, 172, 172, 172, 171, 171, 171, 171, 171, 171, 171, 171, 171, 172, 172, 172, 172, 172, 172, 171, 171, 171,
 170, 170, 170, 173, 173, 173, 175, 175, 175, 177, 177, 177, 176, 176, 176, 178, 178, 178, 175, 175, 175, 173, 173, 173,
 170, 170, 170, 166, 166, 166, 208, 208, 208, 217, 217, 217, 219, 219, 219, 186, 186, 186, 163, 163, 163, 178, 178, 178,
 181, 181, 181, 177, 177, 177, 83, 83, 83, 94, 94, 94, 105, 105, 105, 138, 138, 138, 187, 187, 187, 177, 177, 177,
 173, 173, 173, 172, 172, 172, 171, 171, 171, 171, 171, 171, 171, 171, 171, 172, 172, 172, 173, 173, 173, 172, 172, 172,
 173, 173, 173, 173, 173, 173, 177, 177, 177, 178, 178, 178, 176, 176, 176, 178, 178, 178, 177, 177, 177, 177, 177, 177,
 171, 171, 171, 170, 170, 170, 188, 188, 188, 221, 221, 221, 217, 217, 217, 219, 219, 219, 173, 173, 173, 152, 152, 152,
 148, 148, 148, 162, 162, 162, 176, 176, 176, 78, 78, 78, 99, 99, 99, 111, 111, 111, 151, 151, 151, 180, 180, 180,
 177, 177, 177, 172, 172, 172, 170, 170, 170, 170, 170, 170, 172, 172, 172, 172, 172, 172, 173, 173, 173, 176, 176, 176,
 173, 173, 173, 176, 176, 176, 177, 177, 177, 179, 179, 179, 177, 177, 177, 181, 181, 181, 179, 179, 179, 179, 179, 179,
 179, 179, 179, 175, 175, 175, 163, 163, 163, 192, 192, 192, 222, 222, 222, 218, 218, 218, 220, 220, 220, 180, 180, 180,
 186, 186, 186, 143, 143, 143, 159, 159, 159, 157, 157, 157, 86, 86, 86, 109, 109, 109, 121, 121, 121, 166, 166, 166,
 178, 178, 178, 172, 172, 172, 170, 170, 170, 170, 170, 170, 172, 172, 172, 173, 173, 173, 171, 171, 171, 172, 172, 172,
 172, 172, 172, 175, 175, 175, 173, 173, 173, 177, 177, 177, 177, 177, 177, 180, 180, 180, 180, 180, 180, 177, 177, 177,
 175, 175, 175, 177, 177, 177, 171, 171, 171, 169, 169, 169, 200, 200, 200, 222, 222, 222, 220, 220, 220, 210, 210, 210,
 213, 213, 213, 181, 181, 181, 153, 153, 153, 160, 160, 160, 125, 125, 125, 88, 88, 88, 113, 113, 113, 145, 145, 145,
 179, 179, 179, 173, 173, 173, 171, 171, 171, 170, 170, 170, 172, 172, 172, 171, 171, 171, 172, 172, 172, 169, 169, 169,
 172, 172, 172, 175, 175, 175, 174, 174, 174, 178, 178, 178, 178, 178, 178, 178, 178, 178, 182, 182, 182, 178, 178, 178,
 178, 178, 178, 177, 177, 177, 177, 177, 177, 167, 167, 167, 179, 179, 179, 204, 204, 204, 223, 223, 223, 221, 221, 221,
 226, 226, 226, 221, 221, 221, 176, 176, 176, 156, 156, 156, 153, 153, 153, 90, 90, 90, 103, 103, 103, 126, 126, 126,
 169, 169, 169, 175, 175, 175, 171, 171, 171, 169, 169, 169, 170, 170, 170, 170, 170, 170, 172, 172, 172, 169, 169, 169,
 171, 171, 171, 174, 174, 174, 176, 176, 176, 179, 179, 179, 178, 178, 178, 179, 179, 179, 185, 185, 185, 181, 181, 181,
 175, 175, 175, 170, 170, 170, 180, 180, 180, 173, 173, 173, 168, 168, 168, 180, 180, 180, 209, 209, 209, 221, 221, 221,
 226, 226, 226, 227, 227, 227, 230, 230, 230, 191, 191, 191, 142, 142, 142, 139, 139, 139, 79, 79, 79, 109, 109, 109,
 143, 143, 143, 179, 179, 179, 170, 170, 170, 168, 168, 168, 167, 167, 167, 170, 170, 170, 169, 169, 169, 171, 171, 171,
 170, 170, 170, 174, 174, 174, 175, 175, 175, 180, 180, 180, 178, 178, 178, 181, 181, 181, 183, 183, 183, 175, 175, 175,
 152, 152, 152, 147, 147, 147, 176, 176, 176, 175, 175, 175, 171, 171, 171, 163, 163, 163, 171, 171, 171, 214, 214, 214,
 199, 199, 199, 228, 228, 228, 230, 230, 230, 229, 229, 229, 226, 226, 226, 197, 197, 197, 114, 114, 114, 70, 70, 70,
 110, 110, 110, 172, 172, 172, 171, 171, 171, 171, 171, 171, 169, 169, 169, 172, 172, 172, 168, 168, 168, 171, 171, 171,
 174, 174, 174, 177, 177, 177, 177, 177, 177, 181, 181, 181, 189, 189, 189, 163, 163, 163, 93, 93, 93, 49, 49, 49,
 37, 37, 37, 36, 36, 36, 124, 124, 124, 175, 175, 175, 171, 171, 171, 171, 171, 171, 164, 164, 164, 161, 161, 161,
 163, 163, 163, 174, 174, 174, 220, 220, 220, 234, 234, 234, 231, 231, 231, 231, 231, 231, 212, 212, 212, 114, 114, 114,
 76, 76, 76, 139, 139, 139, 174, 174, 174, 167, 167, 167, 168, 168, 168, 169, 169, 169, 168, 168, 168, 169, 169, 169,
 172, 172, 172, 178, 178, 178, 182, 182, 182, 181, 181, 181, 124, 124, 124, 64, 64, 64, 45, 45, 45, 41, 41, 41,
 43, 43, 43, 129, 129, 129, 201, 201, 201, 172, 172, 172, 171, 171, 171, 169, 169, 169, 166, 166, 166, 166, 166, 166,
 165, 165, 165, 165, 165, 165, 179, 179, 179, 199, 199, 199, 219, 219, 219, 239, 239, 239, 234, 234, 234, 192, 192, 192,
 123, 123, 123, 110, 110, 110, 166, 166, 166, 168, 168, 168, 169, 169, 169, 172, 172, 172, 170, 170, 170, 170, 170, 170,
 177, 177, 177, 184, 184, 184, 156, 156, 156, 107, 107, 107, 65, 65, 65, 42, 42, 42, 40, 40, 40, 46, 46, 46,
 123, 123, 123, 201, 201, 201, 195, 195, 195, 170, 170, 170, 172, 172, 172, 170, 170, 170, 171, 171, 171, 170, 170, 170,
 171, 171, 171, 167, 167, 167, 160, 160, 160, 171, 171, 171, 188, 188, 188, 208, 208, 208, 219, 219, 219, 233, 233, 233,
 190, 190, 190, 126, 126, 126, 148, 148, 148, 170, 170, 170, 171, 171, 171, 175, 175, 175, 174, 174, 174, 178, 178, 178,
 174, 174, 174, 149, 149, 149, 101, 101, 101, 53, 53, 53, 39, 39, 39, 40, 40, 40, 60, 60, 60, 107, 107, 107,
 195, 195, 195, 230, 230, 230, 177, 177, 177, 172, 172, 172, 173, 173, 173, 173, 173, 173, 173, 173, 173, 172, 172, 172,
 174, 174, 174, 172, 172, 172, 168, 168, 168, 164, 164, 164, 155, 155, 155, 157, 157, 157, 184, 184, 184, 215, 215, 215,
 229, 229, 229, 177, 177, 177, 138, 138, 138, 172, 172, 172, 174, 174, 174, 175, 175, 175, 181, 181, 181, 176, 176, 176,
 144, 144, 144, 80, 80, 80, 41, 41, 41, 41, 41, 41, 49, 49, 49, 60, 60, 60, 110, 110, 110, 203, 203, 203,
 233, 233, 233, 217, 217, 217, 167, 167, 167, 176, 176, 176, 175, 175, 175, 176, 176, 176, 173, 173, 173, 174, 174, 174,
 175, 175, 175, 174, 174, 174, 170, 170, 170, 171, 171, 171, 168, 168, 168, 163, 163, 163, 150, 150, 150, 144, 144, 144,
 153, 153, 153, 184, 184, 184, 195, 195, 195, 173, 173, 173, 175, 175, 175, 180, 180, 180, 193, 193, 193, 110, 110, 110,
 41, 41, 41, 45, 45, 45, 46, 46, 46, 42, 42, 42, 79, 79, 79, 170, 170, 170, 228, 228, 228, 236, 236, 236,
 232, 232, 232, 191, 191, 191, 172, 172, 172, 175, 175, 175, 177, 177, 177, 171, 171, 171, 175, 175, 175, 179, 179, 179,
 173, 173, 173, 173, 173, 173, 171, 171, 171, 172, 172, 172, 171, 171, 171, 168, 168, 168, 165, 165, 165, 161, 161, 161,
 162, 162, 162, 164, 164, 164, 165, 165, 165, 172, 172, 172, 178, 178, 178, 187, 187, 187, 91, 91, 91, 46, 46, 46,
 45, 45, 45, 52, 52, 52, 64, 64, 64, 151, 151, 151, 198, 198, 198, 209, 209, 209, 236, 236, 236, 230, 230, 230,
 217, 217, 217, 167, 167, 167, 171, 171, 171, 173, 173, 173, 177, 177, 177, 176, 176, 176, 177, 177, 177, 176, 176, 176,
 175, 175, 175, 173, 173, 173, 174, 174, 174, 173, 173, 173, 170, 170, 170, 171, 171, 171, 167, 167, 167, 165, 165, 165,
 164, 164, 164, 165, 165, 165, 168, 168, 168, 172, 172, 172, 185, 185, 185, 109, 109, 109, 56, 56, 56, 45, 45, 45,
 49, 49, 49, 102, 102, 102, 159, 159, 159, 185, 185, 185, 202, 202, 202, 227, 227, 227, 233, 233, 233, 227, 227, 227,
 190, 190, 190, 168, 168, 168, 173, 173, 173, 174, 174, 174, 178, 178, 178, 176, 176, 176, 175, 175, 175, 177, 177, 177,
 174, 174, 174, 173, 173, 173, 174, 174, 174, 173, 173, 173, 171, 171, 171, 172, 172, 172, 168, 168, 168, 168, 168, 168,
 167, 167, 167, 167, 167, 167, 175, 175, 175, 176, 176, 176, 140, 140, 140, 63, 63, 63, 45, 45, 45, 58, 58, 58,
 108, 108, 108, 165, 165, 165, 195, 195, 195, 193, 193, 193, 216, 216, 216, 233, 233, 233, 232, 232, 232, 212, 212, 212,
 171, 171, 171, 170, 170, 170, 175, 175, 175, 174, 174, 174, 178, 178, 178, 174, 174, 174, 175, 175, 175, 176, 176, 176,
 172, 172, 172, 173, 173, 173, 172, 172, 172, 171, 171, 171, 172, 172, 172, 171, 171, 171, 168, 168, 168, 170, 170, 170,
 170, 170, 170, 171, 171, 171, 179, 179, 179, 155, 155, 155, 76, 76, 76, 48, 48, 48, 57, 57, 57, 102, 102, 102,
 182, 182, 182, 204, 204, 204, 187, 187, 187, 199, 199, 199, 234, 234, 234, 232, 232, 232, 223, 223, 223, 188, 188, 188,
 164, 164, 164, 171, 171, 171, 174, 174, 174, 172, 172, 172, 178, 178, 178, 173, 173, 173, 175, 175, 175, 174, 174, 174,
 175, 175, 175, 172, 172, 172, 172, 172, 172, 170, 170, 170, 170, 170, 170, 170, 170, 170, 171, 171, 171, 170, 170, 170,
 172, 172, 172, 177, 177, 177, 178, 178, 178, 69, 69, 69, 52, 52, 52, 48, 48, 48, 91, 91, 91, 204, 204, 204,
 206, 206, 206, 177, 177, 177, 180, 180, 180, 232, 232, 232, 234, 234, 234, 234, 234, 234, 194, 194, 194, 163, 163, 163,
 173, 173, 173, 175, 175, 175, 172, 172, 172, 172, 172, 172, 178, 178, 178, 176, 176, 176, 175, 175, 175, 173, 173, 173,
 175, 175, 175, 177, 177, 177, 174, 174, 174, 172, 172, 172, 171, 171, 171, 170, 170, 170, 175, 175, 175, 173, 173, 173,
 178, 178, 178, 190, 190, 190, 102, 102, 102, 48, 48, 48, 49, 49, 49, 102, 102, 102, 217, 217, 217, 184, 184, 184,
 158, 158, 158, 197, 197, 197, 237, 237, 237, 237, 237, 237, 235, 235, 235, 194, 194, 194, 166, 166, 166, 176, 176, 176,
 178, 178, 178, 178, 178, 178, 179, 179, 179, 182, 182, 182, 178, 178, 178, 179, 179, 179, 178, 178, 178, 179, 179, 179,
 177, 177, 177, 177, 177, 177, 177, 177, 177, 175, 175, 175, 172, 172, 172, 174, 174, 174, 175, 175, 175, 178, 178, 178,
 184, 184, 184, 138, 138, 138, 60, 60, 60, 48, 48, 48, 86, 86, 86, 180, 180, 180, 180, 180, 180, 174, 174, 174,
 207, 207, 207, 230, 230, 230, 235, 235, 235, 232, 232, 232, 202, 202, 202, 177, 177, 177, 176, 176, 176, 177, 177, 177,
 179, 179, 179, 175, 175, 175, 179, 179, 179, 178, 178, 178, 178, 178, 178, 176, 176, 176, 179, 179, 179, 178, 178, 178,
 177, 177, 177, 178, 178, 178, 179, 179, 179, 174, 174, 174, 174, 174, 174, 176, 176, 176, 178, 178, 178, 183, 183, 183,
 174, 174, 174, 83, 83, 83, 48, 48, 48, 65, 65, 65, 145, 145, 145, 183, 183, 183, 184, 184, 184, 206, 206, 206,
 228, 228, 228, 238, 238, 238, 227, 227, 227, 199, 199, 199, 181, 181, 181, 178, 178, 178, 189, 189, 189, 182, 182, 182,
 183, 183, 183, 178, 178, 178, 180, 180, 180, 178, 178, 178, 178, 178, 178, 177, 177, 177, 178, 178, 178, 178, 178, 178,
 178, 178, 178, 178, 178, 178, 179, 179, 179, 174, 174, 174, 176, 176, 176, 177, 177, 177, 180, 180, 180, 188, 188, 188,
 138, 138, 138, 49, 49, 49, 59, 59, 59, 116, 116, 116, 195, 195, 195, 185, 185, 185, 210, 210, 210, 236, 236, 236,
 233, 233, 233, 225, 225, 225, 203, 203, 203, 171, 171, 171, 172, 172, 172, 181, 181, 181, 172, 172, 172, 146, 146, 146,
 150, 150, 150, 167, 167, 167, 184, 184, 184, 180, 180, 180, 179, 179, 179, 178, 178, 178, 177, 177, 177, 178, 178, 178,
 181, 181, 181, 178, 178, 178, 178, 178, 178, 177, 177, 177, 176, 176, 176, 180, 180, 180, 182, 182, 182, 190, 190, 190,
 79, 79, 79, 49, 49, 49, 91, 91, 91, 201, 201, 201, 218, 218, 218, 233, 233, 233, 239, 239, 239, 234, 234, 234,
 227, 227, 227, 195, 195, 195, 163, 163, 163, 168, 168, 168, 172, 172, 172, 176, 176, 176, 119, 119, 119, 56, 56, 56,
 67, 67, 67, 129, 129, 129, 185, 185, 185, 184, 184, 184, 181, 181, 181, 179, 179, 179, 177, 177, 177, 178, 178, 178,
 181, 181, 181, 178, 178, 178, 177, 177, 177, 182, 182, 182, 181, 181, 181, 180, 180, 180, 189, 189, 189, 139, 139, 139,
 47, 47, 47, 64, 64, 64, 183, 183, 183, 238, 238, 238, 242, 242, 242, 240, 240, 240, 240, 240, 240, 219, 219, 219,
 165, 165, 165, 157, 157, 157, 167, 167, 167, 169, 169, 169, 176, 176, 176, 174, 174, 174, 184, 184, 184, 85, 85, 85,
 31, 31, 31, 33, 33, 33, 88, 88, 88, 191, 191, 191, 191, 191, 191, 184, 184, 184, 184, 184, 184, 182, 182, 182,
 181, 181, 181, 180, 180, 180, 182, 182, 182, 186, 186, 186, 184, 184, 184, 183, 183, 183, 189, 189, 189, 72, 72, 72,
 73, 73, 73, 191, 191, 191, 237, 237, 237, 241, 241, 241, 241, 241, 241, 229, 229, 229, 185, 185, 185, 164, 164, 164,
 165, 165, 165, 165, 165, 165, 167, 167, 167, 171, 171, 171, 170, 170, 170, 163, 163, 163, 169, 169, 169, 185, 185, 185,
 91, 91, 91, 32, 32, 32, 39, 39, 39, 58, 58, 58, 149, 149, 149, 191, 191, 191, 186, 186, 186, 181, 181, 181,
 183, 183, 183, 182, 182, 182, 184, 184, 184, 189, 189, 189, 188, 188, 188, 186, 186, 186, 158, 158, 158, 77, 77, 77,
 162, 162, 162, 234, 234, 234, 243, 243, 243, 230, 230, 230, 207, 207, 207, 183, 183, 183, 167, 167, 167, 167, 167, 167,
 169, 169, 169, 168, 168, 168, 169, 169, 169, 168, 168, 168, 163, 163, 163, 164, 164, 164, 165, 165, 165, 192, 192, 192,
 170, 170, 170, 94, 94, 94, 34, 34, 34, 32, 32, 32, 73, 73, 73, 124, 124, 124, 182, 182, 182, 187, 187, 187,
 189, 189, 189, 186, 186, 186, 186, 186, 186, 190, 190, 190, 190, 190, 190, 189, 189, 189, 138, 138, 138, 142, 142, 142,
 222, 222, 222, 227, 227, 227, 216, 216, 216, 199, 199, 199, 176, 176, 176, 160, 160, 160, 164, 164, 164, 174, 174, 174,
 172, 172, 172, 169, 169, 169, 170, 170, 170, 166, 166, 166, 163, 163, 163, 167, 167, 167, 166, 166, 166, 180, 180, 180,
 208, 208, 208, 164, 164, 164, 80, 80, 80, 49, 49, 49, 32, 32, 32, 62, 62, 62, 130, 130, 130, 163, 163, 163,
 182, 182, 182, 188, 188, 188, 190, 190, 190, 189, 189, 189, 191, 191, 191, 191, 191, 191, 146, 146, 146, 220, 220, 220,
 221, 221, 221, 192, 192, 192, 173, 173, 173, 160, 160, 160, 162, 162, 162, 168, 168, 168, 167, 167, 167, 171, 171, 171,
 171, 171, 171, 168, 168, 168, 169, 169, 169, 167, 167, 167, 169, 169, 169, 169, 169, 169, 168, 168, 168, 171, 171, 171,
 201, 201, 201, 213, 213, 213, 158, 158, 158, 94, 94, 94, 50, 50, 50, 36, 36, 36, 50, 50, 50, 110, 110, 110,
 100, 100, 100, 181, 181, 181, 197, 197, 197, 189, 189, 189, 192, 192, 192, 189, 189, 189, 200, 200, 200, 172, 172, 172,
 162, 162, 162, 162, 162, 162, 167, 167, 167, 167, 167, 167, 169, 169, 169, 172, 172, 172, 172, 172, 172, 171, 171, 171,
 171, 171, 171, 169, 169, 169, 173, 173, 173, 172, 172, 172, 172, 172, 172, 173, 173, 173, 170, 170, 170, 168, 168, 168,
 201, 201, 201, 209, 209, 209, 209, 209, 209, 179, 179, 179, 140, 140, 140, 62, 62, 62, 45, 45, 45, 64, 64, 64,
 82, 82, 82, 86, 86, 86, 175, 175, 175, 195, 195, 195, 189, 189, 189, 184, 184, 184, 177, 177, 177, 172, 172, 172,
 170, 170, 170, 169, 169, 169, 169, 169, 169, 169, 169, 169, 175, 175, 175, 174, 174, 174, 172, 172, 172, 170, 170, 170,
 171, 171, 171, 173, 173, 173, 174, 174, 174, 174, 174, 174, 172, 172, 172, 175, 175, 175, 172, 172, 172, 169, 169, 169,
 187, 187, 187, 209, 209, 209, 215, 215, 215, 199, 199, 199, 168, 168, 168, 175, 175, 175, 101, 101, 101, 55, 55, 55,
 72, 72, 72, 90, 90, 90, 114, 114, 114, 160, 160, 160, 190, 190, 190, 179, 179, 179, 173, 173, 173, 172, 172, 172,
 171, 171, 171, 172, 172, 172, 172, 172, 172, 175, 175, 175, 169, 169, 169, 175, 175, 175, 172, 172, 172, 172, 172, 172,
 171, 171, 171, 175, 175, 175, 172, 172, 172, 175, 175, 175, 174, 174, 174, 174, 174, 174, 172, 172, 172, 169, 169, 169,
 171, 171, 171, 205, 205, 205, 212, 212, 212, 212, 212, 212, 180, 180, 180, 169, 169, 169, 164, 164, 164, 115, 115, 115,
 114, 114, 114, 84, 84, 84, 91, 91, 91, 122, 122, 122, 161, 161, 161, 183, 183, 183, 175, 175, 175, 174, 174, 174,
 172, 172, 172, 173, 173, 173, 172, 172, 172, 175, 175, 175, 168, 168, 168, 173, 173, 173, 172, 172, 172, 172, 172, 172,
 170, 170, 170, 174, 174, 174, 173, 173, 173, 176, 176, 176, 176, 176, 176, 176, 176, 176, 173, 173, 173, 170, 170, 170,
 167, 167, 167, 186, 186, 186, 212, 212, 212, 216, 216, 216, 200, 200, 200, 169, 169, 169, 176, 176, 176, 162, 162, 162,
};

#endif /*_METAL_TEXTURE_HEADER */
