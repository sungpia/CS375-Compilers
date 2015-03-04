/* parse.h         Gordon S. Novak Jr.          22 Jul 99 */

/* Copyright (c) 1999 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/* This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License (file gpl.text) for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. */

#ifndef SYMBOL
#include "symtab.h"
#endif

TOKEN cons(TOKEN item, TOKEN list);
TOKEN binop(TOKEN op, TOKEN lhs, TOKEN rhs);
TOKEN makeif(TOKEN tok, TOKEN exp, TOKEN thenpart, TOKEN elsepart);
TOKEN makeprogn(TOKEN tok, TOKEN statements);
