TExecFunc arrow_dsynonym_init() { return MakeIndirectExec<true, true>(&dsynonym_init); }
TExecFunc arrow_dsynonym_lexize() { return MakeIndirectExec<true, true>(&dsynonym_lexize); }
TExecFunc arrow_elem_contained_by_multirange() { return MakeIndirectExec<true, true>(&elem_contained_by_multirange); }
TExecFunc arrow_hash_multirange() { return MakeIndirectExec<true, true>(&hash_multirange); }
TExecFunc arrow_hash_multirange_extended() { return MakeIndirectExec<true, true>(&hash_multirange_extended); }
TExecFunc arrow_mode_final() { return MakeIndirectExec<false, true>(&mode_final); }
TExecFunc arrow_multirange_adjacent_multirange() { return MakeIndirectExec<true, true>(&multirange_adjacent_multirange); }
TExecFunc arrow_multirange_adjacent_range() { return MakeIndirectExec<true, true>(&multirange_adjacent_range); }
TExecFunc arrow_multirange_after_multirange() { return MakeIndirectExec<true, true>(&multirange_after_multirange); }
TExecFunc arrow_multirange_after_range() { return MakeIndirectExec<true, true>(&multirange_after_range); }
TExecFunc arrow_multirange_before_multirange() { return MakeIndirectExec<true, true>(&multirange_before_multirange); }
TExecFunc arrow_multirange_before_range() { return MakeIndirectExec<true, true>(&multirange_before_range); }
TExecFunc arrow_multirange_cmp() { return MakeIndirectExec<true, true>(&multirange_cmp); }
TExecFunc arrow_multirange_constructor0() { return MakeIndirectExec<true, false>(&multirange_constructor0); }
TExecFunc arrow_multirange_constructor1() { return MakeIndirectExec<true, false>(&multirange_constructor1); }
TExecFunc arrow_multirange_contained_by_multirange() { return MakeIndirectExec<true, true>(&multirange_contained_by_multirange); }
TExecFunc arrow_multirange_contained_by_range() { return MakeIndirectExec<true, true>(&multirange_contained_by_range); }
TExecFunc arrow_multirange_contains_elem() { return MakeIndirectExec<true, true>(&multirange_contains_elem); }
TExecFunc arrow_multirange_contains_multirange() { return MakeIndirectExec<true, true>(&multirange_contains_multirange); }
TExecFunc arrow_multirange_contains_range() { return MakeIndirectExec<true, true>(&multirange_contains_range); }
TExecFunc arrow_multirange_empty() { return MakeIndirectExec<true, true>(&multirange_empty); }
TExecFunc arrow_multirange_eq() { return MakeIndirectExec<true, true>(&multirange_eq); }
TExecFunc arrow_multirange_ge() { return MakeIndirectExec<true, true>(&multirange_ge); }
TExecFunc arrow_multirange_gt() { return MakeIndirectExec<true, true>(&multirange_gt); }
TExecFunc arrow_multirange_in() { return MakeIndirectExec<true, false>(&multirange_in); }
TExecFunc arrow_multirange_intersect() { return MakeIndirectExec<true, false>(&multirange_intersect); }
TExecFunc arrow_multirange_intersect_agg_transfn() { return MakeIndirectExec<true, false>(&multirange_intersect_agg_transfn); }
TExecFunc arrow_multirange_le() { return MakeIndirectExec<true, true>(&multirange_le); }
TExecFunc arrow_multirange_lower() { return MakeIndirectExec<true, true>(&multirange_lower); }
TExecFunc arrow_multirange_lower_inc() { return MakeIndirectExec<true, true>(&multirange_lower_inc); }
TExecFunc arrow_multirange_lower_inf() { return MakeIndirectExec<true, true>(&multirange_lower_inf); }
TExecFunc arrow_multirange_lt() { return MakeIndirectExec<true, true>(&multirange_lt); }
TExecFunc arrow_multirange_minus() { return MakeIndirectExec<true, false>(&multirange_minus); }
TExecFunc arrow_multirange_ne() { return MakeIndirectExec<true, true>(&multirange_ne); }
TExecFunc arrow_multirange_out() { return MakeIndirectExec<true, false>(&multirange_out); }
TExecFunc arrow_multirange_overlaps_multirange() { return MakeIndirectExec<true, true>(&multirange_overlaps_multirange); }
TExecFunc arrow_multirange_overlaps_range() { return MakeIndirectExec<true, true>(&multirange_overlaps_range); }
TExecFunc arrow_multirange_overleft_multirange() { return MakeIndirectExec<true, true>(&multirange_overleft_multirange); }
TExecFunc arrow_multirange_overleft_range() { return MakeIndirectExec<true, true>(&multirange_overleft_range); }
TExecFunc arrow_multirange_overright_multirange() { return MakeIndirectExec<true, true>(&multirange_overright_multirange); }
TExecFunc arrow_multirange_overright_range() { return MakeIndirectExec<true, true>(&multirange_overright_range); }
TExecFunc arrow_multirange_recv() { return MakeIndirectExec<true, false>(&multirange_recv); }
TExecFunc arrow_multirange_send() { return MakeIndirectExec<true, false>(&multirange_send); }
TExecFunc arrow_multirange_union() { return MakeIndirectExec<true, false>(&multirange_union); }
TExecFunc arrow_multirange_upper() { return MakeIndirectExec<true, true>(&multirange_upper); }
TExecFunc arrow_multirange_upper_inc() { return MakeIndirectExec<true, true>(&multirange_upper_inc); }
TExecFunc arrow_multirange_upper_inf() { return MakeIndirectExec<true, true>(&multirange_upper_inf); }
TExecFunc arrow_multirangesel() { return MakeIndirectExec<true, true>(&multirangesel); }
TExecFunc arrow_ordered_set_transition() { return MakeIndirectExec<false, true>(&ordered_set_transition); }
TExecFunc arrow_percentile_cont_float8_final() { return MakeIndirectExec<false, true>(&percentile_cont_float8_final); }
TExecFunc arrow_percentile_cont_float8_multi_final() { return MakeIndirectExec<false, false>(&percentile_cont_float8_multi_final); }
TExecFunc arrow_percentile_cont_interval_final() { return MakeIndirectExec<false, false>(&percentile_cont_interval_final); }
TExecFunc arrow_percentile_cont_interval_multi_final() { return MakeIndirectExec<false, false>(&percentile_cont_interval_multi_final); }
TExecFunc arrow_percentile_disc_final() { return MakeIndirectExec<false, true>(&percentile_disc_final); }
TExecFunc arrow_percentile_disc_multi_final() { return MakeIndirectExec<false, false>(&percentile_disc_multi_final); }
TExecFunc arrow_pg_get_constraintdef() { return MakeIndirectExec<true, false>(&pg_get_constraintdef); }
TExecFunc arrow_pg_get_constraintdef_ext() { return MakeIndirectExec<true, false>(&pg_get_constraintdef_ext); }
TExecFunc arrow_pg_get_expr() { return MakeIndirectExec<true, false>(&pg_get_expr); }
TExecFunc arrow_pg_get_expr_ext() { return MakeIndirectExec<true, false>(&pg_get_expr_ext); }
TExecFunc arrow_pg_get_function_arg_default() { return MakeIndirectExec<true, false>(&pg_get_function_arg_default); }
TExecFunc arrow_pg_get_function_arguments() { return MakeIndirectExec<true, false>(&pg_get_function_arguments); }
TExecFunc arrow_pg_get_function_identity_arguments() { return MakeIndirectExec<true, false>(&pg_get_function_identity_arguments); }
TExecFunc arrow_pg_get_function_result() { return MakeIndirectExec<true, false>(&pg_get_function_result); }
TExecFunc arrow_pg_get_function_sqlbody() { return MakeIndirectExec<true, false>(&pg_get_function_sqlbody); }
TExecFunc arrow_pg_get_functiondef() { return MakeIndirectExec<true, false>(&pg_get_functiondef); }
TExecFunc arrow_pg_get_indexdef() { return MakeIndirectExec<true, false>(&pg_get_indexdef); }
TExecFunc arrow_pg_get_indexdef_ext() { return MakeIndirectExec<true, false>(&pg_get_indexdef_ext); }
TExecFunc arrow_pg_get_partition_constraintdef() { return MakeIndirectExec<true, false>(&pg_get_partition_constraintdef); }
TExecFunc arrow_pg_get_partkeydef() { return MakeIndirectExec<true, false>(&pg_get_partkeydef); }
TExecFunc arrow_pg_get_ruledef() { return MakeIndirectExec<true, false>(&pg_get_ruledef); }
TExecFunc arrow_pg_get_ruledef_ext() { return MakeIndirectExec<true, false>(&pg_get_ruledef_ext); }
TExecFunc arrow_pg_get_serial_sequence() { return MakeIndirectExec<true, false>(&pg_get_serial_sequence); }
TExecFunc arrow_pg_get_statisticsobjdef() { return MakeIndirectExec<true, false>(&pg_get_statisticsobjdef); }
TExecFunc arrow_pg_get_statisticsobjdef_columns() { return MakeIndirectExec<true, false>(&pg_get_statisticsobjdef_columns); }
TExecFunc arrow_pg_get_statisticsobjdef_expressions() { return MakeIndirectExec<true, false>(&pg_get_statisticsobjdef_expressions); }
TExecFunc arrow_pg_get_triggerdef() { return MakeIndirectExec<true, false>(&pg_get_triggerdef); }
TExecFunc arrow_pg_get_triggerdef_ext() { return MakeIndirectExec<true, false>(&pg_get_triggerdef_ext); }
TExecFunc arrow_pg_get_userbyid() { return MakeIndirectExec<true, false>(&pg_get_userbyid); }
TExecFunc arrow_pg_get_viewdef() { return MakeIndirectExec<true, false>(&pg_get_viewdef); }
TExecFunc arrow_pg_get_viewdef_ext() { return MakeIndirectExec<true, false>(&pg_get_viewdef_ext); }
TExecFunc arrow_pg_get_viewdef_name() { return MakeIndirectExec<true, false>(&pg_get_viewdef_name); }
TExecFunc arrow_pg_get_viewdef_name_ext() { return MakeIndirectExec<true, false>(&pg_get_viewdef_name_ext); }
TExecFunc arrow_pg_get_viewdef_wrap() { return MakeIndirectExec<true, false>(&pg_get_viewdef_wrap); }
TExecFunc arrow_pg_jit_available() { return MakeIndirectExec<true, true>(&pg_jit_available); }
TExecFunc arrow_pg_lsn_cmp() { return MakeIndirectExec<true, true>(&pg_lsn_cmp); }
TExecFunc arrow_pg_lsn_eq() { return MakeIndirectExec<true, true>(&pg_lsn_eq); }
TExecFunc arrow_pg_lsn_ge() { return MakeIndirectExec<true, true>(&pg_lsn_ge); }
TExecFunc arrow_pg_lsn_gt() { return MakeIndirectExec<true, true>(&pg_lsn_gt); }
TExecFunc arrow_pg_lsn_hash() { return MakeIndirectExec<true, true>(&pg_lsn_hash); }
TExecFunc arrow_pg_lsn_hash_extended() { return MakeIndirectExec<true, true>(&pg_lsn_hash_extended); }
TExecFunc arrow_pg_lsn_in() { return MakeIndirectExec<true, true>(&pg_lsn_in); }
TExecFunc arrow_pg_lsn_larger() { return MakeIndirectExec<true, true>(&pg_lsn_larger); }
TExecFunc arrow_pg_lsn_le() { return MakeIndirectExec<true, true>(&pg_lsn_le); }
TExecFunc arrow_pg_lsn_lt() { return MakeIndirectExec<true, true>(&pg_lsn_lt); }
TExecFunc arrow_pg_lsn_mi() { return MakeIndirectExec<true, false>(&pg_lsn_mi); }
TExecFunc arrow_pg_lsn_mii() { return MakeIndirectExec<true, true>(&pg_lsn_mii); }
TExecFunc arrow_pg_lsn_ne() { return MakeIndirectExec<true, true>(&pg_lsn_ne); }
TExecFunc arrow_pg_lsn_out() { return MakeIndirectExec<true, false>(&pg_lsn_out); }
TExecFunc arrow_pg_lsn_pli() { return MakeIndirectExec<true, true>(&pg_lsn_pli); }
TExecFunc arrow_pg_lsn_recv() { return MakeIndirectExec<true, true>(&pg_lsn_recv); }
TExecFunc arrow_pg_lsn_send() { return MakeIndirectExec<true, false>(&pg_lsn_send); }
TExecFunc arrow_pg_lsn_smaller() { return MakeIndirectExec<true, true>(&pg_lsn_smaller); }
TExecFunc arrow_range_adjacent_multirange() { return MakeIndirectExec<true, true>(&range_adjacent_multirange); }
TExecFunc arrow_range_after_multirange() { return MakeIndirectExec<true, true>(&range_after_multirange); }
TExecFunc arrow_range_agg_finalfn() { return MakeIndirectExec<false, false>(&range_agg_finalfn); }
TExecFunc arrow_range_agg_transfn() { return MakeIndirectExec<false, true>(&range_agg_transfn); }
TExecFunc arrow_range_before_multirange() { return MakeIndirectExec<true, true>(&range_before_multirange); }
TExecFunc arrow_range_contained_by_multirange() { return MakeIndirectExec<true, true>(&range_contained_by_multirange); }
TExecFunc arrow_range_contains_multirange() { return MakeIndirectExec<true, true>(&range_contains_multirange); }
TExecFunc arrow_range_merge_from_multirange() { return MakeIndirectExec<true, false>(&range_merge_from_multirange); }
TExecFunc arrow_range_overlaps_multirange() { return MakeIndirectExec<true, true>(&range_overlaps_multirange); }
TExecFunc arrow_range_overleft_multirange() { return MakeIndirectExec<true, true>(&range_overleft_multirange); }
TExecFunc arrow_range_overright_multirange() { return MakeIndirectExec<true, true>(&range_overright_multirange); }
TExecFunc arrow_spg_quad_choose() { return MakeIndirectExec<true, true>(&spg_quad_choose); }
TExecFunc arrow_spg_quad_config() { return MakeIndirectExec<true, true>(&spg_quad_config); }
TExecFunc arrow_spg_quad_inner_consistent() { return MakeIndirectExec<true, true>(&spg_quad_inner_consistent); }
TExecFunc arrow_spg_quad_leaf_consistent() { return MakeIndirectExec<true, true>(&spg_quad_leaf_consistent); }
TExecFunc arrow_spg_quad_picksplit() { return MakeIndirectExec<true, true>(&spg_quad_picksplit); }
TExecFunc arrow_spghandler() { return MakeIndirectExec<true, true>(&spghandler); }