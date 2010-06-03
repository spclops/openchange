/*
   OpenChange OCPF (OpenChange Property File) implementation.

   Copyright (C) Julien Kerihuel 2008.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef	__OCPF_H_
#define	__OCPF_H_

#include <libmapi/libmapi.h>
#include <libocpf/proto.h>

#define	OCPF_SUCCESS	0x0
#define	OCPF_ERROR	0x1
#define	OCPF_E_EXIST	0x2

#define	OCPF_FLAGS_RDWR			0
#define	OCPF_FLAGS_READ			1
#define	OCPF_FLAGS_WRITE		2
#define	OCPF_FLAGS_CREATE		3

extern struct ocpf	*ocpf;

#endif /* ! __OCPF_H_ */
