/* Type information for GCC.
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

/* Enumeration of types known.  */
enum gt_types_enum {
 gt_ggc_e_11align_stack, 
 gt_ggc_e_7c_scope, 
 gt_ggc_e_15output_def_pair, 
 gt_ggc_e_24constant_descriptor_tree, 
 gt_ggc_e_14in_named_entry, 
 gt_ggc_e_13pool_constant, 
 gt_ggc_e_23constant_descriptor_rtx, 
 gt_ggc_e_9type_hash, 
 gt_ggc_e_16string_pool_data, 
 gt_ggc_e_10goto_fixup, 
 gt_ggc_e_11label_chain, 
 gt_ggc_e_7nesting, 
 gt_ggc_e_9case_node, 
 gt_ggc_e_9eh_region, 
 gt_ggc_e_13ehl_map_entry, 
 gt_ggc_e_16limbo_die_struct, 
 gt_ggc_e_16dw_ranges_struct, 
 gt_ggc_e_14pubname_struct, 
 gt_ggc_e_28dw_separate_line_info_struct, 
 gt_ggc_e_19dw_line_info_struct, 
 gt_ggc_e_14dw_attr_struct, 
 gt_ggc_e_18dw_loc_list_struct, 
 gt_ggc_e_15queued_reg_save, 
 gt_ggc_e_20indirect_string_node, 
 gt_ggc_e_19dw_loc_descr_struct, 
 gt_ggc_e_13dw_fde_struct, 
 gt_ggc_e_13dw_cfi_struct, 
 gt_ggc_e_8typeinfo, 
 gt_ggc_e_15alias_set_entry, 
 gt_ggc_e_18sorted_fields_type, 
 gt_ggc_e_19cgraph_varpool_node, 
 gt_ggc_e_11cgraph_edge, 
 gt_ggc_e_11cgraph_node, 
 gt_ggc_e_12elt_loc_list, 
 gt_ggc_e_17cselib_val_struct, 
 gt_ggc_e_15varray_head_tag, 
 gt_ggc_e_8elt_list, 
 gt_ggc_e_12reg_info_def, 
 gt_ggc_e_14lang_tree_node, 
 gt_ggc_e_9lang_decl, 
 gt_ggc_e_9lang_type, 
 gt_ggc_e_10die_struct, 
 gt_ggc_e_10real_value, 
 gt_ggc_e_13convert_optab, 
 gt_ggc_e_5optab, 
 gt_ggc_e_15basic_block_def, 
 gt_ggc_e_9reg_attrs, 
 gt_ggc_e_9mem_attrs, 
 gt_ggc_e_17language_function, 
 gt_ggc_e_9temp_slot, 
 gt_ggc_e_20initial_value_struct, 
 gt_ggc_e_13varasm_status, 
 gt_ggc_e_11stmt_status, 
 gt_ggc_e_9eh_status, 
 gt_ggc_e_8function, 
 gt_ggc_e_11expr_status, 
 gt_ggc_e_11emit_status, 
 gt_ggc_e_14sequence_stack, 
 gt_ggc_e_14var_refs_queue, 
 gt_ggc_e_15bitmap_head_def, 
 gt_ggc_e_18bitmap_element_def, 
 gt_ggc_e_6answer, 
 gt_ggc_e_9cpp_macro, 
 gt_ggc_e_9tree_node, 
 gt_ggc_e_9rtvec_def, 
 gt_ggc_e_7rtx_def, 
 gt_e_II17splay_tree_node_s, 
 gt_e_SP9tree_node17splay_tree_node_s, 
 gt_e_P15output_def_pair15varray_head_tag, 
 gt_e_P24constant_descriptor_tree4htab, 
 gt_e_P14in_named_entry4htab, 
 gt_e_P9type_hash4htab, 
 gt_e_P13ehl_map_entry4htab, 
 gt_e_P9tree_node4htab, 
 gt_e_P9reg_attrs4htab, 
 gt_e_P9mem_attrs4htab, 
 gt_e_P7rtx_def4htab, 
 gt_e_SP9tree_node12splay_tree_s, 
 gt_e_P20indirect_string_node4htab, 
 gt_e_P19cgraph_varpool_node4htab, 
 gt_e_P11cgraph_node4htab, 
 gt_e_P17cselib_val_struct4htab, 
 gt_e_P15alias_set_entry15varray_head_tag, 
 gt_e_II12splay_tree_s, 
 gt_types_enum_last
};

/* GC marker procedures.  */
#define gt_ggc_m_11align_stack(X) do { \
  if (X != NULL) gt_ggc_mx_align_stack (X);\
  } while (0)
extern void gt_ggc_mx_align_stack (void *);
#define gt_ggc_m_7c_scope(X) do { \
  if (X != NULL) gt_ggc_mx_c_scope (X);\
  } while (0)
extern void gt_ggc_mx_c_scope (void *);
#define gt_ggc_m_15output_def_pair(X) do { \
  if (X != NULL) gt_ggc_mx_output_def_pair (X);\
  } while (0)
extern void gt_ggc_mx_output_def_pair (void *);
#define gt_ggc_m_24constant_descriptor_tree(X) do { \
  if (X != NULL) gt_ggc_mx_constant_descriptor_tree (X);\
  } while (0)
extern void gt_ggc_mx_constant_descriptor_tree (void *);
#define gt_ggc_m_14in_named_entry(X) do { \
  if (X != NULL) gt_ggc_mx_in_named_entry (X);\
  } while (0)
extern void gt_ggc_mx_in_named_entry (void *);
#define gt_ggc_m_13pool_constant(X) do { \
  if (X != NULL) gt_ggc_mx_pool_constant (X);\
  } while (0)
extern void gt_ggc_mx_pool_constant (void *);
#define gt_ggc_m_23constant_descriptor_rtx(X) do { \
  if (X != NULL) gt_ggc_mx_constant_descriptor_rtx (X);\
  } while (0)
extern void gt_ggc_mx_constant_descriptor_rtx (void *);
#define gt_ggc_m_9type_hash(X) do { \
  if (X != NULL) gt_ggc_mx_type_hash (X);\
  } while (0)
extern void gt_ggc_mx_type_hash (void *);
#define gt_ggc_m_16string_pool_data(X) do { \
  if (X != NULL) gt_ggc_mx_string_pool_data (X);\
  } while (0)
extern void gt_ggc_mx_string_pool_data (void *);
#define gt_ggc_m_10goto_fixup(X) do { \
  if (X != NULL) gt_ggc_mx_goto_fixup (X);\
  } while (0)
extern void gt_ggc_mx_goto_fixup (void *);
#define gt_ggc_m_11label_chain(X) do { \
  if (X != NULL) gt_ggc_mx_label_chain (X);\
  } while (0)
extern void gt_ggc_mx_label_chain (void *);
#define gt_ggc_m_7nesting(X) do { \
  if (X != NULL) gt_ggc_mx_nesting (X);\
  } while (0)
extern void gt_ggc_mx_nesting (void *);
#define gt_ggc_m_9case_node(X) do { \
  if (X != NULL) gt_ggc_mx_case_node (X);\
  } while (0)
extern void gt_ggc_mx_case_node (void *);
#define gt_ggc_m_9eh_region(X) do { \
  if (X != NULL) gt_ggc_mx_eh_region (X);\
  } while (0)
extern void gt_ggc_mx_eh_region (void *);
#define gt_ggc_m_13ehl_map_entry(X) do { \
  if (X != NULL) gt_ggc_mx_ehl_map_entry (X);\
  } while (0)
extern void gt_ggc_mx_ehl_map_entry (void *);
#define gt_ggc_m_16limbo_die_struct(X) do { \
  if (X != NULL) gt_ggc_mx_limbo_die_struct (X);\
  } while (0)
extern void gt_ggc_mx_limbo_die_struct (void *);
#define gt_ggc_m_16dw_ranges_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_ranges_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_ranges_struct (void *);
#define gt_ggc_m_14pubname_struct(X) do { \
  if (X != NULL) gt_ggc_mx_pubname_struct (X);\
  } while (0)
extern void gt_ggc_mx_pubname_struct (void *);
#define gt_ggc_m_28dw_separate_line_info_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_separate_line_info_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_separate_line_info_struct (void *);
#define gt_ggc_m_19dw_line_info_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_line_info_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_line_info_struct (void *);
#define gt_ggc_m_14dw_attr_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_attr_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_attr_struct (void *);
#define gt_ggc_m_18dw_loc_list_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_loc_list_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_loc_list_struct (void *);
#define gt_ggc_m_15queued_reg_save(X) do { \
  if (X != NULL) gt_ggc_mx_queued_reg_save (X);\
  } while (0)
extern void gt_ggc_mx_queued_reg_save (void *);
#define gt_ggc_m_20indirect_string_node(X) do { \
  if (X != NULL) gt_ggc_mx_indirect_string_node (X);\
  } while (0)
extern void gt_ggc_mx_indirect_string_node (void *);
#define gt_ggc_m_19dw_loc_descr_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_loc_descr_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_loc_descr_struct (void *);
#define gt_ggc_m_13dw_fde_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_fde_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_fde_struct (void *);
#define gt_ggc_m_13dw_cfi_struct(X) do { \
  if (X != NULL) gt_ggc_mx_dw_cfi_struct (X);\
  } while (0)
extern void gt_ggc_mx_dw_cfi_struct (void *);
#define gt_ggc_m_8typeinfo(X) do { \
  if (X != NULL) gt_ggc_mx_typeinfo (X);\
  } while (0)
extern void gt_ggc_mx_typeinfo (void *);
#define gt_ggc_m_15alias_set_entry(X) do { \
  if (X != NULL) gt_ggc_mx_alias_set_entry (X);\
  } while (0)
extern void gt_ggc_mx_alias_set_entry (void *);
#define gt_ggc_m_18sorted_fields_type(X) do { \
  if (X != NULL) gt_ggc_mx_sorted_fields_type (X);\
  } while (0)
extern void gt_ggc_mx_sorted_fields_type (void *);
#define gt_ggc_m_19cgraph_varpool_node(X) do { \
  if (X != NULL) gt_ggc_mx_cgraph_varpool_node (X);\
  } while (0)
extern void gt_ggc_mx_cgraph_varpool_node (void *);
#define gt_ggc_m_11cgraph_edge(X) do { \
  if (X != NULL) gt_ggc_mx_cgraph_edge (X);\
  } while (0)
extern void gt_ggc_mx_cgraph_edge (void *);
#define gt_ggc_m_11cgraph_node(X) do { \
  if (X != NULL) gt_ggc_mx_cgraph_node (X);\
  } while (0)
extern void gt_ggc_mx_cgraph_node (void *);
#define gt_ggc_m_12elt_loc_list(X) do { \
  if (X != NULL) gt_ggc_mx_elt_loc_list (X);\
  } while (0)
extern void gt_ggc_mx_elt_loc_list (void *);
#define gt_ggc_m_17cselib_val_struct(X) do { \
  if (X != NULL) gt_ggc_mx_cselib_val_struct (X);\
  } while (0)
extern void gt_ggc_mx_cselib_val_struct (void *);
#define gt_ggc_m_15varray_head_tag(X) do { \
  if (X != NULL) gt_ggc_mx_varray_head_tag (X);\
  } while (0)
extern void gt_ggc_mx_varray_head_tag (void *);
#define gt_ggc_m_8elt_list(X) do { \
  if (X != NULL) gt_ggc_mx_elt_list (X);\
  } while (0)
extern void gt_ggc_mx_elt_list (void *);
#define gt_ggc_m_12reg_info_def(X) do { \
  if (X != NULL) gt_ggc_mx_reg_info_def (X);\
  } while (0)
extern void gt_ggc_mx_reg_info_def (void *);
#define gt_ggc_m_14lang_tree_node(X) do { \
  if (X != NULL) gt_ggc_mx_lang_tree_node (X);\
  } while (0)
extern void gt_ggc_mx_lang_tree_node (void *);
#define gt_ggc_m_9lang_decl(X) do { \
  if (X != NULL) gt_ggc_mx_lang_decl (X);\
  } while (0)
extern void gt_ggc_mx_lang_decl (void *);
#define gt_ggc_m_9lang_type(X) do { \
  if (X != NULL) gt_ggc_mx_lang_type (X);\
  } while (0)
extern void gt_ggc_mx_lang_type (void *);
#define gt_ggc_m_10die_struct(X) do { \
  if (X != NULL) gt_ggc_mx_die_struct (X);\
  } while (0)
extern void gt_ggc_mx_die_struct (void *);
#define gt_ggc_m_10real_value(X) do { \
  if (X != NULL) gt_ggc_mx_real_value (X);\
  } while (0)
extern void gt_ggc_mx_real_value (void *);
#define gt_ggc_m_13convert_optab(X) do { \
  if (X != NULL) gt_ggc_mx_convert_optab (X);\
  } while (0)
extern void gt_ggc_mx_convert_optab (void *);
#define gt_ggc_m_5optab(X) do { \
  if (X != NULL) gt_ggc_mx_optab (X);\
  } while (0)
extern void gt_ggc_mx_optab (void *);
#define gt_ggc_m_15basic_block_def(X) do { \
  if (X != NULL) gt_ggc_mx_basic_block_def (X);\
  } while (0)
extern void gt_ggc_mx_basic_block_def (void *);
#define gt_ggc_m_9reg_attrs(X) do { \
  if (X != NULL) gt_ggc_mx_reg_attrs (X);\
  } while (0)
extern void gt_ggc_mx_reg_attrs (void *);
#define gt_ggc_m_9mem_attrs(X) do { \
  if (X != NULL) gt_ggc_mx_mem_attrs (X);\
  } while (0)
extern void gt_ggc_mx_mem_attrs (void *);
#define gt_ggc_m_17language_function(X) do { \
  if (X != NULL) gt_ggc_mx_language_function (X);\
  } while (0)
extern void gt_ggc_mx_language_function (void *);
#define gt_ggc_m_9temp_slot(X) do { \
  if (X != NULL) gt_ggc_mx_temp_slot (X);\
  } while (0)
extern void gt_ggc_mx_temp_slot (void *);
#define gt_ggc_m_20initial_value_struct(X) do { \
  if (X != NULL) gt_ggc_mx_initial_value_struct (X);\
  } while (0)
extern void gt_ggc_mx_initial_value_struct (void *);
#define gt_ggc_m_13varasm_status(X) do { \
  if (X != NULL) gt_ggc_mx_varasm_status (X);\
  } while (0)
extern void gt_ggc_mx_varasm_status (void *);
#define gt_ggc_m_11stmt_status(X) do { \
  if (X != NULL) gt_ggc_mx_stmt_status (X);\
  } while (0)
extern void gt_ggc_mx_stmt_status (void *);
#define gt_ggc_m_9eh_status(X) do { \
  if (X != NULL) gt_ggc_mx_eh_status (X);\
  } while (0)
extern void gt_ggc_mx_eh_status (void *);
#define gt_ggc_m_8function(X) do { \
  if (X != NULL) gt_ggc_mx_function (X);\
  } while (0)
extern void gt_ggc_mx_function (void *);
#define gt_ggc_m_11expr_status(X) do { \
  if (X != NULL) gt_ggc_mx_expr_status (X);\
  } while (0)
extern void gt_ggc_mx_expr_status (void *);
#define gt_ggc_m_11emit_status(X) do { \
  if (X != NULL) gt_ggc_mx_emit_status (X);\
  } while (0)
extern void gt_ggc_mx_emit_status (void *);
#define gt_ggc_m_14sequence_stack(X) do { \
  if (X != NULL) gt_ggc_mx_sequence_stack (X);\
  } while (0)
extern void gt_ggc_mx_sequence_stack (void *);
#define gt_ggc_m_14var_refs_queue(X) do { \
  if (X != NULL) gt_ggc_mx_var_refs_queue (X);\
  } while (0)
extern void gt_ggc_mx_var_refs_queue (void *);
#define gt_ggc_m_15bitmap_head_def(X) do { \
  if (X != NULL) gt_ggc_mx_bitmap_head_def (X);\
  } while (0)
extern void gt_ggc_mx_bitmap_head_def (void *);
#define gt_ggc_m_18bitmap_element_def(X) do { \
  if (X != NULL) gt_ggc_mx_bitmap_element_def (X);\
  } while (0)
extern void gt_ggc_mx_bitmap_element_def (void *);
#define gt_ggc_m_6answer(X) do { \
  if (X != NULL) gt_ggc_mx_answer (X);\
  } while (0)
extern void gt_ggc_mx_answer (void *);
#define gt_ggc_m_9cpp_macro(X) do { \
  if (X != NULL) gt_ggc_mx_cpp_macro (X);\
  } while (0)
extern void gt_ggc_mx_cpp_macro (void *);
#define gt_ggc_m_9tree_node(X) do { \
  if (X != NULL) gt_ggc_mx_tree_node (X);\
  } while (0)
#define gt_ggc_mx_tree_node gt_ggc_mx_lang_tree_node
#define gt_ggc_m_9rtvec_def(X) do { \
  if (X != NULL) gt_ggc_mx_rtvec_def (X);\
  } while (0)
extern void gt_ggc_mx_rtvec_def (void *);
#define gt_ggc_m_7rtx_def(X) do { \
  if (X != NULL) gt_ggc_mx_rtx_def (X);\
  } while (0)
extern void gt_ggc_mx_rtx_def (void *);
extern void gt_ggc_m_II17splay_tree_node_s (void *);
extern void gt_ggc_m_SP9tree_node17splay_tree_node_s (void *);
extern void gt_ggc_m_P15output_def_pair15varray_head_tag (void *);
extern void gt_ggc_m_P24constant_descriptor_tree4htab (void *);
extern void gt_ggc_m_P14in_named_entry4htab (void *);
extern void gt_ggc_m_P9type_hash4htab (void *);
extern void gt_ggc_m_P13ehl_map_entry4htab (void *);
extern void gt_ggc_m_P9tree_node4htab (void *);
extern void gt_ggc_m_P9reg_attrs4htab (void *);
extern void gt_ggc_m_P9mem_attrs4htab (void *);
extern void gt_ggc_m_P7rtx_def4htab (void *);
extern void gt_ggc_m_SP9tree_node12splay_tree_s (void *);
extern void gt_ggc_m_P20indirect_string_node4htab (void *);
extern void gt_ggc_m_P19cgraph_varpool_node4htab (void *);
extern void gt_ggc_m_P11cgraph_node4htab (void *);
extern void gt_ggc_m_P17cselib_val_struct4htab (void *);
extern void gt_ggc_m_P15alias_set_entry15varray_head_tag (void *);
extern void gt_ggc_m_II12splay_tree_s (void *);

/* PCH type-walking procedures.  */
#define gt_pch_n_11align_stack(X) do { \
  if (X != NULL) gt_pch_nx_align_stack (X);\
  } while (0)
extern void gt_pch_nx_align_stack (void *);
#define gt_pch_n_7c_scope(X) do { \
  if (X != NULL) gt_pch_nx_c_scope (X);\
  } while (0)
extern void gt_pch_nx_c_scope (void *);
#define gt_pch_n_15output_def_pair(X) do { \
  if (X != NULL) gt_pch_nx_output_def_pair (X);\
  } while (0)
extern void gt_pch_nx_output_def_pair (void *);
#define gt_pch_n_24constant_descriptor_tree(X) do { \
  if (X != NULL) gt_pch_nx_constant_descriptor_tree (X);\
  } while (0)
extern void gt_pch_nx_constant_descriptor_tree (void *);
#define gt_pch_n_14in_named_entry(X) do { \
  if (X != NULL) gt_pch_nx_in_named_entry (X);\
  } while (0)
extern void gt_pch_nx_in_named_entry (void *);
#define gt_pch_n_13pool_constant(X) do { \
  if (X != NULL) gt_pch_nx_pool_constant (X);\
  } while (0)
extern void gt_pch_nx_pool_constant (void *);
#define gt_pch_n_23constant_descriptor_rtx(X) do { \
  if (X != NULL) gt_pch_nx_constant_descriptor_rtx (X);\
  } while (0)
extern void gt_pch_nx_constant_descriptor_rtx (void *);
#define gt_pch_n_9type_hash(X) do { \
  if (X != NULL) gt_pch_nx_type_hash (X);\
  } while (0)
extern void gt_pch_nx_type_hash (void *);
#define gt_pch_n_16string_pool_data(X) do { \
  if (X != NULL) gt_pch_nx_string_pool_data (X);\
  } while (0)
extern void gt_pch_nx_string_pool_data (void *);
#define gt_pch_n_10goto_fixup(X) do { \
  if (X != NULL) gt_pch_nx_goto_fixup (X);\
  } while (0)
extern void gt_pch_nx_goto_fixup (void *);
#define gt_pch_n_11label_chain(X) do { \
  if (X != NULL) gt_pch_nx_label_chain (X);\
  } while (0)
extern void gt_pch_nx_label_chain (void *);
#define gt_pch_n_7nesting(X) do { \
  if (X != NULL) gt_pch_nx_nesting (X);\
  } while (0)
extern void gt_pch_nx_nesting (void *);
#define gt_pch_n_9case_node(X) do { \
  if (X != NULL) gt_pch_nx_case_node (X);\
  } while (0)
extern void gt_pch_nx_case_node (void *);
#define gt_pch_n_9eh_region(X) do { \
  if (X != NULL) gt_pch_nx_eh_region (X);\
  } while (0)
extern void gt_pch_nx_eh_region (void *);
#define gt_pch_n_13ehl_map_entry(X) do { \
  if (X != NULL) gt_pch_nx_ehl_map_entry (X);\
  } while (0)
extern void gt_pch_nx_ehl_map_entry (void *);
#define gt_pch_n_16limbo_die_struct(X) do { \
  if (X != NULL) gt_pch_nx_limbo_die_struct (X);\
  } while (0)
extern void gt_pch_nx_limbo_die_struct (void *);
#define gt_pch_n_16dw_ranges_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_ranges_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_ranges_struct (void *);
#define gt_pch_n_14pubname_struct(X) do { \
  if (X != NULL) gt_pch_nx_pubname_struct (X);\
  } while (0)
extern void gt_pch_nx_pubname_struct (void *);
#define gt_pch_n_28dw_separate_line_info_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_separate_line_info_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_separate_line_info_struct (void *);
#define gt_pch_n_19dw_line_info_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_line_info_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_line_info_struct (void *);
#define gt_pch_n_14dw_attr_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_attr_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_attr_struct (void *);
#define gt_pch_n_18dw_loc_list_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_loc_list_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_loc_list_struct (void *);
#define gt_pch_n_15queued_reg_save(X) do { \
  if (X != NULL) gt_pch_nx_queued_reg_save (X);\
  } while (0)
extern void gt_pch_nx_queued_reg_save (void *);
#define gt_pch_n_20indirect_string_node(X) do { \
  if (X != NULL) gt_pch_nx_indirect_string_node (X);\
  } while (0)
extern void gt_pch_nx_indirect_string_node (void *);
#define gt_pch_n_19dw_loc_descr_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_loc_descr_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_loc_descr_struct (void *);
#define gt_pch_n_13dw_fde_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_fde_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_fde_struct (void *);
#define gt_pch_n_13dw_cfi_struct(X) do { \
  if (X != NULL) gt_pch_nx_dw_cfi_struct (X);\
  } while (0)
extern void gt_pch_nx_dw_cfi_struct (void *);
#define gt_pch_n_8typeinfo(X) do { \
  if (X != NULL) gt_pch_nx_typeinfo (X);\
  } while (0)
extern void gt_pch_nx_typeinfo (void *);
#define gt_pch_n_15alias_set_entry(X) do { \
  if (X != NULL) gt_pch_nx_alias_set_entry (X);\
  } while (0)
extern void gt_pch_nx_alias_set_entry (void *);
#define gt_pch_n_18sorted_fields_type(X) do { \
  if (X != NULL) gt_pch_nx_sorted_fields_type (X);\
  } while (0)
extern void gt_pch_nx_sorted_fields_type (void *);
#define gt_pch_n_19cgraph_varpool_node(X) do { \
  if (X != NULL) gt_pch_nx_cgraph_varpool_node (X);\
  } while (0)
extern void gt_pch_nx_cgraph_varpool_node (void *);
#define gt_pch_n_11cgraph_edge(X) do { \
  if (X != NULL) gt_pch_nx_cgraph_edge (X);\
  } while (0)
extern void gt_pch_nx_cgraph_edge (void *);
#define gt_pch_n_11cgraph_node(X) do { \
  if (X != NULL) gt_pch_nx_cgraph_node (X);\
  } while (0)
extern void gt_pch_nx_cgraph_node (void *);
#define gt_pch_n_12elt_loc_list(X) do { \
  if (X != NULL) gt_pch_nx_elt_loc_list (X);\
  } while (0)
extern void gt_pch_nx_elt_loc_list (void *);
#define gt_pch_n_17cselib_val_struct(X) do { \
  if (X != NULL) gt_pch_nx_cselib_val_struct (X);\
  } while (0)
extern void gt_pch_nx_cselib_val_struct (void *);
#define gt_pch_n_15varray_head_tag(X) do { \
  if (X != NULL) gt_pch_nx_varray_head_tag (X);\
  } while (0)
extern void gt_pch_nx_varray_head_tag (void *);
#define gt_pch_n_8elt_list(X) do { \
  if (X != NULL) gt_pch_nx_elt_list (X);\
  } while (0)
extern void gt_pch_nx_elt_list (void *);
#define gt_pch_n_12reg_info_def(X) do { \
  if (X != NULL) gt_pch_nx_reg_info_def (X);\
  } while (0)
extern void gt_pch_nx_reg_info_def (void *);
#define gt_pch_n_14lang_tree_node(X) do { \
  if (X != NULL) gt_pch_nx_lang_tree_node (X);\
  } while (0)
extern void gt_pch_nx_lang_tree_node (void *);
#define gt_pch_n_9lang_decl(X) do { \
  if (X != NULL) gt_pch_nx_lang_decl (X);\
  } while (0)
extern void gt_pch_nx_lang_decl (void *);
#define gt_pch_n_9lang_type(X) do { \
  if (X != NULL) gt_pch_nx_lang_type (X);\
  } while (0)
extern void gt_pch_nx_lang_type (void *);
#define gt_pch_n_10die_struct(X) do { \
  if (X != NULL) gt_pch_nx_die_struct (X);\
  } while (0)
extern void gt_pch_nx_die_struct (void *);
#define gt_pch_n_10real_value(X) do { \
  if (X != NULL) gt_pch_nx_real_value (X);\
  } while (0)
extern void gt_pch_nx_real_value (void *);
#define gt_pch_n_13convert_optab(X) do { \
  if (X != NULL) gt_pch_nx_convert_optab (X);\
  } while (0)
extern void gt_pch_nx_convert_optab (void *);
#define gt_pch_n_5optab(X) do { \
  if (X != NULL) gt_pch_nx_optab (X);\
  } while (0)
extern void gt_pch_nx_optab (void *);
#define gt_pch_n_15basic_block_def(X) do { \
  if (X != NULL) gt_pch_nx_basic_block_def (X);\
  } while (0)
extern void gt_pch_nx_basic_block_def (void *);
#define gt_pch_n_9reg_attrs(X) do { \
  if (X != NULL) gt_pch_nx_reg_attrs (X);\
  } while (0)
extern void gt_pch_nx_reg_attrs (void *);
#define gt_pch_n_9mem_attrs(X) do { \
  if (X != NULL) gt_pch_nx_mem_attrs (X);\
  } while (0)
extern void gt_pch_nx_mem_attrs (void *);
#define gt_pch_n_17language_function(X) do { \
  if (X != NULL) gt_pch_nx_language_function (X);\
  } while (0)
extern void gt_pch_nx_language_function (void *);
#define gt_pch_n_9temp_slot(X) do { \
  if (X != NULL) gt_pch_nx_temp_slot (X);\
  } while (0)
extern void gt_pch_nx_temp_slot (void *);
#define gt_pch_n_20initial_value_struct(X) do { \
  if (X != NULL) gt_pch_nx_initial_value_struct (X);\
  } while (0)
extern void gt_pch_nx_initial_value_struct (void *);
#define gt_pch_n_13varasm_status(X) do { \
  if (X != NULL) gt_pch_nx_varasm_status (X);\
  } while (0)
extern void gt_pch_nx_varasm_status (void *);
#define gt_pch_n_11stmt_status(X) do { \
  if (X != NULL) gt_pch_nx_stmt_status (X);\
  } while (0)
extern void gt_pch_nx_stmt_status (void *);
#define gt_pch_n_9eh_status(X) do { \
  if (X != NULL) gt_pch_nx_eh_status (X);\
  } while (0)
extern void gt_pch_nx_eh_status (void *);
#define gt_pch_n_8function(X) do { \
  if (X != NULL) gt_pch_nx_function (X);\
  } while (0)
extern void gt_pch_nx_function (void *);
#define gt_pch_n_11expr_status(X) do { \
  if (X != NULL) gt_pch_nx_expr_status (X);\
  } while (0)
extern void gt_pch_nx_expr_status (void *);
#define gt_pch_n_11emit_status(X) do { \
  if (X != NULL) gt_pch_nx_emit_status (X);\
  } while (0)
extern void gt_pch_nx_emit_status (void *);
#define gt_pch_n_14sequence_stack(X) do { \
  if (X != NULL) gt_pch_nx_sequence_stack (X);\
  } while (0)
extern void gt_pch_nx_sequence_stack (void *);
#define gt_pch_n_14var_refs_queue(X) do { \
  if (X != NULL) gt_pch_nx_var_refs_queue (X);\
  } while (0)
extern void gt_pch_nx_var_refs_queue (void *);
#define gt_pch_n_15bitmap_head_def(X) do { \
  if (X != NULL) gt_pch_nx_bitmap_head_def (X);\
  } while (0)
extern void gt_pch_nx_bitmap_head_def (void *);
#define gt_pch_n_18bitmap_element_def(X) do { \
  if (X != NULL) gt_pch_nx_bitmap_element_def (X);\
  } while (0)
extern void gt_pch_nx_bitmap_element_def (void *);
#define gt_pch_n_6answer(X) do { \
  if (X != NULL) gt_pch_nx_answer (X);\
  } while (0)
extern void gt_pch_nx_answer (void *);
#define gt_pch_n_9cpp_macro(X) do { \
  if (X != NULL) gt_pch_nx_cpp_macro (X);\
  } while (0)
extern void gt_pch_nx_cpp_macro (void *);
#define gt_pch_n_9tree_node(X) do { \
  if (X != NULL) gt_pch_nx_tree_node (X);\
  } while (0)
#define gt_pch_nx_tree_node gt_pch_nx_lang_tree_node
#define gt_pch_n_9rtvec_def(X) do { \
  if (X != NULL) gt_pch_nx_rtvec_def (X);\
  } while (0)
extern void gt_pch_nx_rtvec_def (void *);
#define gt_pch_n_7rtx_def(X) do { \
  if (X != NULL) gt_pch_nx_rtx_def (X);\
  } while (0)
extern void gt_pch_nx_rtx_def (void *);
extern void gt_pch_n_II17splay_tree_node_s (void *);
extern void gt_pch_n_SP9tree_node17splay_tree_node_s (void *);
extern void gt_pch_n_P15output_def_pair15varray_head_tag (void *);
extern void gt_pch_n_P24constant_descriptor_tree4htab (void *);
extern void gt_pch_n_P14in_named_entry4htab (void *);
extern void gt_pch_n_P9type_hash4htab (void *);
extern void gt_pch_n_P13ehl_map_entry4htab (void *);
extern void gt_pch_n_P9tree_node4htab (void *);
extern void gt_pch_n_P9reg_attrs4htab (void *);
extern void gt_pch_n_P9mem_attrs4htab (void *);
extern void gt_pch_n_P7rtx_def4htab (void *);
extern void gt_pch_n_SP9tree_node12splay_tree_s (void *);
extern void gt_pch_n_P20indirect_string_node4htab (void *);
extern void gt_pch_n_P19cgraph_varpool_node4htab (void *);
extern void gt_pch_n_P11cgraph_node4htab (void *);
extern void gt_pch_n_P17cselib_val_struct4htab (void *);
extern void gt_pch_n_P15alias_set_entry15varray_head_tag (void *);
extern void gt_pch_n_II12splay_tree_s (void *);

/* Local pointer-walking routines.  */
extern void gt_pch_p_11align_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7c_scope
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15output_def_pair
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24constant_descriptor_tree
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14in_named_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13pool_constant
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23constant_descriptor_rtx
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9type_hash
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16string_pool_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10goto_fixup
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11label_chain
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7nesting
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9case_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9eh_region
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13ehl_map_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16limbo_die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16dw_ranges_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14pubname_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28dw_separate_line_info_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19dw_line_info_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14dw_attr_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18dw_loc_list_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15queued_reg_save
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20indirect_string_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19dw_loc_descr_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13dw_fde_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13dw_cfi_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8typeinfo
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15alias_set_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18sorted_fields_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19cgraph_varpool_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cgraph_edge
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cgraph_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12elt_loc_list
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17cselib_val_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15varray_head_tag
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8elt_list
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14lang_tree_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_decl
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10real_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13convert_optab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_5optab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9reg_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9mem_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17language_function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9temp_slot
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20initial_value_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13varasm_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11stmt_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9eh_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11expr_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11emit_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14sequence_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14var_refs_queue
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15bitmap_head_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18bitmap_element_def
    (void *, void *, gt_pointer_operator, void *);
#define gt_pch_p_9tree_node gt_pch_p_14lang_tree_node
extern void gt_pch_p_9rtvec_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7rtx_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_II17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15output_def_pair15varray_head_tag
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P24constant_descriptor_tree4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P14in_named_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9type_hash4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13ehl_map_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9reg_attrs4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9mem_attrs4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P7rtx_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P20indirect_string_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P19cgraph_varpool_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P11cgraph_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17cselib_val_struct4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15alias_set_entry15varray_head_tag
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_II12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
