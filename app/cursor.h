/* Dia -- an diagram creation/manipulation program
 * Copyright (C) 1998 Alexander Larsson
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/* Definitions for creating cursors */
/* Collected here so that it will be easier to use cursors provided
   by a toolkit */

typedef enum {
  CURSOR_POINT,
  CURSOR_CREATE,
  CURSOR_SCROLL,
  CURSOR_GRAB,
  CURSOR_GRABBING,
  CURSOR_ZOOM_OUT,
  CURSOR_ZOOM_IN,
  CURSOR_CONNECT,
  CURSOR_XTERM,
  CURSOR_DIRECTION_0, /* there are eight of them */
  CURSOR_DIRECTION_7 = CURSOR_DIRECTION_0 + 7,
  MAX_CURSORS
} DiaCursorType;

/* Preferred way to get a cursor */
GdkCursor *get_cursor(DiaCursorType ctype);
