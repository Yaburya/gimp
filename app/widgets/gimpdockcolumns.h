/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpdockcolumns.h
 * Copyright (C) 2009 Martin Nordholts <martinn@src.gnome.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_DOCK_COLUMNS_H__
#define __GIMP_DOCK_COLUMNS_H__


#define GIMP_TYPE_DOCK_COLUMNS            (gimp_dock_columns_get_type ())
#define GIMP_DOCK_COLUMNS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_DOCK_COLUMNS, GimpDockColumns))
#define GIMP_DOCK_COLUMNS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GIMP_TYPE_DOCK_COLUMNS, GimpDockColumnsClass))
#define GIMP_IS_DOCK_COLUMNS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_DOCK_COLUMNS))
#define GIMP_IS_DOCK_COLUMNS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GIMP_TYPE_DOCK_COLUMNS))
#define GIMP_DOCK_COLUMNS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GIMP_TYPE_DOCK_COLUMNS, GimpDockColumnsClass))


typedef struct _GimpDockColumnsClass    GimpDockColumnsClass;
typedef struct _GimpDockColumnsPrivate  GimpDockColumnsPrivate;

/**
 * A widget containing GimpDocks so that dockables are arranged in
 * columns.
 */
struct _GimpDockColumns
{
  GtkHBox parent_instance;

  GimpDockColumnsPrivate *p;
};

struct _GimpDockColumnsClass
{
  GtkHBoxClass parent_class;
};


GType               gimp_dock_columns_get_type       (void) G_GNUC_CONST;


#endif /* __GIMP_DOCK_COLUMNS_H__ */