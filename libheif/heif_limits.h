/*
 * HEIF codec.
 * Copyright (c) 2018 struktur AG, Dirk Farin <farin@struktur.de>
 *
 * This file is part of libheif.
 *
 * libheif is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * libheif is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libheif.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBHEIF_HEIF_LIMITS_H
#define LIBHEIF_HEIF_LIMITS_H

#if defined(HAVE_CONFIG_H)
#include "config.h"
#endif

#if defined(HAVE_INTTYPES_H)
#include <inttypes.h>
#endif
#if defined(HAVE_STDDEF_H)
#include <stddef.h>
#endif

static const size_t MAX_CHILDREN_PER_BOX = 1024;
static const int MAX_ILOC_ITEMS = 1024;
static const int MAX_ILOC_EXTENTS_PER_ITEM = 32;
static const int MAX_MEMORY_BLOCK_SIZE = 50*1024*1024; // 50 MB

// Artificial limit to avoid allocating too much memory.
static const int MAX_IMAGE_WIDTH = 16384;
static const int MAX_IMAGE_HEIGHT = 16384;

// Maximum nesting level of boxes in input files.
// We put a limit on this to avoid unlimited stack usage by malicious input files.
static const int MAX_BOX_NESTING_LEVEL = 20;

static const int MAX_BOX_SIZE = 0x7FFFFFFF; // 2 GB

#endif  // LIBHEIF_HEIF_LIMITS_H
