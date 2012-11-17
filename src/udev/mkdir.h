/*-*- Mode: C; c-basic-offset: 8; indent-tabs-mode: nil -*-*/

#ifndef foomkdirhfoo
#define foomkdirhfoo

/***
  This file is part of eudev.

  Copyright 2010 Lennart Poettering
  Copyright 2012 Gentoo Foundation

  eudev is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 2.1 of the License, or
  (at your option) any later version.

  eudev is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with eudev; If not, see <http://www.gnu.org/licenses/>.
***/

int mkdir_label(const char *path, mode_t mode);
int mkdir_safe(const char *path, mode_t mode, uid_t uid, gid_t gid);
int mkdir_safe_label(const char *path, mode_t mode, uid_t uid, gid_t gid);
int mkdir_parents(const char *path, mode_t mode);
int mkdir_parents_label(const char *path, mode_t mode);
int mkdir_p(const char *path, mode_t mode);
int mkdir_p_label(const char *path, mode_t mode);
#endif
