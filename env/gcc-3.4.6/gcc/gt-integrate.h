/* Type information for integrate.c.
   Copyright (C) 2003 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_initial_value_struct (void *x_p)
{
  struct initial_value_struct * const x = (struct initial_value_struct *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).num_entries); i0++) {
          gt_ggc_m_7rtx_def ((*x).entries[i0].hard_reg);
          gt_ggc_m_7rtx_def ((*x).entries[i0].pseudo);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_initial_value_struct (void *x_p)
{
  struct initial_value_struct * const x = (struct initial_value_struct *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20initial_value_struct))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).num_entries); i0++) {
          gt_pch_n_7rtx_def ((*x).entries[i0].hard_reg);
          gt_pch_n_7rtx_def ((*x).entries[i0].pseudo);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_20initial_value_struct);
      }
    }
}

void
gt_pch_p_20initial_value_struct (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct initial_value_struct * const x ATTRIBUTE_UNUSED = (struct initial_value_struct *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(((*x)).num_entries); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0].hard_reg), cookie);
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0].pseudo), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_integrate_h[] = {
  {
    &old_cfun,
    1,
    sizeof (old_cfun),
    &gt_ggc_mx_function,
    &gt_pch_nx_function
  },
  LAST_GGC_ROOT_TAB
};

