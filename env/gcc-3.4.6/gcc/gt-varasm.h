/* Type information for varasm.c.
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
gt_ggc_mx_output_def_pair (void *x_p)
{
  struct output_def_pair * const x = (struct output_def_pair *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_9tree_node ((*x).target);
    }
}

void
gt_ggc_mx_constant_descriptor_tree (void *x_p)
{
  struct constant_descriptor_tree * const x = (struct constant_descriptor_tree *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).rtl);
      gt_ggc_m_9tree_node ((*x).value);
    }
}

void
gt_ggc_mx_in_named_entry (void *x_p)
{
  struct in_named_entry * const x = (struct in_named_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_pool_constant (void *x_p)
{
  struct pool_constant * const x = (struct pool_constant *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_23constant_descriptor_rtx ((*x).desc);
      gt_ggc_m_13pool_constant ((*x).next);
      gt_ggc_m_13pool_constant ((*x).next_sym);
      gt_ggc_m_7rtx_def ((*x).constant);
    }
}

void
gt_ggc_mx_constant_descriptor_rtx (void *x_p)
{
  struct constant_descriptor_rtx * const x = (struct constant_descriptor_rtx *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_23constant_descriptor_rtx ((*x).next);
      gt_ggc_m_7rtx_def ((*x).rtl);
      switch (((*x).value).kind >= RTX_INT)
        {
        case 4:
          break;
        case 1:
          gt_ggc_m_7rtx_def ((*x).value.un.addr.base);
          break;
        case 0:
          break;
        case 2:
          {
            size_t i0;
            for (i0 = 0; i0 < (size_t)(16); i0++) {
            }
          }
          break;
        case 3:
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_varasm_status (void *x_p)
{
  struct varasm_status * const x = (struct varasm_status *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).x_const_rtx_hash_table != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(MAX_RTX_HASH_TABLE); i0++) {
          gt_ggc_m_23constant_descriptor_rtx ((*x).x_const_rtx_hash_table[i0]);
        }
        ggc_mark ((*x).x_const_rtx_hash_table);
      }
      if ((*x).x_const_rtx_sym_hash_table != NULL) {
        size_t i1;
        for (i1 = 0; i1 < (size_t)(MAX_RTX_HASH_TABLE); i1++) {
          gt_ggc_m_13pool_constant ((*x).x_const_rtx_sym_hash_table[i1]);
        }
        ggc_mark ((*x).x_const_rtx_sym_hash_table);
      }
      gt_ggc_m_13pool_constant ((*x).x_first_pool);
      gt_ggc_m_13pool_constant ((*x).x_last_pool);
    }
}

void
gt_ggc_m_P15output_def_pair15varray_head_tag (void *x_p)
{
  struct varray_head_tag * const x = (struct varray_head_tag *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch ((*x).type)
        {
        case VARRAY_DATA_C:
          break;
        case VARRAY_DATA_UC:
          break;
        case VARRAY_DATA_S:
          break;
        case VARRAY_DATA_US:
          break;
        case VARRAY_DATA_I:
          break;
        case VARRAY_DATA_U:
          break;
        case VARRAY_DATA_L:
          break;
        case VARRAY_DATA_UL:
          break;
        case VARRAY_DATA_HINT:
          break;
        case VARRAY_DATA_UHINT:
          break;
        case VARRAY_DATA_GENERIC:
          {
            size_t i10;
            for (i10 = 0; i10 < (size_t)((*x).num_elements); i10++) {
              gt_ggc_m_15output_def_pair ((*x).data.generic[i10]);
            }
          }
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i11;
            for (i11 = 0; i11 < (size_t)((*x).num_elements); i11++) {
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i12;
            for (i12 = 0; i12 < (size_t)((*x).num_elements); i12++) {
              gt_ggc_m_7rtx_def ((*x).data.rtx[i12]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i13;
            for (i13 = 0; i13 < (size_t)((*x).num_elements); i13++) {
              gt_ggc_m_9rtvec_def ((*x).data.rtvec[i13]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i14;
            for (i14 = 0; i14 < (size_t)((*x).num_elements); i14++) {
              gt_ggc_m_9tree_node ((*x).data.tree[i14]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i15;
            for (i15 = 0; i15 < (size_t)((*x).num_elements); i15++) {
              gt_ggc_m_15bitmap_head_def ((*x).data.bitmap[i15]);
            }
          }
          break;
        case VARRAY_DATA_CONST_EQUIV:
          {
            size_t i16;
            for (i16 = 0; i16 < (size_t)((*x).num_elements); i16++) {
              gt_ggc_m_7rtx_def ((*x).data.const_equiv[i16].rtx);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i17;
            for (i17 = 0; i17 < (size_t)((*x).num_elements); i17++) {
              gt_ggc_m_8elt_list ((*x).data.te[i17]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_m_P24constant_descriptor_tree4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
          gt_ggc_m_24constant_descriptor_tree ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P14in_named_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
          gt_ggc_m_14in_named_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_output_def_pair (void *x_p)
{
  struct output_def_pair * const x = (struct output_def_pair *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15output_def_pair))
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_9tree_node ((*x).target);
    }
}

void
gt_pch_nx_constant_descriptor_tree (void *x_p)
{
  struct constant_descriptor_tree * const x = (struct constant_descriptor_tree *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_24constant_descriptor_tree))
    {
      gt_pch_n_7rtx_def ((*x).rtl);
      gt_pch_n_9tree_node ((*x).value);
    }
}

void
gt_pch_nx_in_named_entry (void *x_p)
{
  struct in_named_entry * const x = (struct in_named_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14in_named_entry))
    {
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_nx_pool_constant (void *x_p)
{
  struct pool_constant * const x = (struct pool_constant *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13pool_constant))
    {
      gt_pch_n_23constant_descriptor_rtx ((*x).desc);
      gt_pch_n_13pool_constant ((*x).next);
      gt_pch_n_13pool_constant ((*x).next_sym);
      gt_pch_n_7rtx_def ((*x).constant);
    }
}

void
gt_pch_nx_constant_descriptor_rtx (void *x_p)
{
  struct constant_descriptor_rtx * const x = (struct constant_descriptor_rtx *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_23constant_descriptor_rtx))
    {
      gt_pch_n_23constant_descriptor_rtx ((*x).next);
      gt_pch_n_7rtx_def ((*x).rtl);
      switch (((*x).value).kind >= RTX_INT)
        {
        case 4:
          break;
        case 1:
          gt_pch_n_7rtx_def ((*x).value.un.addr.base);
          gt_pch_n_S ((*x).value.un.addr.symbol);
          break;
        case 0:
          break;
        case 2:
          {
            size_t i0;
            for (i0 = 0; i0 < (size_t)(16); i0++) {
            }
          }
          break;
        case 3:
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_varasm_status (void *x_p)
{
  struct varasm_status * const x = (struct varasm_status *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13varasm_status))
    {
      if ((*x).x_const_rtx_hash_table != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(MAX_RTX_HASH_TABLE); i0++) {
          gt_pch_n_23constant_descriptor_rtx ((*x).x_const_rtx_hash_table[i0]);
        }
        gt_pch_note_object ((*x).x_const_rtx_hash_table, x, gt_pch_p_13varasm_status);
      }
      if ((*x).x_const_rtx_sym_hash_table != NULL) {
        size_t i1;
        for (i1 = 0; i1 < (size_t)(MAX_RTX_HASH_TABLE); i1++) {
          gt_pch_n_13pool_constant ((*x).x_const_rtx_sym_hash_table[i1]);
        }
        gt_pch_note_object ((*x).x_const_rtx_sym_hash_table, x, gt_pch_p_13varasm_status);
      }
      gt_pch_n_13pool_constant ((*x).x_first_pool);
      gt_pch_n_13pool_constant ((*x).x_last_pool);
    }
}

void
gt_pch_n_P15output_def_pair15varray_head_tag (void *x_p)
{
  struct varray_head_tag * const x = (struct varray_head_tag *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P15output_def_pair15varray_head_tag))
    {
      gt_pch_n_S ((*x).name);
      switch ((*x).type)
        {
        case VARRAY_DATA_C:
          break;
        case VARRAY_DATA_UC:
          break;
        case VARRAY_DATA_S:
          break;
        case VARRAY_DATA_US:
          break;
        case VARRAY_DATA_I:
          break;
        case VARRAY_DATA_U:
          break;
        case VARRAY_DATA_L:
          break;
        case VARRAY_DATA_UL:
          break;
        case VARRAY_DATA_HINT:
          break;
        case VARRAY_DATA_UHINT:
          break;
        case VARRAY_DATA_GENERIC:
          {
            size_t i10;
            for (i10 = 0; i10 < (size_t)((*x).num_elements); i10++) {
              gt_pch_n_15output_def_pair ((*x).data.generic[i10]);
            }
          }
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i11;
            for (i11 = 0; i11 < (size_t)((*x).num_elements); i11++) {
              gt_pch_n_S ((*x).data.cptr[i11]);
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i12;
            for (i12 = 0; i12 < (size_t)((*x).num_elements); i12++) {
              gt_pch_n_7rtx_def ((*x).data.rtx[i12]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i13;
            for (i13 = 0; i13 < (size_t)((*x).num_elements); i13++) {
              gt_pch_n_9rtvec_def ((*x).data.rtvec[i13]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i14;
            for (i14 = 0; i14 < (size_t)((*x).num_elements); i14++) {
              gt_pch_n_9tree_node ((*x).data.tree[i14]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i15;
            for (i15 = 0; i15 < (size_t)((*x).num_elements); i15++) {
              gt_pch_n_15bitmap_head_def ((*x).data.bitmap[i15]);
            }
          }
          break;
        case VARRAY_DATA_CONST_EQUIV:
          {
            size_t i16;
            for (i16 = 0; i16 < (size_t)((*x).num_elements); i16++) {
              gt_pch_n_7rtx_def ((*x).data.const_equiv[i16].rtx);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i17;
            for (i17 = 0; i17 < (size_t)((*x).num_elements); i17++) {
              gt_pch_n_8elt_list ((*x).data.te[i17]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_pch_n_P24constant_descriptor_tree4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P24constant_descriptor_tree4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
          gt_pch_n_24constant_descriptor_tree ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P24constant_descriptor_tree4htab);
      }
    }
}

void
gt_pch_n_P14in_named_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P14in_named_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
          gt_pch_n_14in_named_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P14in_named_entry4htab);
      }
    }
}

void
gt_pch_p_15output_def_pair (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct output_def_pair * const x ATTRIBUTE_UNUSED = (struct output_def_pair *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).target), cookie);
}

void
gt_pch_p_24constant_descriptor_tree (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct constant_descriptor_tree * const x ATTRIBUTE_UNUSED = (struct constant_descriptor_tree *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).rtl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
}

void
gt_pch_p_14in_named_entry (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct in_named_entry * const x ATTRIBUTE_UNUSED = (struct in_named_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

void
gt_pch_p_13pool_constant (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct pool_constant * const x ATTRIBUTE_UNUSED = (struct pool_constant *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).desc), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_sym), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).constant), cookie);
}

void
gt_pch_p_23constant_descriptor_rtx (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct constant_descriptor_rtx * const x ATTRIBUTE_UNUSED = (struct constant_descriptor_rtx *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).rtl), cookie);
  switch (((*x).value).kind >= RTX_INT)
    {
    case 4:
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).value.un.addr.base), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).value.un.addr.symbol), cookie);
      break;
    case 0:
      break;
    case 2:
      {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(16); i0++) {
        }
      }
      break;
    case 3:
      break;
    default:
      break;
    }
}

void
gt_pch_p_13varasm_status (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct varasm_status * const x ATTRIBUTE_UNUSED = (struct varasm_status *)x_p;
  if ((*x).x_const_rtx_hash_table != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(MAX_RTX_HASH_TABLE); i0++) {
      if ((void *)((*x).x_const_rtx_hash_table) == this_obj)
        op (&((*x).x_const_rtx_hash_table[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).x_const_rtx_hash_table), cookie);
  }
  if ((*x).x_const_rtx_sym_hash_table != NULL) {
    size_t i1;
    for (i1 = 0; i1 < (size_t)(MAX_RTX_HASH_TABLE); i1++) {
      if ((void *)((*x).x_const_rtx_sym_hash_table) == this_obj)
        op (&((*x).x_const_rtx_sym_hash_table[i1]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).x_const_rtx_sym_hash_table), cookie);
  }
  if ((void *)(x) == this_obj)
    op (&((*x).x_first_pool), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_last_pool), cookie);
}

void
gt_pch_p_P15output_def_pair15varray_head_tag (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct varray_head_tag * const x ATTRIBUTE_UNUSED = (struct varray_head_tag *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
  switch ((*x).type)
    {
    case VARRAY_DATA_C:
      break;
    case VARRAY_DATA_UC:
      break;
    case VARRAY_DATA_S:
      break;
    case VARRAY_DATA_US:
      break;
    case VARRAY_DATA_I:
      break;
    case VARRAY_DATA_U:
      break;
    case VARRAY_DATA_L:
      break;
    case VARRAY_DATA_UL:
      break;
    case VARRAY_DATA_HINT:
      break;
    case VARRAY_DATA_UHINT:
      break;
    case VARRAY_DATA_GENERIC:
      {
        size_t i10;
        for (i10 = 0; i10 < (size_t)((*x).num_elements); i10++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.generic[i10]), cookie);
        }
      }
      break;
    case VARRAY_DATA_CPTR:
      {
        size_t i11;
        for (i11 = 0; i11 < (size_t)((*x).num_elements); i11++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.cptr[i11]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTX:
      {
        size_t i12;
        for (i12 = 0; i12 < (size_t)((*x).num_elements); i12++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtx[i12]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTVEC:
      {
        size_t i13;
        for (i13 = 0; i13 < (size_t)((*x).num_elements); i13++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtvec[i13]), cookie);
        }
      }
      break;
    case VARRAY_DATA_TREE:
      {
        size_t i14;
        for (i14 = 0; i14 < (size_t)((*x).num_elements); i14++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.tree[i14]), cookie);
        }
      }
      break;
    case VARRAY_DATA_BITMAP:
      {
        size_t i15;
        for (i15 = 0; i15 < (size_t)((*x).num_elements); i15++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.bitmap[i15]), cookie);
        }
      }
      break;
    case VARRAY_DATA_CONST_EQUIV:
      {
        size_t i16;
        for (i16 = 0; i16 < (size_t)((*x).num_elements); i16++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.const_equiv[i16].rtx), cookie);
        }
      }
      break;
    case VARRAY_DATA_TE:
      {
        size_t i17;
        for (i17 = 0; i17 < (size_t)((*x).num_elements); i17++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.te[i17]), cookie);
        }
      }
      break;
    default:
      break;
    }
}

void
gt_pch_p_P24constant_descriptor_tree4htab (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

void
gt_pch_p_P14in_named_entry4htab (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_varasm_h[] = {
  {
    &output_defs,
    1,
    sizeof (output_defs),
    &gt_ggc_m_P15output_def_pair15varray_head_tag,
    &gt_pch_n_P15output_def_pair15varray_head_tag
  },
  {
    &weak_decls,
    1,
    sizeof (weak_decls),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &const_desc_htab,
    1,
    sizeof (const_desc_htab),
    &gt_ggc_m_P24constant_descriptor_tree4htab,
    &gt_pch_n_P24constant_descriptor_tree4htab
  },
  {
    &in_named_htab,
    1,
    sizeof (in_named_htab),
    &gt_ggc_m_P14in_named_entry4htab,
    &gt_pch_n_P14in_named_entry4htab
  },
  {
    &in_named_name,
    1, 
    sizeof (in_named_name),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_varasm_h[] = {
  { &in_section, 1, sizeof (in_section), NULL, NULL },
  { &const_labelno, 1, sizeof (const_labelno), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

