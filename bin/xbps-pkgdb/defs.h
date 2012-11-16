/*-
 * Copyright (c) 2012 Juan Romero Pardines.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _XBPS_PKGDB_DEFS_H_
#define _XBPS_PKGDB_DEFS_H_

#include <sys/time.h>
#include <xbps_api.h>

/* from check.c */
int	check_pkg_integrity(struct xbps_handle *,
			    prop_dictionary_t,
			    const char *,
			    bool,
			    bool *);
int	check_pkg_integrity_all(struct xbps_handle *);

#define CHECK_PKG_DECL(type)			\
int check_pkg_##type (struct xbps_handle *, const char *, void *, bool *)

CHECK_PKG_DECL(unneeded);
CHECK_PKG_DECL(files);
CHECK_PKG_DECL(rundeps);
CHECK_PKG_DECL(symlinks);
CHECK_PKG_DECL(requiredby);

/* from convert.c */
int	convert_pkgd_metadir(struct xbps_handle *, prop_dictionary_t);

#endif /* !_XBPS_PKGDB_DEFS_H_ */
