/* Type information for function.c.
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
gt_ggc_mx_temp_slot (void *x_p)
{
  struct temp_slot * const x = (struct temp_slot *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9temp_slot ((*x).next);
      gt_ggc_m_7rtx_def ((*x).slot);
      gt_ggc_m_7rtx_def ((*x).address);
      gt_ggc_m_9tree_node ((*x).type);
      gt_ggc_m_9tree_node ((*x).rtl_expr);
    }
}

void
gt_pch_nx_temp_slot (void *x_p)
{
  struct temp_slot * const x = (struct temp_slot *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9temp_slot))
    {
      gt_pch_n_9temp_slot ((*x).next);
      gt_pch_n_7rtx_def ((*x).slot);
      gt_pch_n_7rtx_def ((*x).address);
      gt_pch_n_9tree_node ((*x).type);
      gt_pch_n_9tree_node ((*x).rtl_expr);
    }
}

void
gt_pch_p_9temp_slot (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct temp_slot * const x ATTRIBUTE_UNUSED = (struct temp_slot *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).slot), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).address), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).rtl_expr), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_function_h[] = {
  {
    &initial_trampoline,
    1,
    sizeof (initial_trampoline),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &sibcall_epilogue,
    1,
    sizeof (sibcall_epilogue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &epilogue,
    1,
    sizeof (epilogue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &prologue,
    1,
    sizeof (prologue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_function_h[] = {
  { &next_block_index, 1, sizeof (next_block_index), NULL, NULL },
  { &funcdef_no, 1, sizeof (funcdef_no), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

